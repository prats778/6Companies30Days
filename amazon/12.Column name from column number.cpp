class Solution{
    public:
    string colName (long long int n)
    {
        // your code here
        string str="";
        while(n>0)
           {
               n--;
               char c=n%26 + 'A';
               str+=c;
               n/=26;
           }
        reverse(str.begin(),str.end());
        return str;
    }
};