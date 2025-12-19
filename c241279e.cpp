#include<iostream>
#include<conio.h>
#include<iomanip>//for setprecision
using namespace std;
 int main()

 {
     float num1,num2;

     num1 = 10;
     num2 = 3;

     cout<<showpoint;
     cout<<fixed;  //count after point
     cout<<setprecision(15);
     float sum= num1+num2;
     cout <<setw(20)<<"sum is : " <<sum;
     cout<<endl;

      float  mul= num1*num2;
     cout<<setw(20)<<"mul is : " <<mul;
     cout<<endl;

     cout<<noshowpoint;
      double div= (float)num1/num2;
     cout<<setw(20)<<"div is : " <<div;
     cout<<endl;
      float sub= num1-num2;
     cout<<setw(20)<<"sub is : " <<sub;
     cout<<endl;
      //int rem= num1%num2;
   //  cout<<"rem is : " <<rem;
    // cout<<endl;





     getch();
 }

