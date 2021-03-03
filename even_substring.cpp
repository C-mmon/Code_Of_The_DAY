#include <string>
#include <bits/stdc++.h>
using namespace std;

int ct=0;

bool even(string m)
{
  bool a=true;
  int len=m.length();
  int arr[26]={0};
  for(int i=0;i<len;i++)
  {
    arr[int(m[i])-97]++;
  }
  for(int j=0;j<26;j++)
  {
    if(arr[j]>0 && (arr[j]%2)!=0)
    {
      a=false;
    }
  }
  return a;
}
void solve(string ip, string op)
{

  if(ip.length()==0)
  {
    if(even(op))
    {
      ct++;
    }

    return;
  }
  string op1=op;
  string op2=op;
  op2.push_back(ip[0]);
  ip.erase(ip.begin()+0);
  solve (ip, op1);
  solve(ip, op2);
  return;
}
int main()
{

  solve("geek","");
  ct--; //empty string 
  cout<<ct;
  return 0;

}
