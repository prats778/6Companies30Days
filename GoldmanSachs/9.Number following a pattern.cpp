class Solution{   
public:
    string printMinNumberForPattern(string seq){
        // code here 
    string result;
 
    stack<int> stk;
 
    for (int i = 0; i <= seq.length(); i++)
    {
        stk.push(i + 1);
 
        if (i == seq.length() || seq[i] == 'I')
        {
            while (!stk.empty())
            {
                result += to_string(stk.top());
                stk.pop();
            }
        }
    }
    
    return result;
    }
};