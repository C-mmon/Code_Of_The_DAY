#include <iostream>
using namespace std;
void swap(int* a , int* b)
{
  int temp=*a;
  *a=*b;
  *b=temp;
}
int partition(int arr[], int low, int high)
{
  int pivot=arr[high];
  int i=(low-1);
  for(int j=low;j<=high-1;j++)
  {
    if(arr[j]<=pivot)
    {
      i++;
      swap(&arr[i],&arr[j]);
    }
  }
  swap(&arr[i+1],&arr[high]);
  return i+1;
}
void quicksort(int arr[],int low, int high)
{
  int pivot_index;
  if(low<high)
  {
    pivot_index=partition(arr,low,high);
    quicksort(arr,low,pivot_index-1);
    quicksort(arr,pivot_index+1,high);
  }
}
void printarray(int arr[],int n)
{
  for(int i=0;i<n;i++)
  {
    cout<<arr[i]<<endl;
  }
}
int main()
{
  int arr[]={5,5,7,2,3};
  int n=sizeof(arr)/sizeof(int);
  quicksort(arr,0,n-1);
  printarray(arr,n);
  return 0;
}
