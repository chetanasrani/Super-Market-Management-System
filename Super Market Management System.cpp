//*******************************WELCOME TO SUPERMARKET MANAGEMENT SYSTEM****************************
//*********************************************HEADER FILES******************************************
#include<iostream>
#include<string.h>
#include<fstream>
#include<stdio.h>
#include<ctype.h>
#include<math.h>
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<iomanip>
#include<time.h>
#include<windows.h>
using namespace std;
//************************************************FUNCTIONS******************************************
int user,StarNum=0;      //global variables
void tp();
void signin();
void topbar();          //top design
void sales_loading();   //Option screen for salesman interface
void credits();
void firstpage();
void main_menu();
void credits();
void admin();
void admin_loading();    //Option screen for administrator interface
void sales();
char* password_hiding();	 //Function to hide the password while typing
char* validation();
int randomno();
int randomno()
{
 unsigned int seedval;
 time_t t;
 seedval=(unsigned)time(&t);
 srand(seedval);
 return rand();
}
void gotoxy(int x, int y)
{
  static HANDLE h = NULL;  
  if(!h)
    h = GetStdHandle(STD_OUTPUT_HANDLE);
  COORD c = { x, y };  
  SetConsoleCursorPosition(h,c);
}
//***************************************CLASS DEFINITIONS*******************************************
//Class for sign up,signin both for admin and salesman
class sign_sales
{
 char name[200];
 char password[100];
 float age;
 char email[50];
 public:
  void signinadmin();
  void salesman_login();
  void sign_up();
  void input_sales_details();
  void input_admin_details();
}s;

//Class for other functions creation,deletion etc.
class invent
{
 char proname[20],protype[20];
 float price;
 int stock,pronum;
 public:
  void creation();
  void display();
  void deletion();
  void modification();
  void search();
  void billing();
  void stock_up();
  void eod();                //bill report
 }a,b,c;
