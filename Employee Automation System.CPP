
	#include<iostream.h>
	#include<graphics.h>
	#include<conio.h>
	#include<dos.h>
	#include<stdio.h>
	#include<string.h>
	#include<stdlib.h>
	int a,b,c,d,e,n=1;
///////////////////////////////////////////////////////////////////////////////////////////////////////////
	// # window #
//          ===========

	void curlywindow(int xaxis,int yaxis,int size,int ad)
	 {

	 arc(xaxis      , yaxis      , 90  , 180 , size);
	 arc(xaxis      , yaxis - ad , 270 , 360 , size);
	 arc(xaxis+ad   , yaxis - ad , 180 , 270 , size);
	 arc(xaxis+ad   , yaxis      , 0   , 90  , size);
	 }
/////////////////////////////////////////////////////////////////////////////////////////////////////////
	// # Goonband # //
	void arcwindow(int x1 , int y1 , int ad ,int size , int in , int len)
	{
	 arc( x1       , y1 , 113 , 180 , size);
	 delay(n);
	 arc( x1-ad-in , y1 , 0   , 67  , size);
	 delay(n);
	 line( x1       , y1 , x1  , y1+len);
	 delay(n);
	 line( x1-ad-in , y1 , x1-ad-in , y1+len);
	 delay(n);
	}
////////////////////////////////////////////////////////////////////////////////////
	  // # Top Mount # //
	   void topper(int x1 , int y1 , int c1 , int c2  )
	     {
	       line( x1   , y1    , x1   , y1-3 );
	       delay(n);
	     circle( x1   , y1-7  , c1          );
	       delay(n);
	       line( x1   , y1-11 , x1   , y1-14);
	       delay(n);
	     circle( x1   , y1-16 , c2          );
	       delay(n);
	       line( x1   , y1-18 , x1   , y1-20);
	       delay(n);
	       line( x1-1 , y1-20 , x1+1 , y1-20);
	       delay(n);
	       line( x1-1 , y1-20 , x1   , y1-30);
	       delay(n);
	       line( x1   , y1-30 , x1+1 , y1-20);
	       delay(n);
	     }
////////////////////////////////////////////////////////////////////////
	     void chottap(int x1 , int y1 , int x2 , int y2, int ad ,int p ,int q)
	     {
	     line(x1+ad+p     , y1 , x2+ad+p     , y2);
	     line(x1+4+ad+p   , y1 , x1+4+ad+p   , y2);
	     line(x1+54+ad+p  , y1 , x1+54+ad+p  , y2);
	     line(x1+58+ad+p  , y1 , x1+58+ad+p  , y2);
	     line(x1+425+ad+q , y1 , x1+425+ad+q , y2);
	     line(x1+421+ad+q , y1 , x1+421+ad+q , y2);
	     line(x1+370+ad+q , y1 , x1+370+ad+q , y2);
	     line(x1+366+ad+q , y1 , x1+366+ad+q , y2);

	     }
//////////////////////////////////////////////////////////////////////////////////////////////////////////
	  // # Pillar # //

	     void pillar(int x1,int y1,int pxd,int nxd,int pyd,int nyd)
	     {
	       line(x1 , y1 , x1+pxd-nxd , y1+pyd-nyd);
	     }
///////////////////////////////////////////////////////////////////////////

///////////////////////////////////////////////////////////////////////////////////////////////////////////
	class Employee
	{
	    int EmpNo;
	    char Name[30];
	    char gen[10];
	    int a;
	    char c[10];
	    unsigned long salary;

	    public :

		   void set()
		     {
		 //    cout<< endl<<"========================================================";
	    dubara :   cout<<endl<<"Enter the Employee's Unique ID : ";
		     cin>>EmpNo;

			     Employee e;
			     FILE *fp;
			     fp=fopen("C:\\TURBOC3\\new.txt","rb");

			     if(fp==NULL)
				{
				cout<<"\n\tFILE DOES NOT EXIST !!!\TRY AGAIN ";
				getch();
				exit(0);
				}
			      while((fread (&e,sizeof(e),1,fp))==1)
			      {
				if(e.getEmp_no()==EmpNo)
				  {
				   for (a=0 ; a<1 ; a++)
				   {
				   cout<<"\n=============================================\n";
				   cout<<"Please Enter the New Different Unique Id !\n";
				   cout<<"=============================================\n";
				   }
				   goto dubara;
				   }
			      }
				 cout<<"  AVAILABLE !!!"   <<endl;
				 fclose(fp);
		     cout<<"Enter the Name of Employee  : ";
		     gets(Name);
		     cout<<"Enter the Employee Salary   : Rs.";
		     cin>>salary;
		     }
		   void show()
		     {
		     cout<<endl<<endl;
		     cout<<"Employee ID     : "<<EmpNo<<endl;
		     cout<<"Employee Name   : "<<Name<<endl;
		     cout<<"Employee Salary : Rs."<<salary<<endl;
		     }

		   void change()
		     {
			 cout<<endl<<endl<<"Enter the New Name : ";
			 gets(Name);
			 cout<<endl<<"Enter the Salary : Rs. ";
			 cin>>salary;
		     }

		    int getEmp_no()
		    {
		      return EmpNo;
		    }
	};
 ///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

	  void append()
	  {
			     int i,n=0;
			     Employee e;
			     FILE *fp;
			     fp=fopen("C:\\TURBOC3\\new.txt","a");

			     if(fp==NULL)
				{
				cout<<"FILE CREATION FAILED ! ";
				getch();
				exit(0);
				}

				cout<<endl<<endl<<"Enter the no. of Employees : ";
				cin>>n;

				for(i=0 ; i<n ; i++)
				{
				e.set();
				fwrite(&e,sizeof(e),1,fp);
				}
				fclose(fp);
				cout<<"\n RECORD ENTERED SUCCESSFULLY ";
				for(i=0 ; i<3 ; i++)
				{
				cout<<"!";
				delay(500);
				}
	  }
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
     // Function for View Module .
	  void view()
	  {
			     int num_of_reco=0;
			     Employee e;
			     FILE *fp;
			     fp=fopen("C:\\TURBOC3\\new.txt","rb");

			     if(fp==NULL)
				{
				cout<<"\n\tFILE DOES NOT EXIST !!!\TRY AGAIN ";
				getch();
				exit(0);
				}

			     while((fread (&e,sizeof(e),1,fp))==1)
			     {
				 num_of_reco++;
				 e.show();
				 cout<<"\n================================";
			     }

			     cout<<"\n Total number of Records present are : "<<num_of_reco;
			     fclose(fp);


	  }
