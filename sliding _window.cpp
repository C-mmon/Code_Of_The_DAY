#include <stdio.h>
#include <iostream>
using namespace std;

int main()
{
  int arr[]={12,3,4,5};
  int n=sizeof(arr)/sizeof(int);
  int start=0;
  int k=2;
  int end=k-1;
  int maxsum=0, currentSum=0;
  //first calculate the sum from 1 to k of the given array .
  //always remember to write the base condition

  for(int i=0;i<k;i++)
  {
    maxsum+=arr[i];
  }
  //loop until end reaches n
  while(end<n)
  {
    //method to move ahead you have to let go something
    currentSum-=arr[start];
    //increment the positon
    start++;
    end++;
    //while moving ahead you gain seomthing and lose something
    //add the things you gain on the journey
    currentSum+=arr[end];
    if(currentSum>maxsum)
    {
      maxsum=currentSum;
    }
  }
  cout<<maxsum;

  return 0;
}
