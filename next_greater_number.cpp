#include <iostream>
using namespace std;
#include <string>
#include <vector>
#define INT_MAX 2147483647
#include <algorithm>
#include <bits/stdc++.h>



int main()
{
    vector <int> digit{4,4,1,2};
    int store=0;
    for(int i=digit.size()-1;i>0;i--)
    {
        if(digit[i]>digit[i-1])
        {
            continue;
        }
        else
        {
            store=digit.size()-1-i;
            break;
        }
    }
    int element=digit[store];
    int min=INT_MAX;
    int store1=0;
    for(int i=store;i<digit.size();i++)
    {
        if(digit[i]>element)
        {
            if(digit[i]-element<=min)
            {
                min=digit[i]-element;
                store1=i;
            }
        }
    }
    swap(digit[store],digit[store1]);
    sort(digit.begin()+store,digit.begin()+store1,digit);
    for(auto i: digit)
    {
        cout<<i<<endl;
    }
    return 0;
    
}
