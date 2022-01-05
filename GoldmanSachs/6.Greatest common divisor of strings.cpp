class Solution {
public:
    int gcd(int a,int b)
    {
        if(b>0)
            return gcd(b,a%b);
        else
            return a;
    }

    int check(string s1,string s2,int len){
        for(int i=0,j=0;i<s1.length();i++,j++)
            if(s1[i]!=s2[j%len])
                   return false;
        return true;
    }
    
    string gcdOfStrings(string str1, string str2) {
        int len=gcd(str1.length(),str2.length());
        if(check(str1,str2,len) && check(str2,str1,len))
            return str1.substr(0,len);
        return "";
    }
};