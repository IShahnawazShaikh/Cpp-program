//Abstract classes
#include<iostream.h>
#include<conio.h>
class pixel
{
      public:
       float r;
     virtual void show()=0;
     void input()
     {
       cin>>r;
    }
};
class square:public pixel
  {
     public:
     void show()
     {
       cout<<endl<<"Area of square="<<r*r<<endl;
     }
};
 class circle:public pixel
  {
    public:
    void show()
    {
      cout<<endl<<" Are of circle="<<3.14*r*r;
    }
};
int main()
{
   square obj2;
   circle obj3;
   clrscr();
   cout<<"enter side of square"<<endl;
   obj2.input();
   obj2.show();
   cout<<"enter radius of circle"<<endl;
   obj3.input();
   obj3.show();
    getch();
    return 0;
   }

