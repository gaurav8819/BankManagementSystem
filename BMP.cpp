#include<iostream.h>
#include<conio.h>
#include<stdio.h>
#include<string.h>
#include<process.h>

class bank
{

struct account
{
 char name[20];
 char father[20];
 char birth[10];
 char gender[10];
 char address[40];
 char phone[15];
 char type[10];
 long account;
 char password[20];
 float balance;
} ary[50];

public :

int i;
int j;

	void create_account()
	{

	cout<<"\n\t\t PLEASE FILL THE FOLLOWING DETAILS : ";
	cout<<"\n\n NAME               : ";
	gets(ary[i].name);
	cout<<"\n FATHER'S  NAME     : ";
	gets(ary[i].father);
	cout<<"\n DATE OF BIRTH      : ";
	gets(ary[i].birth) ;
	cout<<"\n GENDER             : ";
	gets(ary[i].gender);
	cout<<"\n ADDRESS            : ";
	gets(ary[i].address);
	cout<<"\n PHONE NO.          : ";
	gets(ary[i].phone) ;
	cout<<"\n ACCOUNT TYPE (C/S) : ";
	gets(ary[i].type);
	cout<<"\n CHOOSE YOUR ACCOUNT NO       : ";
	cin>>ary[i].account;
	cout<<"\n CHOOSE YOUR ACCOUNT PASSWORD : ";
	gets(ary[i].password);
	cout<<"\n\n ACCOUNT SUCESSFULLY CREATED !";
	getch();
	i++;
	}

	
	void withdraw()
	{
	long a ;
	char b[20];
	float z;
	cout<<"\n\n ENTER THE ACCOUNT NO : ";
	cin>>a;
	cout<<"\n\n ENTER THE PASSWORD : ";
	gets(b) ;
	for(int k=0;k<50;k++)
	if(a==ary[k].account)
	break;
	cout<<"\n\n YOUR CURRENT ACCOUNT BALANCE : ";
	cout<<ary[k].balance;
	cout<<"\n\n HOW MUCH MONEY DO YO WANT TO DEPOSITE : ";
	cin>>z;
	cout<<"\n\n\t\t\t MONEY SUCESSFULLY DEPOSITED ! ";
	cout<<"\n\n CURRENT BALANCE IN YOUR ACCOUNT : ";
	ary[k].balance=ary[k].balance-z;
	cout<<ary[k].balance;
	getch();
	}

	void deposite()
	{
	long a ;
	char b[20];
	float z;
	cout<<"\n\n ENTER THE ACCOUNT NO : ";
	cin>>a;
	cout<<"\n\n ENTER THE PASSWORD : ";
	gets(b) ;
	for(int k=0;k<50;k++)
	if(a==ary[k].account)
	break;
	cout<<"\n\n YOUR CURRENT ACCOUNT BALANCE : ";
	cout<<ary[k].balance;
	cout<<"\n\n HOW MUCH MONEY DO YO WANT TO WITHDRAW : ";
	cin>>z;
	cout<<"\n\n\t\t\t MONEY SUCESSFULLY WITHDRAW ! ";
	cout<<"\n\n CURRENT BALANCE IN YOUR ACCOUNT : ";
	ary[k].balance=ary[k].balance+z;
	cout<<ary[k].balance;
	getch();
	}
};

void main()
{
bank b ;
int n ;
clrscr();
cout<<"\n\n\n\n\n\n\n\t\t\t\t WELCOME....! ";
getch();

do
{
clrscr();
cout<<"\n\t\t\t\t HOME PAGE ";
cout<<"\n\n 1. CREATE AN ACCOUNT ";
cout<<"\n\n 2. WITHDRAW MONEY ";
cout<<"\n\n 3. DEPOSITE MONEY ";
cout<<"\n\n 4. EXIT ";

cout<<"\n\n ENTER YOUR CHOICE (1-5) : ";
cin>>n;

switch(n)
{
case 1 : clrscr();
	 b.create_account();
	 break;
case 2 : clrscr();
	 b.withdraw();
	 break;
case 3 : clrscr();
	 b.deposite();
	 break;
case 5 : clrscr();
	 cout<<"\n\n\n\n\n\n\n\t\t\t THANKS FOR USING THE PRORAM ! ";
	 getch();
	 exit(1);
}
}while(1);

getch();
}
