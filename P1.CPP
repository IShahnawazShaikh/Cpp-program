#include<iostream.h>
#include<stdio.h>
#include<conio.h>
class stu
{   char name[20],roll[20];
    public:
    void inputdata()
    {
       gets(name);
       cin>>roll;
    }
    void display()
    {  cout<<endl<<"name="<<name<<endl<<"roll no="<<roll;
    }
};

int main()
{
   stu s[30];
   int i,p;
   clrscr();
    cout<<"enter the number of student"<<endl;
     cin>>p;
       for(i=0;i<p;i++)
       {
	cout<<"enter the name and roll number of "<<i+1<<" student"<<endl;
	s[i].inputdata();
       }
       cout<<"The details of "<<p<<" Students are"<<endl;
       for(i=0;i<p;i++)
       {
	 s[i].display();
       }
     getch();
     return 0;
  }