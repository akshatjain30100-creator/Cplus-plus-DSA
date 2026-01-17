#include<iostream>
using namespaces as std;
int main()
{ 
     int num,rev=0,digit;
     cout<<"enter a number";
     cin>>num;
     while (num!=0)
     { 
          digit=num%10;
          rev=(rev*10)+digit;
          num=num/10; 
     }
     cout<<"reverse is " <<
     return 0;
}