//**************************************MAIN PROGRAM*************************************************
int main()
{
	  firstpage();
		for(int i=0;i<10000;i++)
			for(int j=0;j<10000;j++)
				for(int z=0;z<10;z++);
	  main_menu();
}
//*******************************FUNSTION TO DISPLAY THE FIRST PAGE*********************************
void firstpage()
 {
  {
	system("cls");
	long int i;
	int j;
	long double x=2234999;
	for(j=0;j<20;j++)
	{
	 for(i=0;i<x;i++);
	 cout<<"!*!@";
	}
	for(i=0;i<x;i++);
	cout<<"        ";
	for(i=0;i<x;i++);
	cout<<"&*&";
	for(i=0;i<x;i++);
	cout<<"--*-*";
	for(i=0;i<x;i++);
	cout<<"-*-*";
	for(i=0;i<x;i++);
	cout<<"-*-*";
	for(i=0;i<x;i++);
	cout<<"-*-*";
	for(i=0;i<x;i++);
	cout<<"-*-*";
	for(i=0;i<x;i++);
	cout<<"-*-*";
	for(i=0;i<x;i++);
	cout<<"-*-*";
	for(i=0;i<x;i++);
	cout<<"-*-*";
	for(i=0;i<x;i++);
	cout<<"-*-*";
	for(i=0;i<x;i++);
	cout<<"-*-*";
	for(i=0;i<x;i++);
	cout<<"-*-*";
	for(i=0;i<x;i++);
	cout<<"-*-*";
	for(i=0;i<x;i++);
	cout<<"-*-*";
	for(i=0;i<x;i++);
	cout<<"-*-*";
	for(i=0;i<x;i++);
	cout<<"-&*&";
	for(i=0;i<x;i++);
	cout<<"\n       ";
	for(i=0;i<x;i++);
	cout<<"!&*&";
	for(i=0;i<x;i++);
	cout<<"--*-";
	for(i=0;i<x;i++);
	cout<<"*-*-";
	for(i=0;i<x;i++);
	cout<<"*-*-";
	for(i=0;i<x;i++);
	cout<<"*-*-*";
	for(i=0;i<x;i++);
	cout<<"-*-*-";
	for(i=0;i<x;i++);
	cout<<"*-*-*";
	for(i=0;i<x;i++);
	cout<<"-*-*-*";
	for(i=0;i<x;i++);
	cout<<"-*-*-*";
	for(i=0;i<x;i++);
	cout<<"-*-*";
	for(i=0;i<x;i++);
	cout<<"-*-*-";
	for(i=0;i<x;i++);
	cout<<"*-*-*";
	for(i=0;i<x;i++);
	cout<<"-*-*-";
	for(i=0;i<x;i++);
	cout<<"&*&!";
	for(i=0;i<x;i++);
	cout<<"\n";
	for(i=0;i<x;i++);
	cout<<"      ";
	for(i=0;i<x;i++);
	cout<<"&!&*&";
	for(i=0;i<x;i++);
	cout<<"                                                          ";
	for(i=0;i<x;i++);
	cout<<"&*&!&";
	for(i=0;i<x;i++);
	cout<<"\n     *&!&*&";
	for(i=0;i<x;i++);
	cout<<"                                                          ";
	for(i=0;i<x;i++);
	cout<<"&*&!&*";
	for(i=0;i<x;i++);
	cout<<"\n    &*&!&*&";
	for(i=0;i<x;i++);
	cout<<"                                                          ";
	for(i=0;i<x;i++);
	cout<<"&*&!&*&";
	for(i=0;i<x;i++);
	cout<<"\n   !&*&!&*&";
	for(i=0;i<x;i++);
	cout<<"                                                          ";
	for(i=0;i<x;i++);
	cout<<"&*&!&*&!";
	for(i=0;i<x;i++);
	cout<<"\n  &!&*&!&*&";
	for(i=0;i<x;i++);
	cout<<"                                                          ";
	for(i=0;i<x;i++);
	cout<<"&*&!&*&!&";
	for(i=0;i<x;i++);
	cout<<"   ";
	for(i=0;i<x;i++);
	cout<<"*&!&*&!&*&";
	for(i=0;i<x;i++);
	cout<<"                                                          ";
	for(i=0;i<x;i++);
	cout<<"&*&!&*&!&*";
	for(i=0;i<x;i++);
	cout<<"\n&*&!&*&!&*&";
	for(i=0;i<x;i++);
	cout<<"          ";
	for(i=0;i<x;i++);
	cout<<"HELLO!!";
	for(i=0;i<x;i++);
	cout<<" WELCOME TO";
	for(i=0;i<x;i++);
	cout<<" PARADISE SUPER";
	for(i=0;i<x;i++);
	cout<<" MART          ";
	for(i=0;i<x;i++);
	cout<<"&*&!&*&";
	for(i=0;i<x;i++);
	cout<<"!&*&&*&!";
	for(i=0;i<x;i++);
	cout<<"&*&!&*&";
	for(i=0;i<x;i++);
	cout<<"                 ";
	for(i=0;i<x;i++);
	cout<<"AVVAI SHANMUGHAM";
	for(i=0;i<x;i++);
	cout<<" SALAI";
	for(i=0;i<x;i++);
	cout<<"                   ";
	for(i=0;i<x;i++);
	cout<<"&*&!&*&!";
	for(i=0;i<x;i++);
	cout<<"&*&&*&!&*";
	for(i=0;i<x;i++);
	cout<<"&!&*&";
	cout<<"                ";
	for(i=0;i<x;i++);
	cout<<"GOPALPURAM  CHENNAI-600086";
	for(i=0;i<x;i++);
	cout<<"                ";
	for(i=0;i<x;i++);
	cout<<"&*&!&*&";
	for(i=0;i<x;i++);
	cout<<"!&*&&*&!";
	for(i=0;i<x;i++);
	cout<<"&*&!&*&";
	for(i=0;i<x;i++);
	cout<<"                 ";
	for(i=0;i<x;i++);
	cout<<"TEL NO: +91-44-28351973";
	for(i=0;i<x;i++);
	cout<<"                  ";
	for(i=0;i<x;i++);
	cout<<"&*&!&*&!&*&&*&!&";
	for(i=0;i<x;i++);
	cout<<"*&!&*&";
	for(i=0;i<x;i++);
	cout<<"               ";
	for(i=0;i<x;i++);
	cout<<"CUSTOMER CARE: 1800-123-34";
	for(i=0;i<x;i++);
	cout<<"                 ";
	for(i=0;i<x;i++);
	cout<<"&*&!&*&!&";
	for(i=0;i<x;i++);
	cout<<"*&&*&!&*&!&*&";
	for(i=0;i<x;i++);
	cout<<"                   ";
	for(i=0;i<x;i++);
	cout<<"HAVE A NICE DAY!!";
	for(i=0;i<x;i++);
	cout<<"                      ";
	for(i=0;i<x;i++);
	cout<<"&*&!&*&!&*& ";
	for(i=0;i<x;i++);
	cout<<"*&!&*&!&*&";
	for(i=0;i<x;i++);
	cout<<"                                  ";
	for(i=0;i<x;i++);
	cout<<"                        ";
	for(i=0;i<x;i++);
	cout<<"&*&!&*&!&*";
	for(i=0;i<x;i++);
	cout<<"\n  &!&*&!&*&";
	for(i=0;i<x;i++);
	cout<<"                           ";
	for(i=0;i<x;i++);
	cout<<"                               ";
	for(i=0;i<x;i++);
	cout<<"&*&!&*&!&";
	for(i=0;i<x;i++);
	cout<<"\n   ";
	for(i=0;i<x;i++);
	cout<<"!&*&!&*&";
	for(i=0;i<x;i++);
	cout<<"                             ";
	for(i=0;i<x;i++);
	cout<<"                             ";
	for(i=0;i<x;i++);
	cout<<"&*&!&*&!";
	for(i=0;i<x;i++);
	cout<<"\n    ";
	for(i=0;i<x;i++);
	cout<<"&*&!&*&";
	for(i=0;i<x;i++);
	cout<<"                               ";
	for(i=0;i<x;i++);
	cout<<"                           ";
	for(i=0;i<x;i++);
	cout<<"&*&!&*&";
	for(i=0;i<x;i++);
	cout<<"\n     ";
	for(i=0;i<x;i++);
	cout<<"*&!&*&";
	for(i=0;i<x;i++);
	cout<<"                              ";
	for(i=0;i<x;i++);
	cout<<"                            ";
	for(i=0;i<x;i++);
	cout<<"&*&!&*";
	for(i=0;i<x;i++);
	cout<<"\n      ";
	for(i=0;i<x;i++);
	cout<<"&!&*&";
	for(i=0;i<x;i++);
	cout<<"                              ";
	for(i=0;i<x;i++);
	cout<<"                            ";
	for(i=0;i<x;i++);
	cout<<"&*&!&";
	cout<<"             ";
	for(i=0;i<x;i++);
	cout<<"!&*&";
	for(i=0;i<x;i++);
	cout<<"--*-*-*-*-*-*-*-*-*-*";
	for(i=0;i<x;i++);
	cout<<"-*-*-*-*-*-*-*-*-*-";
	for(i=0;i<x;i++);
	cout<<"*-*-*-*-*-*-*-*-*-&*&!  ";
	for(i=0;i<x;i++);
	cout<<"\n        &*&--*-*-*-";
	for(i=0;i<x;i++);
	cout<<"*-*-*-*-*-*-*-*-*-";
	for(i=0;i<x;i++);
	cout<<"*-*-*-*-*-*-*-*";
	for(i=0;i<x;i++);
	cout<<"-*-*-*-*-*-*-*-*-&*&";
	cout<<"\n";
	for(j=0;j<20;j++)
	{
	 for(i=0;i<x;i++);
	 cout<<"!*!@";
	}
 }
}
//*************************************FUNCTION FOR MAIN MENU***************************************
void main_menu()
{
 system("cls");
 char choose;
 topbar();
 cout<<"\n\t\t\t-------------:WELCOME!!:-------------- \n";
 cout<<"\n\t\t\t\tPLEASE SELECT YOUR OPTION:-\n";
 cout<<"\n\t\t\t\t1.SIGN IN\n";
 cout<<"\n\t\t\t\t2.SIGN UP\n";
 cout<<"\n\t\t\t\t3.EXIT\n";
 start:                                       //label
		 cout<<"\nENTER YOUR CHOICE:";
		 cin>>choose;
		 switch(choose)
		  {
			case'1':signin();
					  break;
			case'2':s.sign_up();
					  break;
			case'3':exit(0);
					  break;
			default:cout<<"\n INCORRECT OPTION";
					  goto start;
		  }
}
//**************************************SIGNUP INTERFACE*********************************************
void sign_sales::sign_up()
{
 system("cls");
 tp();
 char opt;
 cout<<"\n\t\t-----------:DO YOU WANT TO SIGN UP AS:------------";
 cout<<"\n\t\t\t\t1.ADMINISTRATOR\n";
 cout<<"\n\t\t\t\t2.SALESMAN\n";
 cout<<"\n\t\t\t\t3.MAIN MENU\n";
 nm:
  cout<<"\nENTER YOUR CHOICE: ";
  cin>>opt;
  switch(opt)
	 {
		case'1':s.input_admin_details();
				  break;
		case'2':s.input_sales_details();
				  break;
		case'3':main_menu();
				  break;
		default:cout<<"INCORRECT OPTION";
				  getch();
				  goto nm;
	 }
 getche();
}
//**********************************FUNCTION TO SIGNUP AS ADMINISTRATOR*****************************
void sign_sales::input_admin_details()
{
 xb:
 system("cls");
 tp();
 int j;
 cout<<"\n\n\t     ---------------:SIGN UP FOR ADMINISTRATOR:---------------";
 char*manpwd,signname[20],manpass_inp[20];
 ifstream f1;
 ofstream f2;
 char codecheck[20];
 f1.open("admi.dat",ios::binary);
 f2.open("admi.dat",ios::binary | ios::app);
 cout<<"\n\n\t     ENTER ADMIN CODE:";
 cin>>codecheck;
 if(strcmp("medmin123",codecheck)==0)    //code to ensure that user is admin
 {
 cout<<"\n\n\t     ENTER USERNAME:";
 gets(signname);
 cout<<"\n\t     ENTER PASSWORD:";
 manpwd=password_hiding();
 for(j=0;j<=(StarNum-1);j++)
 manpass_inp[j]=*(manpwd+j);
 manpass_inp[j]='\0';
 cout<<"\n\n\t     ENTER AGE:";
 cin>>age;
 cout<<"\n\n\t     ENTER EMAIL ADDRESS:";
 gets(email);
 strcpy(s.name,signname);
 strcpy(s.password,manpass_inp);
 f2.write((char*)&s,sizeof(s));
 f2.close();
 cout<<"\n\n\t\t\t    WELCOME!!YOU HAVE SIGNED UP:)";
 }
 else
  main_menu();
  getche();
  main_menu();
}
//*************************************SIGNUP FUNCTION FOR SALESMAN*********************************
void sign_sales::input_sales_details()
{
 system("cls");
 tp();
 cout<<"\n\t\t\t-----------:SIGN UP:------------";
 char *manpwd,signname[20];
 ofstream f2;
 f2.open("salesmen.dat",ios::binary|ios::app);
 cout<<"\n\t\t\tENTER USERNAME: ";
 gets(signname);
 cout<<"\n\n\t\t\tENTER PASSWORD: ";
 manpwd=(char*)password_hiding();
 cout<<"\n";
 cout<<"\n\n\t\t\tENTER YOUR AGE: ";
 cin>>age;
 cout<<"\n\n\t\t\tENTER YOUR EMAIL ADDRESS: ";
 gets(email);
 strcpy(s.name,signname);
 strcpy(s.password,manpwd);
 f2.write((char*)&s,sizeof(s));
 f2.close();
 cout<<"\n\n\t\t\t    WELCOME!!YOU HAVE SIGNED UP:)";
 getch();
 main_menu();
}
//************************************FUNCTION TOPBAR(1)********************************************
void topbar()
{
cout<<"&~*~&~*~&~*~&~*~&~*~&~*~&~*~&~*~&~*~&~*~&~*~&~*~&~*~&~*~&~*~&~*~&~*~&~*~&~*~&~*\n";
cout<<"*~*~*~*~*~*~*~*~*~*~*~*       PARADISE SUPER MART      *~*~*~*~*~*~*~*~*~*~*~*~\n";
cout<<"*~*~*~*~*~*~*~*~*~*~*       AVVAI SHANMUGHAM SALAI      *~*~*~*~*~*~*~*~*~*~*~\n";
cout<<"*!*!*!*!*!*!*!*!*!*      GOPALAPURAM CHENNAI -600-086    *!*!*!*!*!*!*!*!*!*!*!\n";
cout<<"*~*~*~*~*~*~*~*~*~*~*~     TEL NO: +91-44-28351973      *~*~*~*~*~*~*~*~*~*~*~*\n";
cout<<"*~*~*~*~*~*~*~*~*~*~*~*    HELP LINE: 1800-123-1234    *~*~*~*~*~**~*~*~*~*~*~*\n";
cout<<"&~*~&~*~&~*~&~*~&~*~&~*~&~*~&~*~&~*~&~*~&~*~&~*~&~*~&~*~&~*~&~*~&~*~&~*~&~*~&~*\n";
cout<<"\n";
}
//************************************FUNCTION FOR TOPBAR(2)****************************************
void tp()
{
 system("cls");
 long int i;
 int j;
 long int aa=1234567;
 for(j=0;j<32;j++)
 {
  for(i=0;i<aa;i++);
  cout<<"!~*~&";
 }
 cout<<"\t\t\t           WELCOME TO!!";
 cout<<"\n\t\t\t       PARADISE SUPER MART!!\n";
 for(j=0;j<32;j++)
 {
 for(i=0;i<aa;i++);
 cout<<"!~*~&";
 }
}
//**************************************SIGNIN INTERFACE********************************************
void signin()
{
 system("cls");
 topbar();
 cout<<"\n\n\t\t--------------------:SIGN IN AS:---------------------\n";
 cout<<"\t\t\t\t1-Admin\n\n";
 cout<<"\t\t\t\t2-Salesman\n\n";
 cout<<"\t\t\t\t3-Credits\n\n";
 cout<<"\tEnter your choice:";
 int cho;
 cin>>cho;
 switch(cho)
 {
  case 1: s.signinadmin();
			 break;
  case 2: s.salesman_login();
			 break;
  case 3:
			{
			 system("cls");
			 topbar();
			 credits();
			 int j=1000;
			 for(int i=0;i<j;i++)
			 for(int z=0;z<j;j++);
			 system("cls");
			 topbar();
			 signin() ;
			}
			 break;
  default:
			 {
			  system("cls");
			  topbar();
			  cout<<"\n\n";
			  cout<<"Invalid choice!!";
			  cout<<"\nEnter a valid choice";
			  signin();
			 }
  }
  long int zz=10010;
  for(long int y= 0;y<2;y++)
  {
	for(long int q=0;q<zz;q++);
	cout<<".";
	for(long int q=0;q<zz;q++);
	cout<<".";
	for(long int q=0;q<zz;q++);
	cout<<".";
	for(long int q=0;q<zz;q++);
	cout<<".";
	cout<<"\b\b\b\b";
  }
  system("cls");
  topbar();
}
//*****************************FUNCTION TO SIGNIN,FOR ADMINISTRATOR*********************************
void sign_sales::signinadmin()
{
  system("cls");
  tp();
  cout<<"\n\t\t\t----------:ADMIN LOGIN:------------";
  char adminname[200];
  char *adminpword;
  char cho_retry;
  char admincode[20];
  ifstream a1;
  a1.open("admi.dat",ios::binary|ios::app);
  if(!a1)
  {
	cerr<<"\nCAN'T OPEN";
	exit(1);
  }
  cout<<"\n\n\t\t\tENTER ADMIN CODE:";
  gets(admincode);

  if(strcmp(admincode,"medmin123")==0)
  {
	cout<<"\n\n\t\t\tENTER ADMIN NAME: ";
	gets(adminname);
	int flago=0;
	while(a1.read((char*)&s,sizeof(s)))
	{
	if(strcmp(adminname,s.name)==0)
	{
	 int flago=1;
	 cout<<"\n\n\t\t\tENTER YOUR PASSWORD: ";
	 adminpword=(char*)password_hiding();
	 aaa:                                     //label
		 if(strcmp(adminpword,s.password)==0)
		 {
		  cout<<"\n\t\t\t\tLOGIN SUCESSFULL!!";
		  a1.close();
		  admin();
		 }
		 else
		 {
		  cout<<"\n\n\t\t\tSORRY!!PASSWORD WRONG.\n\t\t\tRETRY??(Max 2 tries)(y/n):";
		  cin>>cho_retry;
		  static int aa=2;
		  if(cho_retry=='y'||cho_retry=='Y')
		  {
			while(aa>0)
			{
			 aa--;
			 cout<<"\n\n\t\t\tENTER PASSWORD:";
			 adminpword=(char*)password_hiding();
			 goto aaa;
			}
			if(aa==0)
			{
			 cout<<"\n SORRY!!YOU HAVE REACHED MAXIMUM NUMBER OF ATTEMPTS.";
			 a1.close();
			 main_menu();
			}
		  }
		 }
	}
	}
	if(flago==0)
	{
	 cout<<"\n\t\t\tSORRY!!USERNAME WRONG.";
	 cout<<"\n\t\t\tRETRY??\n\t\t\t(Max 2 tries)(y/n):";
	 cin>>cho_retry;
	 static int ad=2;
	 if(cho_retry=='y'||cho_retry=='Y')
	 {
	  if(ad==0)
	  {
		cout<<"\n SORRY!!YOU HAVE REACHED MAXIMUM NUMBER OF ATTEMPTS.";
		a1.close();
		main_menu();
	  }
	  while(ad>0)
	  {
		ad--;
		s.signinadmin();
	  }
	 }
	}
  }
  else
	 main_menu();
}
//********************************FUNCTION TO SIGNIN,FOR SALESMAN***********************************
void sign_sales::salesman_login()
{
 system("cls");
 tp();
 cout<<"\n\t\t\t---------:SALESMAN LOGIN:------------\n";
 char smanusername[200];
 char *smanpword;
 ifstream a;
 a.open("salesmen.dat",ios::binary);
 cout<<"\n\t\t\tPLEASE ENTER USERNAME:";
 gets(smanusername);
 int flag=0;
 while(a.read((char*)&s,sizeof(s)))
 {
		if(strcmp(smanusername,s.name)==0)
		{     flag=1;
				cout<<"\n\t\t\tPLEASE ENTER PASSWORD: ";
				smanpword=(char*)password_hiding();
				ptry:
				if(strcmp(smanpword,s.password)==0)
				{
					cout<<"\nACCESS GRANTED!!";
					a.close();
					sales();                                                         //open salesman interface
				}
				else
				{
				 cout<<"\n\n\t\t\tSORRY!!PASSWORD WRONG.";
				 cout<<"\n\t\t\tRETRY??(Max 2 tries)(y/n):";
				 char choice_retry;
				 cin>>choice_retry;
				 static int tt=2;
				 if(choice_retry=='y'||choice_retry=='Y')
				  {
					if(tt==0)
					{
					 cout<<"\n SORRY!!YOU HAVE REACHED MAXIMUM NUMBER OF ATTEMPTS.";
					 a.close();
					 main_menu();
					}
					while(tt>0)
					{
					 tt--;
					 cout<<"\n\n\t\t\tPLEASE ENTER PASSWORD:";
					 smanpword=(char*)password_hiding();
					 goto ptry;
					}
				  }
				}
		}
}
		if(flag==0)
		{
				cout<<"\n\t\t\tSORRY!!USERNAME WRONG.";
				cout<<"\n\t\t\tRETRY??(Max 2 tries)(y/n):";
				char choice_retry;
				cin>>choice_retry;
				static int t=2;
				if(choice_retry=='y'||choice_retry=='Y')
				{
				 if(t==0)
				 {
					cout<<"\n SORRY!!YOU HAVE REACHED MAXIMUM NUMBER OF ATTEMPTS.";
					char temmm;
					cin>>temmm;
					main_menu();
				 }
				  while(t>0)
					{
						t--;
						s.salesman_login();
					}
				}
				else
				 main_menu();
		}
}
//*************************************FUNCTION CREDITS*********************************************
void credits()
{
 long double j=12345679;
 long double i;
 for(i=0;i<j;i++);
 cout<<"D";
 for(i=0;i<j;i++);
 cout<<"O";
 for(i=0;i<j;i++);
 cout<<"N";
 for(i=0;i<j;i++);
 cout<<"E";
 for(i=0;i<j;i++);
 cout<<" ";
 for(i=0;i<j;i++);
 cout<<"B";
 for(i=0;i<j;i++);
 cout<<"Y";
 for(i=0;i<j;i++);
 cout<<":";
 for(i=0;i<j;i++);
 cout<<" ";
 for(i=0;i<j;i++);
 cout<<" ";
 for(i=0;i<j;i++);
 cout<<" ";
 for(i=0;i<j;i++);
 cout<<" ";
 for(i=0;i<j;i++);
 cout<<" ";
 for(i=0;i<j;i++);
 cout<<" ";
 for(i=0;i<j;i++);
 cout<<" ";
 cout<<"\n\n\t";
 for(i=0;i<j;i++);
 cout<<"V";
 for(i=0;i<j;i++);
 cout<<"I";
 for(i=0;i<j;i++);
 cout<<"S";
 for(i=0;i<j;i++);
 cout<<"H";
 for(i=0;i<j;i++);
 cout<<"A";
 for(i=0;i<j;i++);
 cout<<"L";
 for(i=0;i<j;i++);
 cout<<".";
 for(i=0;i<j;i++);
 cout<<"G";
 for(i=0;i<j;i++);
 cout<<" ";
 for(i=0;i<j;i++);
 cout<<" ";
 for(i=0;i<j;i++);
 cout<<" ";
 for(i=0;i<j;i++);
 cout<<" ";
 cout<<"\n\t\t";
 for(i=0;i<j;i++);
 cout<<"C";
 for(i=0;i<j;i++);
 cout<<"H";
 for(i=0;i<j;i++);
 cout<<"E";
 for(i=0;i<j;i++);
 cout<<"T";
 for(i=0;i<j;i++);
 cout<<"A";
 for(i=0;i<j;i++);
 cout<<"N";
 for(i=0;i<j;i++);
 cout<<" ";
 for(i=0;i<j;i++);
 cout<<" ";
 for(i=0;i<j;i++);
 cout<<" ";
 for(i=0;i<j;i++);
 cout<<" ";
 for(i=0;i<j;i++);
 cout<<" ";
 for(i=0;i<j;i++);
 cout<<" ";
 cout<<"\n\t\t\t";
 for(i=0;i<j;i++);
 cout<<"A";
 for(i=0;i<j;i++);
 cout<<"B";
 for(i=0;i<j;i++);
 cout<<"H";
 for(i=0;i<j;i++);
 cout<<"I";
 for(i=0;i<j;i++);
 cout<<"S";
 for(i=0;i<j;i++);
 cout<<"H";
 for(i=0;i<j;i++);
 cout<<"E";
 for(i=0;i<j;i++);
 cout<<"K";
 for(i=0;i<j;i++);
 cout<<" ";
 for(i=0;i<j;i++);
 cout<<" ";
 for(i=0;i<j;i++);
 cout<<" ";
 for(i=0;i<j;i++);
 cout<<" ";
 for(i=0;i<j;i++);
 cout<<" ";
 for(i=0;i<j;i++);
 cout<<" ";
 cout<<"\n\t\t\t\t";
 for(i=0;i<j;i++);
 cout<<"P";
 for(i=0;i<j;i++);
 cout<<"A";
 for(i=0;i<j;i++);
 cout<<"R";
 for(i=0;i<j;i++);
 cout<<"A";
 for(i=0;i<j;i++);
 cout<<"M";
 for(i=0;i<j;i++);
 cout<<" ";
 for(i=0;i<j;i++);
 cout<<" ";
 for(i=0;i<j;i++);
 cout<<" ";
 for(i=0;i<j;i++);
 cout<<" ";
 for(i=0;i<j;i++);
 cout<<" ";
 for(i=0;i<j;i++);
 cout<<" ";
 for(i=0;i<j;i++);
 cout<<" ";
 for(i=0;i<j;i++);
 cout<<" ";
 for(i=0;i<j;i++);
 cout<<" ";
}
//**************************OPTION SCREEN FOR ADMINSTRATOR INTERFACE********************************
void admin_loading()
{
system("cls");
topbar();
cout<<"                              _ _ _ _ _ _ _ _ _                         \n";
cout<<"                             / _*_*_*_*_*_*_*_  \\                       \n";
cout<<"                            /*/                \\*\\                      \n";
cout<<"                           /*/     Welcome      \\*\\                     \n";
cout<<"                          /*/        to          \\*\\                    \n";
cout<<"              ___________/*/       Admin Login    \\*\\____________    \n";
cout<<"             \\*************\\_____________________/ **************/        \n";
cout<<"              \\     1.Create a Product    6.Generate Bill       /          \n";
cout<<"               \\    2.Display             7.Stock Report       /          \n";
cout<<"                \\   3.Modify              8.Bill report       /          \n";
cout<<"                 \\  4.Search              9.Exit             /          \n";
cout<<"                  \\ 5.Delete                                /          \n";
cout<<"                   \\_______________________________________/        \n";
cout<<"\n ENTER YOUR CHOICE: ";
}
//****************************FUNCTION FOR ADMINSTRATOR AFTER LOGIN*************************************
void admin()
{
  user=0;
  gotoxy(2,2);
  admin_loading();
  int choice;
  char ch;
  cin>>choice;
  switch(choice)
	{
	  case 1:
				{
				  ofstream f;
				  f.open("inventory.dat",ios::app);
				 do
				  {
					 a.creation();
					 cout<<"\n Do you want to continue(y/n):";
					 cin>>ch;
					 f.write((char*)&a,sizeof(a));
					}
				  while(ch=='y'|| ch=='Y');
				  f.close();
				  admin();
				}
				  break;
		case 2:
				 {
					a.display();
				 }
				  break;
		case 3:
				 {
					char cc;
					do
					 {
					  a.modification();
					  cout<<"Do you want to modify another record(y/n): ";
					  cin>>cc;
					 }
					 while(cc=='y' || cc=='Y');
					 admin();
				 }
				  break;
		case 4:
				 {
				  cout<<"\nSEARCH\n";
				  a.search();
				 }
				  break;
		case 5:
				 {
				  char cc;
					do
					 {
					  a.deletion();
					  cout<<"Do you want to delete any other record(y/n):";
					  cin>>cc;
					 }
					 while(cc=='y' || cc=='Y');
					 admin();

				 }
				  break;
		case 6:
				 {
				  a.billing();
				 }
				  break;
		case 7:
				 {
				  a.stock_up();
				  admin();
				 }
				  break;
		case 8:
				 {
				  a.eod();
				 }
				  break;
		case 9:
				 {
				  cout<<"\n Are you sure you want to logout?(y/n):";
				  char jh;
				  cin>>jh;
				  if(jh=='y'||jh=='Y')
				  main_menu();
				  else
					 system("cls");
					 admin();
				 }
				  break;
		default:
				  {
					cout<<"Invalid choice. Enter a valid choice:-\n\n";
					admin();
				  }
	 }
}
//*********************************FUNCTION FOR CREATION********************************************
void invent::creation()
 {
  {
	system("cls");
	tp();
	cout<<"\n\n\t\t\t----------:CREATION:-----------";
	cout<<"\n\nEnter the details of the product:-\n\n";
	cout<<"Product Name:";
	gets(a.proname);
	cout<<"Product Number:";
	cin>>a.pronum;
	cout<<"Product Type:";
	gets(a.protype);
	cout<<"Price:";
	cin>>a.price;
	cout<<"Available stock:";
	cin>>a.stock;
	cout<<"\n\n The product has been created.";
  }
 }