////////////////////////////////////////////////////////////////////////////////////////////////////////////
    // function for Search Operation.
	  void search()
	  {
			     Employee e;
			     FILE *fp;
			     fp=fopen("C:\\TURBOC3\\new.txt","rb");
			     int emp_Id;

			     cout<<endl<<"Enter the Employee Id you want to search : ";
			     cin>>emp_Id;

			     if(fp==NULL)
				{
				cout<<"\n\tFILE DOES NOT EXIST !!!\TRY AGAIN ";
				getch();
				exit(0);
				}
			     int flag=0;
			     while((fread (&e,sizeof(e),1,fp))==1)
			     {
				 if(e.getEmp_no()==emp_Id)
				 {
				 flag=1;
				 e.show();
				 break;
				 }
			      }
				 if(flag==0)
				 {
				 cout<<"\nSearch is UNSUCCESSFULL !";
				 }
			     fclose(fp);
	   }
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
	  void modify()
	  {
	  int eno,i, no_frec=0;
	  char ch;
	  Employee e;

	  FILE *fp;
	  fp=fopen("C:\\TURBOC3\\new.txt","rb+");
	  cout<<"Enter the Employee ID which you want to Modify ! "<<endl;
	  cin>>eno;
	  while((fread(&e,sizeof(e),1,fp))==1)
	  {
	  no_frec++;
	  if(e.getEmp_no()==eno)
	  {
	  e.show();
	  cout<<"\n\nDo You Want to Modify This Record (Y/N) : ";
	  cin>>ch;
	  int v = (no_frec-1) * sizeof(e);
	  cout<<"\n address is ::"<< v;

	  fseek(fp,((no_frec - 1)*sizeof(e)),0);

	  if(ch=='Y' || ch=='y')
	  {
	   e.change();
	   fwrite(&e,sizeof(e),1,fp);
	   cout<<"Record Modified ";
	   for(i=0 ; i<3 ; i++)
	    {
	     cout<<"!";
	     delay(500);
	    }
	   }
	   else
	    {
	    cout<<"No Modifications were Made ! ";
	    }
	    fclose(fp);
	  }
	  }
	  }
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
	  void del()
	  {
	   int eno ;
	   char ch;
	   Employee e;
	   FILE *fp,*ft;
	   fp=fopen("C:\\TURBOC3\\new.txt","rb");
	   ft=fopen("C:\\TURBOC3\\Temp.txt","wb");

	   cout<<"\n Enter the Employee ID to Delete !"<<endl;
	   cin>>eno;

	   while((fread(&e,sizeof(e),1,fp))==1)
	     {
	     if(e.getEmp_no()==eno)
	       {
	       e.show();

	       cout<<"\n\n Do You Want to Delete this Record (Y/N) : ";
	       ch=getch();
	       }
	     }

	   if(ch=='Y' || ch=='y')
	     {
	     rewind(fp);

	     while((fread(&e,sizeof(e),1,fp))==1)
	       {
	       if(eno != e.getEmp_no())
		 {
		 fwrite(&e,sizeof(e),1,ft);
		 }

	       }
	   fclose(fp);
	   fclose(ft);
	   remove("C:\\TC\\new.txt") ;
	   rename("C:\\TC\\Temp.txt","C:\\TC\\new.txt");
	   }

	   else
	      {
	      cout<<"No Record was Deleted !";
	      }

	  }
/////////////////////////////////////////////////////////////////////////////////
	void led()
	{
	int x=0,y=0,z,u,o,le=50,i=14,co;
	rectangle(x,y,639,479);
	rectangle(x+30,y+30,609,449);
	for(x=599,y=49,z=49,u=434 ; x>=49,y<=434,z<=599,u>=49 ; x-=110,y+=77,z+=110,u-=77)
	{
	  setcolor(WHITE);
	  circle(x,15,7);
	  circle(z,464,7);
	  circle(15,y,7);
	  circle(624,u,7);
	}
	  rectangle(le,le-3,le+40,le+37);
	  rectangle(le+500,le-3,le+540,le+37);
	  rectangle(le,le+342,le+40,le+382);
	  rectangle(le+500,le+342,le+540,le+382);
	while(!kbhit())
	{
	 for(co=1,o=6 ; co<=9,o<=15 ; co+=1,o+=2)
	   {
	    setcolor(o);
	    settextstyle(9,0,2);
	    outtextxy(230,70,"WELCOME");
	    outtextxy(292,130,"TO");
	    outtextxy(120,190,"EMPLOYEE AUTOMATION");
	    outtextxy(242,250,"SERVICE !");
	     settextstyle(5,0,1);
	    outtextxy(240,400,"Press Enter Key !!!");
	    delay(30);
	   setcolor(WHITE);
	   setfillstyle(co,co+2);
	   floodfill(60,50,WHITE);
	   setfillstyle(co,co+2);
	   floodfill(560,50,WHITE);
	   setfillstyle(co,co+2);
	   floodfill(60,400,WHITE);
	   setfillstyle(co,co+2);
	   floodfill(560,400,WHITE);
	   rectangle(220,403,410,433);

	   setfillstyle(1,RED);
	   floodfill(235,410,WHITE);
	    setcolor(o+3);
	    settextstyle(5,0,1);
	    outtextxy(240,400,"Press Enter Key !!!");
	   delay(10);
	   }
	  for(x=599,y=49,z=49,u=434,o=6,co=1 ; x>=49,y<=434,z<=599,u>=49,o<=15,co<=9 ; x-=110,y+=77,z+=110,u-=77,o+=2,co+=1)
	  {
	     setcolor(o);
	    settextstyle(9,0,2);
	    outtextxy(230,70,"WELCOME");
	    outtextxy(292,130,"TO");
	    outtextxy(120,190,"EMPLOYEE AUTOMATION");
	    outtextxy(242,250,"SERVICE !");
	     settextstyle(5,0,1);
	    outtextxy(240,400,"Press Enter Key !!!");
	    delay(10);
	   setcolor(WHITE);
	   setfillstyle(co,co+2);
	   floodfill(60,50,WHITE);
	   setfillstyle(co,co+2);
	   floodfill(560,50,WHITE);
	   setfillstyle(co,co+2);
	   floodfill(60,400,WHITE);
	   setfillstyle(co,co+2);
	   floodfill(560,400,WHITE);
	   rectangle(220,403,410,433);

	   setfillstyle(1,RED);
	   floodfill(235,410,WHITE);
	    setcolor(o+3);
	    settextstyle(5,0,1);
	    outtextxy(240,400,"Press Enter Key !!!");
	   delay(10);
	    setcolor(o+3);
	    settextstyle(5,0,1);
	    outtextxy(240,400,"Press Enter Key !!!");
	    setcolor(WHITE);
	  setfillstyle(1,i);              // yellow=14
	  floodfill(x,15,WHITE);
	  setfillstyle(1,i-10);           // Red=4
	  floodfill(z,464,WHITE);
	  setfillstyle(1,i-13);           // Blue=1
	  floodfill(15,y,WHITE);
	  setfillstyle(1,i-11);           // Cyan=3
	  floodfill(624,u,WHITE);
	   setfillstyle(1,YELLOW);
	   floodfill(235,410,WHITE);
	    setcolor(o+3);
	    settextstyle(5,0,1);
	    outtextxy(240,400,"Press Enter Key !!!");
	   delay(20);
	  }

	  for(x=599,y=49,z=49,u=434,o=2,co=1 ; x>=49,y<=434,z<=599,u>=49,o<=14,co<=9 ; x-=110,y+=77,z+=110,u-=77,o++,co+=1)
	{
	  setcolor(o);
	    settextstyle(9,0,2);
	    outtextxy(230,70,"WELCOME");
	    outtextxy(292,130,"TO");
	    outtextxy(120,190,"EMPLOYEE AUTOMATION");
	    outtextxy(242,250,"SERVICE !");
	     settextstyle(5,0,1);
	    outtextxy(240,400,"Press Enter Key !!!");
	    delay(30);
	   setcolor(WHITE);
	   setfillstyle(co,co+2);
	   floodfill(60,50,WHITE);
	   setfillstyle(co,co+2);
	   floodfill(560,50,WHITE);
	   setfillstyle(co,co+2);
	   floodfill(60,400,WHITE);
	   setfillstyle(co,co+2);
	   floodfill(560,400,WHITE);
	   rectangle(220,403,410,433);

	   setfillstyle(1,RED);
	   floodfill(235,410,WHITE);
	    setcolor(o+3);
	    settextstyle(5,0,1);
	    outtextxy(240,400,"Press Enter Key !!!");
	   delay(20);
	  setcolor(WHITE);
	  setfillstyle(1,i-11);              // cyan=3
	  floodfill(x,15,WHITE);
	  setfillstyle(1,i-13);           // BLUE=1
	  floodfill(z,464,WHITE);
	  setfillstyle(1,i);           // yellow=14
	  floodfill(15,y,WHITE);
	  setfillstyle(1,i-10);           // red=4
	  floodfill(624,u,WHITE);
	  rectangle(220,403,410,433);
	  delay(20);
	  }
	  for(x=599,y=49,z=49,u=434,o=2,co=1 ; x>=49,y<=434,z<=599,u>=49,o<=14,co<=9 ; x-=110,y+=77,z+=110,u-=77,o++,co+=1)
	  {
	    setcolor(o);
	    settextstyle(9,0,2);
	    outtextxy(230,70,"WELCOME");
	    outtextxy(292,130,"TO");
	    outtextxy(120,190,"EMPLOYEE AUTOMATION");
	    outtextxy(242,250,"SERVICE !");
	     settextstyle(5,0,1);
	    outtextxy(240,400,"Press Enter Key !!!");
	    delay(20);
	   setcolor(WHITE);
	   setfillstyle(co,co+2);
	   floodfill(60,50,WHITE);
	   setfillstyle(co,co+2);
	   floodfill(560,50,WHITE);
	   setfillstyle(co,co+2);
	   floodfill(60,400,WHITE);
	   setfillstyle(co,co+2);
	   floodfill(560,400,WHITE);
	   rectangle(220,403,410,433);

	   setfillstyle(1,RED);
	   floodfill(235,410,WHITE);
	    setcolor(o+3);
	    settextstyle(5,0,1);
	    outtextxy(240,400,"Press Enter Key !!!");
	   delay(20);
	  setcolor(WHITE);
	  setfillstyle(1,i-10);              // red=4
	  floodfill(x,15,WHITE);
	  setfillstyle(1,i);           // yellow
	  floodfill(z,464,WHITE);
	  setfillstyle(1,i-11);	 // cyan=3
	  floodfill(15,y,WHITE);
	  setfillstyle(1,i-13);           // blue=1
	  floodfill(624,u,WHITE);
	  rectangle(220,403,410,433);
	   setfillstyle(1,CYAN);
	   floodfill(235,410,WHITE);
	    setcolor(o+3);
	    settextstyle(5,0,1);
	    outtextxy(240,400,"Press Enter Key !!!");
	  delay(20);
	 }

	  for(x=599,y=49,z=49,u=434,o=2,co=1 ; x>=49,y<=434,z<=599,u>=49,o<=14,co<=9 ; x-=110,y+=77,z+=110,u-=77,o++,co+=1)
	  {
	   setcolor(o);
	    settextstyle(9,0,2);
	    outtextxy(230,70,"WELCOME");
	    outtextxy(292,130,"TO");
	    outtextxy(120,190,"EMPLOYEE AUTOMATION");
	    outtextxy(242,250,"SERVICE !");
	     settextstyle(5,0,1);
	    outtextxy(240,400,"Press Enter Key !!!");
	    delay(20);
	   setcolor(WHITE);
	   setfillstyle(co,co+2);
	   floodfill(60,50,WHITE);
	   setfillstyle(co,co+2);
	   floodfill(560,50,WHITE);
	   setfillstyle(co,co+2);
	   floodfill(60,400,WHITE);
	   setfillstyle(co,co+2);
	   floodfill(560,400,WHITE);
	   rectangle(220,403,410,433);

	   setfillstyle(1,RED);
	   floodfill(235,410,WHITE);
	    setcolor(o+3);
	    settextstyle(5,0,1);
	    outtextxy(240,400,"Press Enter Key !!!");
	   delay(20);
	  setcolor(WHITE);
	  setfillstyle(1,i-13);              // BLUE=1
	  floodfill(x,15,WHITE);
	  setfillstyle(1,i-11);           // CYAN=3
	  floodfill(z,464,WHITE);
	  setfillstyle(1,i-10);           // RED=4
	  floodfill(15,y,WHITE);
	  setfillstyle(1,i);           //yellow=14
	  floodfill(624,u,WHITE);
	    setcolor(o+3);
	    settextstyle(5,0,1);
	    outtextxy(240,400,"Press Enter Key !!!");
	   delay(20);
	}
	}
	}

