#include <iostream>
using namespace std;

bool checkfib(int n)
{
  int prev_last=0;
  while(n)
    if((n&1 && prev_last)
       //if the current and the last bit is one
       return false;
    prev_last=n&1;
    n>>=1; //right shift the number 
    
   return false;
  }
       
       int main()
       {
         int n=10;
         if(checkfib(n))
           cout<<"YES";
         else
           cout<<"NO";
         return 0;
       }
       
       
