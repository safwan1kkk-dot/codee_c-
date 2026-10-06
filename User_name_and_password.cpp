#include<iostream>
using namespace std;
int main()
{
char choice;
switch(choice)
{
case 'a':
cout<<"enter user s"<<endl;
break;
case 'b':
cout<<"enter user m"<<endl;
break;
case 'c':
break;		
}
const string uesr_name1 ="safwan";
const int pass1 = 1111;

 
string x;
int y;

cout<<"enter your name 1"<<endl;
cin>>x;
cout<<"enter your pass 1"<<endl;
cin>>y;

if(uesr_name1 == x && pass1 == y)
cout<<"TRUE"<<endl;

	else
	cout<<"false"<<endl;

const string uesr_name2 ="abdulrhamn"; 
const int pass2 = 2222;

string w;
int a;

cout<<"enter your name 2"<<endl;
cin>>w;
cout<<"enter your pass 2"<<endl;
cin>>a;


if(uesr_name2 == w && pass2 == a)
cout<<"TRUE"<<endl;

	
	else
	cout<<"false"<<endl;
    
    const string uesr_name3 ="Amer";
const int pass3 = 3333;

 
string v;
int o;

cout<<"enter your name 3"<<endl;
cin>>v;
cout<<"enter your pass 3"<<endl;
cin>>o;

if(uesr_name3 == v && pass3 == o)
cout<<"TRUE"<<endl;

	else
	cout<<"false"<<endl;
	
	}