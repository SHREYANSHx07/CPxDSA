class Solution {
public:
    int maximum69Number (int n) {
        string s = to_string(n);
        int x=-1;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='6')
            {
                x=i;
                break;
            }
        }
        if(x==-1) return n ;
        else
        {
            s[x]='9';
            int ans= stoi(s);
            return ans;
        }
        return 0;

        
    }
};