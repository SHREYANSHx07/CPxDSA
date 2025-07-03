class Solution {
public:
    char kthCharacter(int k) {
        string s="a";
        while(s.size()<k)
        {
            string s1="";
            for(int i=0;i<s.size();i++)
            {
                int x=s[i];
                x++;
                if(x>122) x=97;
                char y=x;
                s1+=y;
            }
            s+=s1;
        }
        char ans=s[k-1];
        cout<<s<<'\n';
        return ans;
        
    }
};