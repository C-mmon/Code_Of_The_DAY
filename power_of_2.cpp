
#include <stdio.h>
using namespace std;
#include <iostream>
bool ispowtwo(unsigned int x)
{
    return (x != 0) && ((x & (x - 1)) == 0);
}
int main()
{
    unsigned int a=62;
    cout<<ispowtwo(a)<<endl;
    return 0;
}