/////////////////////////////////////////////////////////////////////////////////////
	void led1()
	{

	}
////////////////////////////////////////////////////////////////////////////////////////

	void main()
	{
	int x=0,y=0,z,u,o,le=50;
	int gd=DETECT,gm,i=14,co;
	initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
	cleardevice();
	led();
	getch();
	cleardevice();
	char x1,x2,x3,x4;
	int flag=0,c=0;
	char mat[4];

	cleardevice();
	setcolor(WHITE);
	setbkcolor(0);
	x1=x2=x3=x4=0;

	setlinestyle(0,0,3);
	rectangle(1,1,639,479);
	rectangle(30,30,609,449);
	 settextstyle(9,0,4);
	 setcolor(LIGHTMAGENTA);
	  outtextxy(156,59,"Secure Mode !");
	 outtextxy(155,60,"Secure Mode !");
	  outtextxy(156,60,"Secure Mode !");
	   outtextxy(157,60,"Secure Mode !");
	 setlinestyle(0,0,1);
	 setcolor(LIGHTCYAN);
	 while(!kbhit())
	 {
	 for(co=1 ; co<=9 ; co+=1)
	   {

	     setfillstyle(1,co);
	     floodfill(3,3,WHITE);
	     rectangle(480,180,580,300);
	     rectangle(200,180,300,300);
	     rectangle(340,180,440,300);
	     rectangle(60,180,160,300);
	    }
	  }
	     x1=x2=x3=x4=0;
	     setfillstyle(1,YELLOW);
	     floodfill(3,3,WHITE);
	char ori[5]="1234";
	x1=getch();
	setcolor(YELLOW);

	settextstyle(7,0,10);
	outtextxy(90,175,"*");
	x2=getch();

	settextstyle(7,0,10);
	outtextxy(230,175,"*");
	x3=getch();

	settextstyle(7,0,10);
	outtextxy(370,175,"*");
	x4=getch();

	settextstyle(7,0,10);
	outtextxy(510,175,"*");
	setcolor(WHITE);
	mat[0]=x1;
	mat[1]=x2;
	mat[2]=x3;
	mat[3]=x4;

	if(strcmp(ori,mat)==0)
	{
	 setfillstyle(1,GREEN);
	 floodfill(3,3,WHITE);
	 setlinestyle(2,0,1);
	 rectangle(107,350,550,410);
	 setcolor(LIGHTBLUE);
	 settextstyle(5,0,5);
	 outtextxy(131,340,"Password is Correct !");
	 delay(1500);
	// exit(0);

	}

	else
	{
	  flag=1;
	  setcolor(WHITE);
	  setlinestyle(2,0,1);
	 rectangle(130,350,510,410);
	 setcolor(RED);
	 settextstyle(5,0,5);
	 outtextxy(150,340,"Wrong Password !");
	 setfillstyle(1,RED);
	 floodfill(3,3,WHITE);
	 setcolor(WHITE);
	 settextstyle(2,0,6);
	 delay(3000);
	 exit(0);
	 }
    /*	if (flag==1 && c==3)
	 {
	  delay(2000);
	 exit(0);
	 }
	 if(flag==1 && c==2)
	 {
	 outtextxy(220,420,"You Have 1 Attempt !");
	 c++;
	 delay(3000);
	 goto dubara;
	 }
	 if(flag==1 && c==1)
	 {
	 outtextxy(220,420,"You Have 2 Attempt !");
	 c++;
	 delay(3000);
	 goto dubara;
	 }
	 else//(flag==1 && c==0)
	 {
	 outtextxy(220,420,"You Have 3 Attempt !");
	 c++;
	 delay(3000);
	 goto dubara;
	 } */
	if(x4==52)
	{
	cleardevice();
	}
	i=0;
	int k;
	setbkcolor(DARKGRAY);
	setlinestyle(0,0,1);
	for (k=53,o=2 ; o<=90,k<=580 ; o++,k+=5)
	{
	cleardevice();
	i++;
	setcolor(o);
	rectangle(1,1,639,479);
	rectangle(30,30,609,449);
	settextstyle(9,0,2);
	outtextxy(226,50,"please wait ...");

	setcolor(WHITE);
	rectangle(6,455,633,473);
	rectangle(6,6,25,473);
	rectangle(615,6,633,473);
	rectangle(6,6,633,25);
	rectangle(55,220,552,240);
	rectangle(57,222,k,238);
	rectangle(57,222,k+1,238);
	setfillstyle(1,o+5);
	floodfill(65,232,WHITE);
	gotoxy(35,17);
	cout<<"loading "<<i<<"%";
	if(i==100)
	{
	 break;
	}
	delay(50);
	}
	cleardevice();
	setbkcolor(0);
	setcolor(0);
	while(1)
	    {
	     clrscr();
	     cleardevice();
	     cout<<"================================================================================";
	     cout<<"       ----------------------- EMPLOYEES SERVICES ------------------------";
	     cout<<endl<<"================================================================================"<<endl<<endl<<endl;
	     cout<<"You Have Following Options for Employess :--"<<endl<<endl;
	     cout<<"1. ADD New Employee Data."<<endl;
	     cout<<"2. View Existing Employee."<<endl;
	     cout<<"3. Search Employee for Details."<<endl;
	     cout<<"4. Modify Existing Employee Data."<<endl;
	     cout<<"5. Delete Employee Data from Record."<<endl;
	     cout<<"6. Press to quit from Services."<<endl;
	     cout<<endl<<"Please Enter Option (1-6) : ";
 ////////////////////////////////////////////////////////////////////////////////////////////

	//  Here is Code for Choice :

	     int choice;
	     char y[15]={'/','--','\\','/','--','\\','/','--','\\','/','--','\\','/','--','\\'};
	     cin>>choice;
	     int r=choice;
		 switch(choice)
		   {
		      case 1 : append();
			     break;

		      case 2 : view();
			     break;

		      case 3 : search();
			     break;

		      case 4 : modify();
			     break;

		      case 5 : del();
			     break;

		      case 6 :    cleardevice();
				  n=10;
				 cleardevice();
				 setcolor(WHITE);
				 circle(320,240,500);
		  setfillstyle(1,WHITE);
		  floodfill(320,240,BLACK);

		  line(0,479,639,479);

		  delay(n);
		  line(0,445,639,445);
		  delay(n);
		  line(639,445,639,479);
		  delay(n);
		  for(a=1 ; a<=639 ; a+=29)
		   {
		     line(a,445,a,479);
		     delay(n);
		   }

		  for(a=11 ; a<=638 ; a+=29)
		   {
		   curlywindow(a,458,5,10);
		   delay(n);
		   }

	  line(1,458,6,458);
	  delay(n);
	  for(a=26 ; a<=638 ; a+=29)
	  {
	  line(a,458,a+9,458);
	  delay(n);
	  }
	/*  Base gates side  */

	  for(a=6 ; a<=638 ; a+=29)
	  {
	  line(a,458,a,479);
	  line(20+a,458,20+a,479);
	  delay(n);
	  }
	/*  Base gates texture fill */
	  for(a=6 ; a<=638 ; a+=29)
	  {
	  setfillstyle(9,WHITE);
	  floodfill(a,448,WHITE);
	  delay(n);
	  }

	 /*   Base Gates wall color fill */
	  for(a=3 ; a<=638 ; a+=29)
	  {
	  setfillstyle(1,WHITE);
	  floodfill(a,465,WHITE);
	  floodfill(a+25,465,WHITE);
	  delay(n);
	  }
//////////////////////////////////////////////////////////////////////////////////////////////
	  // # Pillar1 step 1 # //

	     line(11,390,4,445);
	     delay(n);
	     line(41,390,48,445);
	     delay(n);
	     ellipse(26,396,41,140,20,8);
	     delay(n);
	     ellipse(27,389,40,140,28,8);
	     delay(n);
	     line(4,384,12,390);
	     delay(n);
	     line(47,384,40,390);
	     delay(n);
	     line(4,377,4,385);
	     delay(n);
	     line(47,376,47,385);
	     delay(n);
	     ellipse(27,382,40,140,28,8);
	     delay(n);
	     setfillstyle(5,WHITE);
	     delay(n);
	     floodfill(12,385,WHITE);
	     delay(n);

//////////////////////////////////////////////////////////////////////////////////////////////////////////
	  // # Pillar1 step 2 # //

	     line(11,375,14,303);
	     delay(n);
	     line(41,375,37,303);
	     delay(n);
	     ellipse(26,307,40,140,15,8);
	     delay(n);
	     ellipse(26,301,40,140,24,8);
	     delay(n);
	     line(8,296,14,302);
	     delay(n);
	     line(43,296,37,302);
	     delay(n);
	     line(7,295,7,289);
	     delay(n);
	     line(44,295,44,289);
	     delay(n);
	     ellipse(26,294,40,140,25,8);
	     delay(n);
	     setfillstyle(5,WHITE);
	     delay(n);
	     floodfill(14,301,WHITE);
	     delay(n);
//////////////////////////////////////////////////////////////////////////////////////////////////////////
	  // # Pillar step 3 # //

	       line(12,287,15,210);
	       delay(n);
	       line(38,287,35,210);
	       delay(n);
	       ellipse(26,215,40,140,13,8);
	       delay(n);
	       ellipse(26,210,40,140,28,8);
	       delay(n);
	       line(15,210,4,204);
	       delay(n);
	       line(35,210,47,204);
	       delay(n);
	       line(4,205,4,199);
	       delay(n);
	       line(47,205,47,199);
	       delay(n);
	      ellipse(26,203,40,140,28,8);
	       delay(n);
	      ellipse(26,202,40,140,28,8);
	       delay(n);
	       setfillstyle(5,WHITE);
	       delay(n);
	       floodfill(17,205,WHITE);
	       delay(n);
///////////////////////////////////////////////////////////////////////////////////////
	     // # Goonband # \\
	     line(5,165,5,199);
	     delay(n);
	     line(46,165,46,199);
	     delay(n);
	     ellipse(26,162,0,360,26,5);
	     delay(n);
	     ellipse(26,160,0,360,26,2);
	     delay(n);
	     setfillstyle(9,WHITE);
	     delay(n);
	     floodfill(26,160,WHITE);
	     delay(n);
	     arcwindow(23,180,8,9,1,14);
	     delay(n);
	     arcwindow(36,180,8,9,1,14);
	     delay(n);
	     arc(2,180,0,65,8);
	     delay(n);
	     line(10,180,10,195);
	     delay(n);
	     arc(49,180,117,180,8);
	     delay(n);
	     line(40,180,40,195);
	     delay(n);
	     arcwindow(50,160,47,48,0,0);
	     delay(n);
	     topper( 26 , 117 , 4 , 2);
	     delay(n);
///////////////////////////////////////////////////////////////////////////////
	     // pillar2 step 1
	     line(628,390,635,445);
	      delay(n);
	     line(598,390,591,445);
	      delay(n);
	     ellipse(613,396,41,140,20,8);
	      delay(n);
	     ellipse(613,389,40,140,28,8);
	      delay(n);
	     line(635,384,627,390);
	      delay(n);
	     line(592,384,599,390);
	      delay(n);
	     line(635,377,635,385);
	      delay(n);
	     line(592,376,592,385);
	      delay(n);
	     ellipse(613,382,40,140,28,8);
	      delay(n);
	     setfillstyle(5,WHITE);
	      delay(n);
	     floodfill(627,385,WHITE);
	      delay(n);

//////////////////////////////////////////////////////////////////////////////
	      // pillar2 step 2
	     line(628,375,625,303);
	      delay(n);
	     line(598,375,602,303);
	      delay(n);
	     ellipse(614,307,40,140,15,8);
	      delay(n);
	     ellipse(614,301,40,140,24,8);
	      delay(n);
	     line(631,296,625,302);
	      delay(n);
	     line(596,296,602,302);
	      delay(n);
	     line(632,295,632,289);
	      delay(n);
	     line(595,295,595,289);
	      delay(n);
	     ellipse(613,294,40,140,25,8);
	      delay(n);
	     setfillstyle(5,WHITE);
	      delay(n);
	     floodfill(626,299,WHITE);
	      delay(n);

 //////////////////////////////////////////////////////////////////////////////////
		// pillar2 step 3
	       line(627,287,624,210);
		delay(n);
	       line(601,287,604,210);
		delay(n);
	       ellipse(614,215,40,140,13,8);
		delay(n);
	       ellipse(614,210,40,140,28,8);
		delay(n);
	       line(624,210,635,204);
		delay(n);
	       line(604,210,593,206);
		delay(n);
	       line(635,205,635,198);
		delay(n);
	       line(591,205,591,198);
		delay(n);
	      ellipse(614,203,40,140,30,8);
		delay(n);
	      ellipse(614,202,40,140,30,8);
		delay(n);
	       setfillstyle(5,WHITE);
		delay(n);
	       floodfill(622,205,WHITE);
		delay(n);

////////////////////////////////////////////////////////////////////////////////////
		// pillar2 goonband1
		line(634,165,634,198);
	       delay(n);
	     line(592,165,592,198);
	       delay(n);
	     ellipse(613,162,0,360,26,5);
	       delay(n);
	     ellipse(613,160,0,360,26,2);
	       delay(n);
	     setfillstyle(9,WHITE);
	       delay(n);
	     floodfill(613,160,WHITE);
	       delay(n);
	     arcwindow(624,180,8,9,1,14);
	       delay(n);
	     arcwindow(611,180,8,9,1,14);
	       delay(n);
	     arc(589,180,0,65,8);
	       delay(n);
	     line(628,180,628,195);
	       delay(n);
	     arc(637,180,117,180,8);
	       delay(n);
	     line(598,180,598,195);
	       delay(n);
	     arcwindow(636,160,47,48,0,0);
	       delay(n);
	     topper( 612 , 117 , 4 , 2);
		delay(n);
//////////////////////////////////////////////////////////////////////////////////////////////
	  // # Pillar3 step 1 # //

	     line(572,410,577,445);
	     delay(n);
	     line(558,410,553,445);
	     delay(n);
	     ellipse(565,415,41,140,8,4);
	     delay(n);
	     ellipse(565,413,40,140,17,8);
	     delay(n);
	     line(579,407,572,411);
	     delay(n);
	     line(551,407,557,411);
	     delay(n);
	     line(551,404,551,407);
	     delay(n);
	     line(579,404,579,407);
	     delay(n);
	     ellipse(565,408,40,140,17,8);
	     delay(n);
	     setfillstyle(6,WHITE);
	     delay(n);
	     floodfill(572,408,WHITE);
	     delay(n);
//////////////////////////////////////////////////////////////////////////////////////////////////////////
	  // # Pillar3 step 2 # //

	     line(577,402,572,360);
	     delay(n);
	     line(553,402,558,360);
	     delay(n);
	     ellipse(565,364,40,140,8,6);
	     delay(n);
	     ellipse(565,360,40,140,15,8);
	     delay(n);
	     line(555,355,559,359);
	     delay(n);
	     line(575,355,570,360);
	     delay(n);
	     line(553,355,553,349);
	     delay(n);
	     line(576,355,576,349);
	     delay(n);
	     ellipse(565,355,40,140,15,8);
	     delay(n);
	     setfillstyle(6,WHITE);
	     delay(n);
	     floodfill(559,355,WHITE);
	     delay(n);
//////////////////////////////////////////////////////////////////////////////////////////////////////////
	  // # Pillar3 step 3 # //

	       line(555,349,559,300);
	       delay(n);
	       line(574,349,569,300);
	       delay(n);
	       ellipse(564,304,40,140,6,5);
	       delay(n);
	       ellipse(564,297,40,140,17,5);
	       delay(n);
	       line(558,300,551,293);
	       delay(n);
	       line(570,300,576,293);
	       delay(n);
	       line(550,293,550,289);
	       delay(n);
	       line(576,293,576,289);
	       delay(n);
	      ellipse(563,291,40,140,17,5);
	       delay(n);
	      ellipse(563,292,40,140,17,5);
	       delay(n);
	       setfillstyle(6,WHITE);
	       delay(n);
	       floodfill(559,295,WHITE);
	       delay(n);
///////////////////////////////////////////////////////////////////////////////
	     // # Goonband # \\
	     line(551,288,551,272);
	     delay(n);
	     line(575,288,575,272);
	     delay(n);
	     ellipse(563,270,0,360,15,2);
	     delay(n);
	     ellipse(563,270,0,360,15,0);
	     delay(n);
	     setfillstyle(9,WHITE);
	     delay(n);
	     floodfill(26,160,WHITE);
	     delay(n);
	     arcwindow(561,280,3,4,1,5);
	     delay(n);
	     arcwindow(569,280,3,4,1,5);
	     delay(n);
	     arc(549,280,0,65,5);
	     delay(n);
	     line(554,280,554,286);
	     delay(n);
	     arc(577,280,117,180,5);
	     delay(n);
	     line(572,280,572,286);
	     delay(n);
	     arcwindow(576,269,25,26,0,0);
	     delay(n);
	     topper( 563 , 246 , 3 , 2);
	     delay(n);
   line(70,410,65,445);
	     delay(n);
	     line(83,410,88,445);
	     delay(n);
	     ellipse(77,415,41,140,8,4);
	     delay(n);
	     ellipse(77,413,40,140,17,8);
	     delay(n);
	     line(63,407,70,411);
	     delay(n);
	     line(90,407,82,411);
	     delay(n);
	     line(63,404,63,407);
	     delay(n);
	     line(90,404,90,407);
	     delay(n);
	     ellipse(77,408,40,140,17,8);
	     delay(n);
	     setfillstyle(6,WHITE);
	     delay(n);
	     floodfill(70,408,WHITE);
	     delay(n);
//////////////////////////////////////////////////////////////////////////////////////////////////////////
	  // # Pillar3 step 2 # //

	     line(67,402,71,360);
	     delay(n);
	     line(87,402,82,360);
	     delay(n);
	     ellipse(77,364,40,140,8,6);
	     delay(n);
	     ellipse(77,360,40,140,15,8);
	     delay(n);
	     line(67,355,71,359);
	     delay(n);
	     line(87,355,82,360);
	     delay(n);
	     line(66,355,66,349);
	     delay(n);
	     line(88,355,88,349);
	     delay(n);
	     ellipse(77,355,40,140,15,8);
	     delay(n);
	     setfillstyle(6,WHITE);
	     delay(n);
	     floodfill(71,355,WHITE);
	     delay(n);
//////////////////////////////////////////////////////////////////////////////////////////////////////////
	  // # Pillar3 step 3 # //

	       line(68,349,72,300);
	       delay(n);
	       line(86,349,82,300);
	       delay(n);
	       ellipse(77,304,40,140,6,5);
	       delay(n);
	       ellipse(77,297,40,140,17,5);
	       delay(n);
	       line(72,300,65,293);
	       delay(n);
	       line(82,300,88,293);
	       delay(n);
	       line(64,293,64,289);
	       delay(n);
	       line(89,293,89,289);
	       delay(n);
	      ellipse(77,291,40,140,17,5);
	       delay(n);
	      ellipse(77,292,40,140,17,5);
	       delay(n);
	       setfillstyle(6,WHITE);
	       delay(n);
	       floodfill(72,295,WHITE);
	       delay(n);
///////////////////////////////////////////////////////////////////////////////
	     // # Goonband # \\
	     line(65,288,65,272);
	     delay(n);
	     line(89,288,89,272);
	     delay(n);
	     ellipse(77,270,0,360,15,2);
	     delay(n);
	     ellipse(77,270,0,360,15,0);
	     delay(n);
	     setfillstyle(9,WHITE);
	     delay(n);
	     floodfill(26,160,WHITE);
	     delay(n);
	     arcwindow(75,280,3,4,1,5);
	     delay(n);
	     arcwindow(82,280,3,4,1,5);
	     delay(n);
	     arc(63,280,0,65,5);
	     delay(n);
	     line(68,280,68,286);
	     delay(n);
	     arc(91,280,117,180,5);
	     delay(n);
	     line(86,280,86,286);
	     delay(n);
	     arcwindow(90,269,25,26,0,0);
	     delay(n);
	     topper( 77 , 246 , 3 , 2);
	     delay(n);
/////////////////////////////////////////////////////////

/////////////////////////////////////////////////////////////////////
	     delay(n);
	     chottap(108,280,108,445,0,0,0);
//////////////////////////////////////////////////////////////////
	      line(232,241,232,445);
	     delay(n);
	     line(236,241,236,445);
	     delay(n);

	     circle(229,267,1);
	      delay(n);
	     line(230,266,410,266);
	      delay(n);
	     line(229,267,411,267);
	      delay(n);
	     line(230,268,410,268);
	      delay(n);
	     circle(411,267,1);
	      delay(n);
	    delay(n);  line(166,300,232,300);

	    delay(n);  line(166,306,232,306);


	    delay(n);  line(171,312,227,312);

	    delay(n);  line(171,312,171,445);

	    delay(n);  line(227,312,227,445);
/////////////
////////////////////////////////////////////////
	    delay(n);  line(178,320,220,320);

	    delay(n);  line(178,320,178,381);

	    delay(n);  line(220,320,220,381);

	    delay(n);  line(178,381,220,381);


	   delay(n);   line(182,324,216,324);

	   delay(n);   line(182,324,182,377);

	   delay(n);   line(216,324,216,377);

	   delay(n);   line(182,377,216,377);



	   delay(n);   arc(210,350,113,180,28);

	   delay(n);   arc(189,350,0,70,27);

	   delay(n);   line(194,356,204,356);

	   delay(n);   line(194,356,194,377);

	   delay(n);   line(204,356,204,377);

	   delay(n);   line(178,389,220,389);

	     delay(n); line(178,389,178,445);
	   delay(n);   line(220,389,220,445);
	   delay(n);   line(178,445,220,445);

	    delay(n);  line(182,393,216,393);
	    delay(n);  line(182,393,182,445);
	    delay(n);  line(216,393,216,445);
	    delay(n);  line(182,445,216,445);

	    delay(n);  arc(210,419,113,180,28);
	    delay(n);  arc(189,419,0,70,27);
	    delay(n);  line(194,425,204,425);
	      delay(n);
	     line(194,425,194,445);
	      delay(n);
	     line(204,425,204,445);
	      delay(n);
////////////////////////////////////////////////////
	     line(112,303,162,300);
	      delay(n);
	     line(112,309,162,306);
	      delay(n);
	     line(117,315,157,312); delay(n);  line(123,323,151,320); delay(n);
	     line(117,315,117,445); delay(n);  line(123,323,123,384);  delay(n);
	     line(157,312,157,445); delay(n);  line(151,320,151,380); delay(n);
				 line(123,384,151,380);   delay(n);
	     line(529,303,478,300); delay(n);
	     line(529,309,478,306); delay(n);  line(127,327,147,324); delay(n);
				 line(127,327,127,380);   delay(n);			       delay(n);
	     line(524,315,482,312); delay(n);  line(147,324,147,377);  delay(n);   line(518,323,488,320);          delay(n);
	     line(524,315,524,445); delay(n);  line(127,380,147,377);  delay(n);   line(518,323,518,384);        delay(n);
	     line(482,312,482,445); delay(n);			    line(488,320,488,380);
						delay(n);	     line(488,380,518,384);   delay(n);
				 arc(147,343,115,180,20); delay(n);
				 arc(129,343,0,73,18);   delay(n);   line(492,324,514,327);   delay(n);
				 line(134,359,139,356);  delay(n);   line(492,324,492,375);   delay(n);
				 line(134,359,134,379);  delay(n);   line(514,327,514,378);   delay(n);
				 line(139,356,139,378);  delay(n);   line(492,375,514,378);   delay(n);

				 line(123,394,151,390);  delay(n);   arc(512,343,115,180,20);  delay(n);
	     line(472,300,408,300); delay(n);  line(123,394,123,449);  delay(n);   arc(496,343,0,73,18); delay(n);
	     line(472,306,408,306); delay(n);  line(151,390,151,445); delay(n);    line(500,359,506,359); delay(n);
				 line(123,449,151,445); delay(n);    line(500,359,500,376);   delay(n);
						     line(506,359,506,377);   delay(n);
				 arc(147,414,115,180,20); delay(n);
				 arc(129,414,0,73,18);  delay(n);    line(518,394,488,390);  delay(n);
				 line(134,427,139,424); delay(n);    line(518,394,518,445); delay(n);
				 line(134,427,134,445); delay(n);    line(488,390,488,445);  delay(n);
				 line(139,424,139,445); delay(n);
						     line(514,399,492,396);  delay(n);
				 line(127,399,147,395); delay(n);    line(514,399,514,445);  delay(n);
				 line(127,399,127,445); delay(n);    line(492,396,492,445);
				  delay(n);
				 line(147,395,147,445);
						      delay(n);
						     arc(512,414,115,180,20);
						      delay(n);
						     arc(496,414,0,73,18);
						      delay(n);
						     line(500,427,506,427);
						      delay(n);
						     line(500,427,500,445);
						      delay(n);
						     line(506,427,506,445);
						      delay(n);
//////////////////////////////////////////////////////
  //     RIGHT
	     line(467,312,413,312);
	      delay(n);
	     line(467,312,467,445);
	      delay(n);
	     line(413,312,413,445);
	      delay(n);

	     line(460,320,420,320);
	      delay(n);
	     line(460,320,460,381);
	      delay(n);
	     line(420,320,420,381);
	      delay(n);
	     line(460,381,420,381);
	      delay(n);
	     line(456,324,424,324);
	      delay(n);
	     line(456,324,456,377);
	      delay(n);
	     line(424,324,424,377);
	      delay(n);
	     line(456,377,424,377);
	      delay(n);

	     arc(453,350,113,180,29);
	      delay(n);
	     arc(428,350,0,70,28);
	      delay(n);
	     line(445,356,435,356);
	      delay(n);
	     line(445,356,445,377);
	      delay(n);
	     line(435,356,435,377);
	      delay(n);
	     line(460,389,420,389);
	      delay(n);
	     line(460,389,460,445);
	      delay(n);
	     line(420,389,420,445);
	      delay(n);
	     line(460,445,420,445);
	      delay(n);

	     line(456,393,424,393);
	      delay(n);
	     line(456,393,456,445);
	      delay(n);
	     line(424,393,424,445);
	      delay(n);
	     line(456,445,424,445);
	      delay(n);
	     arc(453,419,113,180,29);
	      delay(n);
	     arc(428,419,0,70,28);
	      delay(n);
	     line(445,425,435,425);
	      delay(n);
	     line(445,425,445,445);
	      delay(n);
	     line(435,425,435,445);
	      delay(n);
///////////////////////////////////////////////////
////////////////////////////////////////
	     line(408,241,408,445);
	     delay(n);
	     line(404,241,404,445);
	     delay(n);


	     line(243,279,243,445);
	      delay(n);
	     line(263,298,263,445);
	      delay(n);
	     line(397,279,397,445);
	      delay(n);
	     line(377,298,377,445);
	      delay(n);
	     line(243,279,397,279);
	      delay(n);
	     line(263,298,377,298);
	      delay(n);
	     line(270,305,370,305);
	      delay(n);
	     line(270,305,270,445);
	      delay(n);
	     line(370,305,370,445);
	      delay(n);
//////////////////////////////////////////////////////////////////

	     arc(360,387,113,180,90);
	      delay(n);
	     arc(280,387,0,67,90);
	      delay(n);
	     arc(329,354,113,180,24);
	      delay(n);
	     arc(310,354,0,67,24);
	      delay(n);
	     line(305,355,305,375);
	      delay(n);
	     line(334,355,334,375);
	      delay(n);

	     line(326,336,326,375);
	      delay(n);
	     line(325,335,325,375);
	      delay(n);

	     line(314,335,314,375);
	      delay(n);
	     line(313,336,313,375);
	      delay(n);

	     line(305,350,334,350);
	      delay(n);
	     line(305,351,334,351);
	      delay(n);

	     line(314,357,324,357);
	      delay(n);
	     line(314,358,324,358);
	      delay(n);

	     line(305,365,312,365);
	      delay(n);
	     line(305,366,312,366);
	      delay(n);

	     line(327,366,334,366);
	      delay(n);
	     line(327,367,334,367) ;
	      delay(n);

	     line(291,382,348,382);
	      delay(n);
	     line(291,382,291,445);
	      delay(n);
	     line(348,382,348,445);
	      delay(n);
////////////////////////////////////////////////////////////////////////////
//# main arc
	     line(302,392,337,392);
	      delay(n);
	     line(302,392,302,445);
	      delay(n);
	     line(337,392,337,445);
	      delay(n);

	     arc(331,420,113,180,29);
	      delay(n);
	     arc(309,420,0,67,28);
	      delay(n);
	     line(311,399,311,445);
	      delay(n);
	     line(312,398,312,445);
	      delay(n);
	     line(327,398,327,445);
	      delay(n);
	     line(328,399,328,445);
	      delay(n);
	     line(336,415,336,445);
	      delay(n);
	     line(303,415,303,445);
	      delay(n);

	     line(312,414,327,414);
	      delay(n);
	     line(312,413,327,413);
	      delay(n);
	     line(303,419,312,419);
	      delay(n);
	     line(303,420,312,420);
	      delay(n);
	     line(327,420,336,420);
	      delay(n);
	     line(327,421,336,421);
	      delay(n);
	     line(313,429,326,429);
	      delay(n);
	     line(303,432,312,432);
	      delay(n);
	     line(303,433,312,433);
	      delay(n);
	     line(327,432,336,432);
	      delay(n);
	     line(327,433,336,433);
	      delay(n);

	     line(270,375,370,375);
	      delay(n);
	     line(236,257,404,257);
	      delay(n);
	     line(271,378,271,445);
	      delay(n);
	     line(369,378,369,445);
	      delay(n);
///////////////////////////////////////////////////////////////

	     arc(296,193,196,223,87);
	      delay(n);
	     ellipse(295,190,100,196,87,95);
	      delay(n);
	     arc(344,193,318,344,87);
	      delay(n);
	     ellipse(346,186,340,82,87,89);
	      delay(n);
	     ellipse(319,98,337,205,57,5);
	      delay(n);
	     ellipse(319,97,337,205,56,5);
	      delay(n);
	     ellipse(319,67,0,360,16,1);
	      delay(n);
	     ellipse(319,57,0,360,10,1);
	      delay(n);
	     line(318,50,318,55);
	      delay(n);
	     line(319,50,319,55);
	      delay(n);
	     line(320,50,320,55);
	      delay(n);
	     circle(319,45,3);
	      delay(n);
	     circle(319,45,5);
	      delay(n);
	     line(318,37,318,39);
	      delay(n);
	     line(319,37,319,39);
	      delay(n);
	     line(320,37,320,39);
	      delay(n);
	     circle(319,30,4);
	      delay(n);
	     circle(319,30,6);
	      delay(n);
	     line(317,14,319,2);
	      delay(n);
	     line(318,14,319,2);
	      delay(n);
	     line(319,24,319,2);
	      delay(n);
	     line(320,14,319,2);
	      delay(n);
	     line(321,14,319,2);
	      delay(n);

	     line(319,68,319,90);
	      delay(n);
	     line(319,68,305,93);
	      delay(n);
	     line(319,68,289,93);
	      delay(n);
	     line(319,68,333,93);
	      delay(n);
	     line(319,68,350,94);
	      delay(n);
	     line(319,68,272,95);
	      delay(n);
	     line(319,68,367,95);
	      delay(n);
	     line(326,58,328,66);
	      delay(n);
	     line(312,58,310,66);
	      delay(n);
	     arc(319,9,180,0,10);
	      delay(n);
	     arc(319,10,180,0,9);
	      delay(n);
	     arc(319,11,180,0,8);
	      delay(n);
	     arc(319,12,180,0,7);
	      delay(n);

	     ellipse(110,279,0,360,10,1);
	      delay(n);
	     ellipse(110,277,0,360,7,1);
	      delay(n);
	     line(110,265,110,275);
	      delay(n);
	     ellipse(164,279,0,360,10,1);
	      delay(n);
	     ellipse(164,277,0,360,7,1);
	      delay(n);
	     line(164,265,164,275);
	      delay(n);
	     ellipse(531,279,0,360,10,1);
	      delay(n);
	     ellipse(531,277,0,360,7,1);
	      delay(n);
	     line(531,265,531,275);
	      delay(n);
	     ellipse(476,279,0,360,10,1);
	      delay(n);
	     ellipse(476,277,0,360,7,1);
	      delay(n);
	     line(476,265,476,275);
	      delay(n);
	     ellipse(234,240,0,360,10,1);
	      delay(n);
	     ellipse(234,238,0,360,7,1);
	      delay(n);
	     line(234,226,234,236);
	      delay(n);
	     ellipse(405,240,0,360,10,1);
	      delay(n);
	     ellipse(405,238,0,360,7,1);
	      delay(n);
	     line(405,226,405,236);
	      delay(n);
	     line(175,300,175,260);
	     delay(n);
	     line(223,300,223,260);
	     delay(n);
	     ellipse(198,260,0,360,37,2);
	     delay(n);
	     setfillstyle(9,WHITE);
	     delay(n);
	     floodfill(198,260,WHITE);
	     delay(n);
	     arcwindow(205,286,7,13,6,14);
	     delay(n);
	     arc(170,284,0,65,12);
	     delay(n);
	     line(182,300,182,280);
	     delay(n);
	     arc(228,286,117,180,12);
	     delay(n);
	     line(216,300,216,286);
	     delay(n);
	     arcwindow(219,258,40,50,0,0);
	     delay(n);
	     topper(198 , 212 , 4 , 2);
	     delay(n);

	     line(417,300,417,260);
	     delay(n);
	     line(464,300,464,260);
	     delay(n);
	     ellipse(442,260,0,360,37,2);
	     delay(n);
	     setfillstyle(9,WHITE);
	     delay(n);
	     floodfill(442,260,WHITE);
	     delay(n);
	     arcwindow(447,286,7,13,6,14);
	     delay(n);
	     arc(412,284,0,65,12);
	     delay(n);
	     line(424,300,424,280);
	     delay(n);
	     arc(469,286,117,180,12);
	     delay(n);
	     line(457,300,457,286);
	     delay(n);
	     arcwindow(461,258,40,50,0,0);
	     delay(n);
	     topper(440 , 212 , 4 , 2);
	     delay(n);

	     circle(130,70,40);
	      delay(n);
	     setfillstyle(1,WHITE);
	   delay(n);   floodfill(130,70,WHITE);
	 //  circle(73,280,1);

	     setfillstyle(9,YELLOW);
	   delay(n);   floodfill(20,178,WHITE);
	   delay(n);   floodfill(42,182,WHITE);
	   delay(n);   floodfill(8,182,WHITE);
	   delay(n);   floodfill(30,182,WHITE);
	   delay(n);   floodfill(595,182,WHITE);
	   delay(n);   floodfill(607,182,WHITE);
	   delay(n);   floodfill(620,182,WHITE);
	   delay(n);   floodfill(630,182,WHITE);
	   delay(n);   floodfill(558,280,WHITE);
	   delay(n);   floodfill(553,280,WHITE);
	   delay(n);   floodfill(567,280,WHITE);
	   delay(n);   floodfill(574,280,WHITE);
	   delay(n);   floodfill(220,280,WHITE);
	   delay(n);   floodfill(200,280,WHITE);
	   delay(n);   floodfill(180,280,WHITE);
	   delay(n);   floodfill(420,280,WHITE);
	   delay(n);   floodfill(440,280,WHITE);
	   delay(n);   floodfill(460,280,WHITE);
	   delay(n);   floodfill(80,280,WHITE);
	   delay(n);   floodfill(87,280,WHITE);
	   delay(n);   floodfill(67,280,WHITE);
	   delay(n);   floodfill(73,280,WHITE);

	     setfillstyle(6,LIGHTGRAY);
	   delay(n);   floodfill(20,140,WHITE);
	   delay(n);   floodfill(620,140,WHITE);
	   delay(n);   floodfill(75,250,WHITE);
	   delay(n);   floodfill(560,250,WHITE);
	   delay(n);   floodfill(420,250,WHITE);
	   delay(n);   floodfill(220,250,WHITE);


	     setfillstyle(10,WHITE);
	   delay(n);   floodfill(20,260,WHITE);
	   delay(n);   floodfill(20,320,WHITE);
	   delay(n);   floodfill(20,430,WHITE);
	   delay(n);   floodfill(620,260,WHITE);
	   delay(n);   floodfill(620,320,WHITE);
	   delay(n);   floodfill(620,430,WHITE);
	   delay(n);   floodfill(330,400,WHITE);
	   delay(n);   floodfill(307,400,WHITE);
	   delay(n);   floodfill(565,305,WHITE);
	   delay(n);   floodfill(565,370,WHITE);
	   delay(n);   floodfill(565,420,WHITE);
	   delay(n);   floodfill(75,305,WHITE);
	   delay(n);   floodfill(75,370,WHITE);
	   delay(n);   floodfill(75,420,WHITE);
	   delay(n);
	     setfillstyle(9,WHITE);
	     floodfill(320,260,WHITE);
	   delay(n);   floodfill(320,290,WHITE);
	   delay(n);   floodfill(120,305,WHITE);
	   delay(n);   floodfill(220,305,WHITE);
	   delay(n);   floodfill(435,305,WHITE);
	   delay(n);   floodfill(500,305,WHITE);

	     setfillstyle(4,WHITE);
	   delay(n);   floodfill(320,390,WHITE);


	     setfillstyle(10,WHITE);
	     floodfill(290,320,WHITE);
	   delay(n);   floodfill(350,320,WHITE);
	   delay(n);
	     setfillstyle(7,LIGHTGRAY);
	   delay(n);   floodfill(307,415,WHITE);
	   delay(n);   floodfill(320,415,WHITE);
	   delay(n);   floodfill(320,410,WHITE);
	   delay(n);   floodfill(330,415,WHITE);
	   delay(n);   floodfill(330,425,WHITE);
	   delay(n);   floodfill(330,435,WHITE);
	   delay(n);   floodfill(307,435,WHITE);
	   delay(n);   floodfill(307,425,WHITE);

	   setfillstyle(6,LIGHTGRAY);
	   floodfill(476,290,WHITE);
	   floodfill(530,290,WHITE);
	   floodfill(110,290,WHITE);
	   floodfill(165,290,WHITE);
	   floodfill(234,290,WHITE);
	   floodfill(405,290,WHITE);
	   floodfill(405,260,WHITE);
	   floodfill(234,260,WHITE);
	delay(1000);
	cleardevice();
	circle(130,70,60);
	setfillstyle(1,WHITE);
	floodfill(130,70,WHITE);
	delay(380);
	cleardevice();
	circle(160,120,80);
	setfillstyle(1,WHITE);
	floodfill(160,120,WHITE);
	delay(380);
	cleardevice();
	circle(220,160,125);
	setfillstyle(1,WHITE);
	floodfill(220,160,WHITE);
	delay(380);
	cleardevice();
	circle(270,190,150);
	setfillstyle(1,WHITE);
	floodfill(270,190,WHITE);
	delay(380);
	cleardevice();
	circle(300,210,170);
	setfillstyle(1,WHITE);
	floodfill(300,210,WHITE);
	delay(380);
	cleardevice();
	circle(320,240,210);
	setfillstyle(1,WHITE);
	floodfill(320,240,WHITE);
	setcolor(BLACK);
	settextstyle(7,0,7);
	outtextxy(140,200,"Thank You!");
	delay(5000);
			       exit(0);
			       break;

		      default : for(int a=0 ; a<15 ; a++)
			      {
			       clrscr();
			       cleardevice();
			       cout<<"================================================================================";
			       cout<<"       ----------------------- EMPLOYEES SERVICES ------------------------";
			       cout<<endl<<"================================================================================"<<endl<<endl<<endl;
			       cout<<"You Have Following Options for Employess :--"<<endl<<endl;
			       cout<<"1. ADD New Employee Data."<<endl;
			       cout<<"2. View Existing Employee."<<endl;
			       cout<<"3. Search Employee for Details."<<endl;
			       cout<<"4. Modify Existing Employee Data."<<endl;
			       cout<<"5. Delete Employee Data from Record."<<endl;
			       cout<<"6. Press to quit from Services."<<endl;
			       cout<<endl<<"Please Enter Option (1-6) : "<<r<<endl<<endl;
			       cout<<"You Have Entered an INVALID option Try Again ";
			       cout<<y[a];
			       delay(120);
			       }
			       exit(1);
		    }
	   getch();
	    }
	}
