#include<iostream.h>
#include<conio.h>
class prime
{int n,c;
 public:
 void get();
 void operation();
 void display();
 };
 void prime::get()
 { cout<<"\nenter a no.:  ";
   cin>>n;
 }
 void prime::operation()
 {
   int i,r;
   c=0;
   for(i=2;i<=n/2;i++)
   { r=n%i;
    if(r==0)
    { c++;}
   }
 }
 void prime::display()
 {
   if(c==0)
   { cout<<"     no. is prime"; }
   else 
   { cout<<"     no. is not prime" ; }
   cout<<endl;
 }
   void main()
   { clrscr();
      prime p;
      p.get();
      p.operation();
      p.display();
   }  