//************************************FUNCTION TO DISPLAY*******************************************
void invent::display()
{
		system("cls");
		tp();
		cout<<"\n\n\t\t\t------------:DISPLAY:------------\n";
		ifstream go;
		go.open("inventory.dat",ios::binary);
		cout<<"\n";
		for(int t=0;t<80;t++)
		cout<<"*";
		cout<<"Product     Product                   Product         Price        Stock\n";
		cout<<"number      name                      type                           \n";
		for(int t=0;t<80;t++)
		cout<<"*";
		int p=16;
		while(go.read((char*)&a,sizeof(a)))
		{
		 cout<<"\n";
		 cout<<a.pronum;gotoxy(13,p);
		 cout<<a.proname;gotoxy(39,p);
		 cout<<a.protype;gotoxy(55,p);
		 cout<<a.price;gotoxy(68,p);
		 cout<<a.stock;gotoxy(90,p);
		 p++;
		}
		gotoxy(1,p+1);
		go.close();
		cout<<"\n\nPress any key to exit:";
		char chh='~';
		while(chh=='~')
		cin>>chh;
		if(user==0)
		admin();
		else if(user==1)
		sales();
}
//**************************************FUNCTION FOR MODIFICATION***********************************
void invent::modification()
{
 ofstream t;
 ifstream o;
 o.open("inventory.dat");
 t.open("temp.dat");
 int x;
 system("cls");
 tp();
 int flag=0;
 cout<<"\n\n\t\t\t-------------:MODIFICATION:--------------\n";
 cout<<"\t\t\t\tDo you want to modify by:-";
 cout<<"\n\t\t\t\t1-Product number";
 cout<<"\n\t\t\t\t2-Product name";
 cout<<"\n\nEnter your choice:";
 cin>>x;
 switch(x)
  {
	 case 1:
			  {
				system("cls");
				tp();
				gotoxy(5,6);
				cout<<"\n\nEnter the product number: ";
				int num;
				cin>>num;
				while(o.read((char*)&a,sizeof(a)))
				{
				 if(num==a.pronum)
				 {
				  flag=1;
				  setw(10);
				  cout<<"\nOld details are as follows:-\n";
				  cout<<"Product Name:"<<a.proname;
				  cout<<"\nProduct Number:"<<a.pronum;
				  cout<<"\nProduct Type:"<<a.protype;
				  cout<<"\nPrice:"<<a.price;
				  cout<<"\nStock left:"<<a.stock;
				  cout<<"\n\n\t\tEnter the new details:-\n";
				  cout<<"\t\tProduct name:";
				  gets(a.proname);
				  cout<<"\t\tProduct number:";
				  cin>>a.pronum;
				  cout<<"\t\tProduct type:";
				  cin>>a.protype;
				  cout<<"\t\tPrice:";
				  cin>>a.price;
				  cout<<"\t\tStock:";
				  cin>>a.stock;
				  cout<<"\nDone!!Product details have been modified.\n";
				 }
				 t.write((char*)&a,sizeof(a));
				}
				 if(flag==0)
				 cout<<"\nProduct does not exist.\n";
			  }
				 break;
		case 2:
				 {
				  system("cls");
				  tp();
				  gotoxy(5,6);
				  cout<<"\n\nEnter the product name:";
				  char namee[100];
				  gets(namee);
				  while(o.read((char*)&a,sizeof(a)))
				  {
					if(strcmp(a.proname,namee)==0)
					 {
					  flag=1;
					  cout<<"\nOld detailsare as follows:-\n";
					  cout<<"Product Name:"<<a.proname;
					  cout<<"\nProduct Number:"<<a.pronum;
					  cout<<"\nProduct Type:"<<a.protype;
					  cout<<"\nPrice:"<<a.price;
					  cout<<"\nStock left:"<<a.stock;
					  cout<<"\n\n\t\tEnter the new details\n";
					  cout<<"\t\tProduct name:";
					  gets(a.proname);
					  cout<<"\t\tProduct number:";
					  cin>>a.pronum;
					  cout<<"\t\tProduct type:";
					  cin>>a.protype;
					  cout<<"\t\tPrice:";
					  cin>>a.price;
					  cout<<"\t\tStock:";
					  cin>>a.stock;
					  cout<<"\nDone!!Product details have been modified.\n";
					 }
					t.write((char*)&a,sizeof(a));
				  }
				  if(flag==0)
				  cout<<"\n Product does not exist.\n";
				 }
				  break;

		default:
				  {
					cout<<"Enter a valid choice.";
					a.modification();
				  }
	}
 o.close();
 t.close();
 remove("inventory.dat");
 rename("temp.dat","inventory.dat");
}
//******************************************FUNCTION TO SEARCH**************************************
void invent::search()
{
 system("cls");
 tp();
 cout<<"\n\n\t\t\t--------------:SEARCH:--------------";
 cout<<"\n\t\t\t\tDo you want to search by:\n";
 cout<<"\t\t\t\t1.Product number\n";
 cout<<"\t\t\t\t2.Product name\n";
 cout<<"Enter your choice:";
 int y;
 cin>>y;
 int flag =0;
 ifstream f;
 f.open("inventory.dat");
 switch(y)
  {
	case 1:
			 {
			  int cc;
			  cout<<"\n\nEnter the product number to be searched for:";
			  cin>>cc;
			  while(f.read((char*)&a,sizeof(a)))
			  {
				if(a.pronum==cc)
				{
				 cout<<"\n\n\t\tThe details of the product are:-";
				 cout<<"\n\t\tProduct Number:"<<a.pronum;
				 cout<<"\n\t\tProduct Name:"<<a.proname;
				 cout<<"\n\t\tPrice:"<<a.price;
				 cout<<"\n\t\tStock Remaining:"<<a.stock;
				 flag=1;
				}
			  }
			 f.close();
			 if(!flag)
			  {
				cout<<"\n\nProduct not found\n";
				cout<<"Do you want to try again(y/n):";
				char ccc;
				cin>>ccc;
				if(ccc=='y'||ccc=='Y')
				a.search();
				if(user==0)
				admin();
				if(user==1)
				sales();
			  }
			 else
			  {
				cout<<"\nDo you want to search again(y/n):";
				char ccc;
				cin>>ccc;
				if(ccc=='y')
				a.search();
				if(user==0)
				admin();
				if(user==1)
				sales();
			  }
			 }
		case 2:
				 {
				  char cc[100];
				  cout<<"\n\n";
				  cout<<"Enter the name of the product to be searched for:";
				  gets(cc);
				  while(f.read((char*)&a,sizeof(a)))
				  {
					if(strcmp(a.proname,cc)==0)
					{
					 cout<<"\n\n\t\tThe details of the product are:-";
					 cout<<"\n\t\tProduct Number:"<<a.pronum;
					 cout<<"\n\t\tProduct Name:"<<a.proname;
					 cout<<"\n\t\tPrice:"<<a.price;
					 cout<<"\n\t\tStock Remaining:"<<a.stock;
					 flag=1;
					}
				  }
				 f.close();
				 if(!flag)
				  {
					cout<<"\n\nProduct not found\n";
					cout<<"Do you want to try again(y/n):";
					char ccc;
					cin>>ccc;
					if(ccc=='y'||ccc=='Y')
					a.search();
					if(user==0)
					admin();
					if(user==1)
					sales();
				  }
				 else
				  {
					cout<<"\n\nDo you want to search again(y/n):";
					char ccc;
					cin>>ccc;
					if(ccc=='y'||ccc=='Y')
					a.search();
					if(user==0)
					admin();
					if(user==1)
					sales();
				  }
				 }
	}
}
//************************************FUNCTION FOR DELETION*****************************************
void invent::deletion()
{
 system("cls");
 tp();
 cout<<"\n\n\t\t\t-------------:DELETION:--------------\n";
 cout<<"\t\t\t\tDo you want to delete by: \n";
 cout<<"\t\t\t\t1-Product Number\n";
 cout<<"\t\t\t\t2-Product Name";
 cout<<"\n\t\t\t\t3-Delete all products\n";
 int x;
 cout<<"Enter your choice:";
 cin>>x;
 switch(x)
  {
	case 1:
			 {
			  ofstream t;
			  ifstream o;
			  o.open("inventory.dat");
			  t.open("temp.dat");
			  int c,flag=0;
			  cout<<"\nEnter the product number to be deleted:";
			  cin>>c;
			  while(o.read((char*)&a,sizeof(a)))
			  {
				if(c==a.pronum)
				flag=1;
				else
				t.write((char*)&a,sizeof(a));
			  }
			 t.close();
			 o.close();
			 ifstream te;
			 ofstream in;
			 in.open("inventory.dat");
			 te.open("temp.dat");
			 while(te.read((char*)&a,sizeof(a)))
			 in.write((char*)&a,sizeof(a));
			 if(flag)
			 cout<<"\nFinished!!The record has been deleted\n\n";
			 else
			 cout<<"\n\n\t\t\tRecord not deleted.\n\n";
			 for(long int i=0;i<10000;i++)
			 for(long int j=0;j<1000;j++);
			 te.close();
			 in.close();
			}
			 break;
	case 2:
			 {
			  ofstream t;
			  ifstream o;
			  o.open("inventory.dat");
			  t.open("temp.dat");
			  char c[20];
			  int flag=0;
			  cout<<"\nEnter the product name to be deleted:";
			  gets(c);
			  while(o.read((char*)&a,sizeof(a)))
				{
				 if(strcmpi(c,a.proname)==0)
				 flag=1;
				 else
				 t.write((char*)&a,sizeof(a));
				}
			  t.close();
			  o.close();
			  ifstream te;
			  ofstream in;
			  in.open("inventory.dat");
			  te.open("temp.dat");
			  while(te.read((char*)&a,sizeof(a)))
			  in.write((char*)&a,sizeof(a));
			  if(flag)
			  cout<<"\nFinished!!The record has been deleted\n\n";
			  else
			  cout<<"\n\n\n\t\t\tRecord not deleted\n\n";
			  for(long int i=0;i<10000;i++)
			  for(long int j=0;j<1000;j++);
			  te.close();
			  in.close();
			 }
			  break;
	case 3:
			 {
			  remove("inventory.dat");
			  cout<<"\nFinished!!All products have been deleted";
			  cout<<"\nPress any key to exit:";
			  char del_ch3;
			  cin>>del_ch3;
			  admin();
			 }
	default:
			  {
				cout<<"\n Wrong choice";
				cout<<"\nPress any key to return to admin page:";
				char del_ch;
				cin>>del_ch;
				admin();
			  }
  }
}
//*********************************FUNCTION FOR BILLING*********************************************
void invent::billing()
{
 char ch;
 int to;
 char u[1000];
 system("cls");
 tp();
 cout<<"\n";
 time_t t=time(NULL);
 tm*t1=localtime(&t);
 cout<<"DATE:"<<t1->tm_mday<<"/"<<t1->tm_mon+1<<"/"<<t1->tm_year+1900;
 cout<<"\n";
 cout<<"\n\t\t\t--------------:BILLING:----------------\n\n";
 remove("bill.dat");
 char fname[6];
 int z=1;
 int flag=0;
 cout<<"\nEnter the bill number:";
 cin>>fname;
 do
  {
	ifstream f;
	ofstream s;
	f.open("inventory.dat");
	s.open("bill.dat",ios::app);
	flag=0;
	cout<<"\nEnter the product number:";
	xxx:                                          //label
	cin>>b.pronum;
	int flag=0;
	while(f.read((char*)&a,sizeof(a)) && flag!=1)
	{
	 if(a.pronum==b.pronum)
	  {
		flag=1;
		if(a.stock<=0)
		cout<<"Too low stock!!";
		else
		{
		 cout<<"\nEnter the quantity to order:";
		 cin>>b.stock;
		 if(b.stock<=a.stock)
		 {
		  strcpy(u,a.proname);
		  strcpy(b.proname,u);
		  strcpy(u,a.protype);
		  strcpy(b.protype,u);
		  to=a.price;
		  b.price=to;
		  s.write((char*)&b,sizeof(b));
		  s.close();
		  f.close();
		 }
		 xyz:                                  //label
			if(b.stock>a.stock)
			{
			 cout<<"\n\t\tYour requirement is greater than stock available.";
			 cout<<"\n\n Please enter a smaller quantity";
			 cin>>b.stock;
			if(b.stock<a.stock)
			{
			 strcpy(u,a.proname);
			 strcpy(b.proname,u);
			 strcpy(u,a.protype);
			 strcpy(b.protype,u);
			 to=a.price;
			 b.price=to;
			 s.write((char*)&b,sizeof(b));
			 s.close();
			 f.close();
			}
		  goto xyz;
		  }
		 }
		}
	  }
	if(!flag)
	{
	 cout<<"\n\t\tEnter a valid product number:";
	 goto xxx;
	}
	z++;
	cout<<"\nDo you want to order another product(y/n):";
	cin>>ch;
	system("cls");
	tp();
}while(ch=='y' || ch=='Y');

//****************************DISPLAYING THE BILL***************************************************
		system("cls");
		ifstream g;
		g.open("bill.dat");
		topbar();
		float total;
		cout<<"DATE:"<<t1->tm_mday<<"/"<<t1->tm_mon+1<<"/"<<t1->tm_year+1900;
		cout<<"\n";
		cout<<"\t\t\t----------:BILL:----------\n";
		for(to=0;to<80;to++)
		cout<<"*";
		gotoxy(4,13);cout<<"Product     Product              Product        price       quantity   Amount";
		gotoxy(3,14);cout<<" number      name                 type                           \n";
		int p=16;
		for(to=0;to<80;to++)
		cout<<"*";
		ofstream tt;
		tt.open(fname,ios::app|ios::binary);
		while(g.read((char*)&a,sizeof(a)))
		{
		 tt.write((char*)&a,sizeof(a));
		 cout<<"\n";gotoxy(4,p);
		 cout<<a.pronum;gotoxy(16,p);
		 cout<<a.proname;gotoxy(37,p);
		 cout<<a.protype;gotoxy(52,p);
		 cout<<a.price;gotoxy(64,p);
		 cout<<a.stock;gotoxy(75,p);
		 cout<<a.stock*a.price;
		 total+=(a.stock*a.price);
		 p++;
		}
		tt.close();
		cout<<"\n";
		for(int ii=0;ii<80;ii++)cout<<"_";
		cout<<"\n\t\t\t\t\t\t\t Subtotal = "<<total;
		float vat=(0.05*total);
		cout<<"\n\t\t\t\t\t\t\t VAT(5%) = "<<vat;
		float gtotal=total+vat;
		float discount=(0.3*gtotal);
		float grandtotal=gtotal-discount;
		cout<<"\n\t\t\t\t\t\t\t DISCOUNT(30%)= "<<discount;
		cout<<"\n\t\t\t\t\t\t\t======================";
		cout<<"\n\t\t\t\t\t\t\t Grand Total =";
		cout<<"Rs."<<grandtotal;
		cout<<"\n\t\t\t\t\t\t\t======================";
		g.close();
		cout<<"\n\t\t\tTHANKS!!HAVE A NICE DAY :)";
//*********************SEGMENT TO MAKE CHANGES TO THE REMAINING QUANTITY****************************
		ifstream i;
		ofstream uu;
		i.open("inventory.dat");
		uu.open("invent2.dat");
		while(i.read((char*)&a,sizeof(a)))
		{
			uu.write((char*)&b,sizeof(b));
		}
		i.close();
		uu.close();
		ifstream o;
		ifstream s;
		ofstream n;
		o.open("inventory.dat");n.open("invent2.dat");
		while(o.read((char*)&b,sizeof(b)))
		{  flag=0;s.open("bill.dat");
			while(s.read((char*)&a,sizeof(a)))
			{
				if(a.pronum==b.pronum)
				{  flag=1;
					c.pronum=a.pronum;
					c.price=a.price;
					strcpy(u,a.proname);strcpy(c.proname,u);
					strcpy(u,a.protype);strcpy(c.protype,u);
					c.stock=b.stock-a.stock;
					n.write((char*)&c,sizeof(c));
				}
			}
		  if(flag==0)
		  n.write((char*)&b,sizeof(b));
		  s.close();
		}
		o.close();n.close();
		remove("inventory.dat");
		rename("invent2.dat","inventory.dat");
//***********************************SEGMENT TO EXIT************************************************
		cout<<"\nPress any key to exit:";
		char chh='~';
		while(chh=='~')
		cin>>chh;
		if(user==0)
		admin();
		else if(user==1)
		sales();
}
//*********************************FUNCTION FOR STOCK REPORT****************************************
void invent::stock_up()
{
 system("cls");
 topbar();
 int flag=0;
 char opp;
 ifstream st;
 st.open("inventory.dat",ios::binary);
 int stock_prono;
 do
 {
  system("cls");
  tp();
  ifstream st;
  st.open("inventory.dat",ios::binary);
  cout<<"\n\t\t-----------------:STOCK REPORT:----------------";
  cout<<"\n\nEnter the Product Number whose stock you want to check:";
  cin>>stock_prono;
  while(st.read((char*)&a,sizeof(a)))
  {
	if(stock_prono==a.pronum)
	{
	 system("cls");
	 tp();
	 flag=1;
	 cout<<"\n";
	 int i;
	 cout<<"\n\t\t\t-----------:STOCK REPORT:------------\n";
	 for(i=0;i<40;i++)
	 cout<<"_*";
	 cout<<"\n\t\t\t\tPRODUCT NUMBER: "<<a.pronum;
	 cout<<"\n\t\t\t\tPRODUCT NAME: "<<a.proname;
	 cout<<"\n\t\t\t\tSTOCK: "<<a.stock;
	 cout<<"\n";
	 for(i=0;i<40;i++)
	 cout<<"_*";
	 cout<<"\n";
	}
 }
 if(flag==0)
 cout<<"Product Number does not exist.";
 cout<<"\n";
 cout<<"Do you want to check stock for any other product(y/n): ";
 cin>>opp;
 }while(opp=='y'||opp=='Y');
 st.close();
}
//***************************FUNCTION TO DISPLAY BILL REPORT******************************
void invent::eod()
{
 char fname[6];
 system("cls");
 topbar();
 cout<<"\n\t\t\t-------------:BILL REPORT:-------------\n";
 cout<<"Enter the bill number:";
 cin>>fname;
 float amount;
 float vat;
 float gtotal;
 float ggtotal;
 float dis;
 ifstream g;
 float total=0;
 g.open(fname,ios::binary);
 cout<<"\n";
 for(int tl=0;tl<40;tl++)
 cout<<"_*";
 gotoxy(4,14);cout<<"Product     Product              Product        price       quantity   Amount";
 gotoxy(3,15);cout<<" number      name                 type                           \n";
 int p=17;
 for(int tl=0;tl<40;tl++)
 cout<<"_*";
 while(g.read((char*)&a,sizeof(a)))
 {
  cout<<"\n";gotoxy(4,p);
  cout<<a.pronum;gotoxy(16,p);
  cout<<a.proname;gotoxy(37,p);
  cout<<a.protype;gotoxy(52,p);
  cout<<a.price;gotoxy(64,p);
  cout<<a.stock;gotoxy(75,p);
  amount=a.stock*a.price;
  cout<<amount;
  total+=(amount);
  p++;
 }
 vat=(0.05*total);
 gtotal=total+vat;
 dis=(0.3*gtotal);
 ggtotal=gtotal-dis;
 cout<<"\n";
 cout<<"                         \t\t\t=============================";
 cout<<"\n                       \t\t\t\tTOTAL AMOUNT=        "<<ggtotal;
 cout<<"                         \t\t\t\t=============================";
 g.close();
 cout<<"\n\t\t\tPRESS ANY KEY TO EXIT:";
 char chh='~';
 while(chh=='~')
 cin>>chh;
 if(user==0)
 admin();
}
//*******************************OPTION SCREEN FOR SALESMAN INTERFACE*******************************
void sales_loading()
{
 system("cls");
 tp();
 cout<<"\n";
 cout<<"               1)DISPLAY         7)BILL REPORT        2)CREATE A PRODUCT        ";
 cout<<"                         \\             |             /                        \n";
 cout<<"                          \\            |            /                          \n";
 cout<<"                           \\           |           /                           \n";
 cout<<"                            \\          |          /                            \n";
 cout<<"                            /********************\\                             \n";
 cout<<"                           /****              ****\\                           \n";
 cout<<"                          |*****   WELCOME!!  *****|                           \n";
 cout<<"           6)SEARCH-------|*****      TO      *****|------3)MODIFY A PRODUCT   \n";
 cout<<"                          |*****SALESMAN LOGIN*****|                           \n";
 cout<<"                          \\****              ******/                       \n";
 cout<<"                           \\***              *****/                          \n";
 cout<<"                            \\********************/                        \n";
 cout<<"                           /           |         \\                   \n";
 cout<<"                          /            |          \\                 \n";
 cout<<"                         /             |           \\                 \n";
 cout<<"                        /              |            \\                \n";
 cout<<"         5)STOCK REPORT             8)EXIT           4)GENERATE BILL\n";
}
//****************************FUNCTION FOR SALESMAN AFTER LOGIN************************************
void sales()
{
 user=1;
 sales_loading();
 int ch;
 cout<<"\t\tEnter your choice:";
 cin>>ch;
 switch(ch)
  {
	case 1:{
			  a.display();
			 }
			  break;
	case 2:{
			  char ch;
			  ofstream f;
			  f.open("inventory.dat",ios::app);
			  do
			  {
				a.creation();
				cout<<"\n\t Do you want to continue(y/n):";
				cin>>ch;
				f.write((char*)&a,sizeof(a));
			  }
			  while(ch=='y'|| ch=='Y');
			  f.close();
			  sales();
			 }
			  break;
	case 3:{
			  char cc;
			  do
			  {
				a.modification();
				cout<<"\n\tDo you want to modify another record(y/n):";
				cin>>cc;
			  }while(cc=='y' || cc=='Y');
			  sales();
			 }
			  break;
	case 4:{
			  a.billing();
			 }
			  break;
	case 5:{
			  a.stock_up();
			  sales();
			 }
			  break;
	case 6:{
			  a.search();
			  sales();
			 }
			  break;
	case 7:{
			  a.eod();
			  sales();
			 }
			  break;
	case 8:{
			  cout<<"\nDo you really want to logout??(y/n):";
			  char ch;
			  cin>>ch;
			  if(ch=='y' || ch=='Y')
			  main_menu();
			  else
				{
				 system("cls");
				 sales();
				}
			  }
				break;
	default:{
				cout<<"\nEnter a valid choice:";
				sales();
			  }
				break;
  }
}
//***********************************FUNCTION FOR PASSWORD HIDING***********************************
char* password_hiding()
{
char character,password[2000];
StarNum=0;
while((character=getch())!=EOF  && character!='\n'&& character!='\r' && StarNum<sizeof(password)-1)
  {
	if(character=='\b'&&StarNum>0)
	{
	 cout<<"\b\b";
	 fflush(stdout);
	 StarNum--;
	 password[StarNum]='\0';
	}
	else if(isalnum(character))
	{
	 putchar('*');
	 password[StarNum++]=(char)character;
	}
  }
StarNum=strlen(password);
return password;
}
//************FUNCTION VALIDATION(to check if only a character is entered in a string)**************
char* validation()
{
 char character,password[20];
 StarNum=0;
 character=(char)getch();
 cout<<character;
 if(isalpha(character))
 {
  password[StarNum]=character;
  while(character!=13)
  {
	character=(char)getch();
	{
	 if(character==13)
	 break;
	 StarNum++;
	 password[StarNum]=character;
	 cout<<character;
	}
  }
 }
 password[StarNum+1]='\0';
 StarNum=strlen(password);
 return(password);
}
//****************************************END OF THE PROGRAM****************************************
