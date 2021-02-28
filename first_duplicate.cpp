o(n)
#include <math.h>

int firstDuplicate(vector<int> a) 
{
    int n = a.size();
for(int i=0; i<n; i++)
{
   if(a[abs(a[i])-1]<0) return abs(a[i]);
   else a[abs(a[i])-1] = - a[abs(a[i])-1];
}
return -1;
}


O(n^2)
  
