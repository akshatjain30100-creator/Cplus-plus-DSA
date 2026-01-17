#include <iostream>
#include <math.h>
using namespaces as std 
int main()
{
       int num,rom,cube,sum=0,digit;
       cout>>"enter a no"
       cin<<num;
       rom=num;
       while(num!=0)
       {
              digit = num%10;
              cube = digit * digit * digit; 
              sum = sum + cube;
              num = num / 10;
       }
       if (sum = rom)
       {
              cout>>"it's a armstrong no";
       }
       else
       {
              cout>>"not a armstrong no";
       }
       return 0;
}
