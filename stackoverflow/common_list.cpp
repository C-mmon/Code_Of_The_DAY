#include <iostream>     // std::cout
#include <algorithm>    // std::set_intersection, std::sort
#include <vector>       // std::vect
#include <unordered_map>
#include <math.h>

using namespace std;

int main()
{
  int A[]={9,5,9,3};
  int B[]={9,9,5,5};
  unordered_map <int,float> n;

  for(int i=0;i<4;i++)
  {
    n[A[i]]+=0.1;
  }

    for(int i=0;i<4;i++)
    {
      n[B[i]]+=1;
    }
    unordered_map <int,float>::iterator it;

    int one;
    int sec;
    int min_1;
    for(it=n.begin();it!=n.end();it++)
    {
      one=int(it->second);
      sec=round((it->second-int(it->second))*10);
      min_1=min(one,sec);


      for(int i=0;i<min_1;i++)
      {

        cout<<it->first<<endl;
      }
    }


}
