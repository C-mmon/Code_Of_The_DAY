#include <string>
class Solution {
public:
    void rotate(string &s) 
    {
        for (int i = 1; i < s.size(); i++)
        {
            swap(s[i-1], s[i]);
        }
    }
    bool rotateString(string A, string B) 
    {
        int lenA=A.length();
        int lenB=B.length();
        bool store=false;
        
        if(lenA!=lenB)
        {
            return false;
        }
        for(int i=0;i<lenA;i++)
        {
            if (A.compare(B)!= 0)
            {
                rotate(B);
                
            }
            
        }
        if(A.compare(B)==0)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};
