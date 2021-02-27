#include <stdio.h>
#include <limits.h>
#include <iostream>

using namespace std;
int main(){
    int A[] = {1,2,3,4,5};
    int max1=INT_MIN;
    int min1=INT_MAX;
    for(int i=0;i<5;i++)
    {
     max1=max(A[i],max1);
     min1=min(A[i],min1);
     
    }
    cout<<max1<<endl;
    cout<<min1<<endl;
    return 0;
}
