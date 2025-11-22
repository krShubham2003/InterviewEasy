class Solution {
public:

    bool solve(int i,int j,string &s)
    {
     if(i>=j)
     {
        return true;
     }
     if(s[i]==s[j])
     {
       return  solve(i+1,j-1,s);
     }
     return false;

    }
    string longestPalindrome(string s) {
        int st=0;
        int len=INT_MIN;
        for(int i=0;i<s.size();i++)
        {
            for(int j=i;j<s.size();j++)
            {
                if(solve(i,j,s)==true)
                {
                    if(j-i+1>len)
                    {
                        len=j-i+1;
                        st=i;
                    }
                }
            }
        }
        return s.substr(st,len);
    }
};