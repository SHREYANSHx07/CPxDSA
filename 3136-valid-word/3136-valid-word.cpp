class Solution {
public:
    bool isValid(string s) {
        int n=s.size();
        string s1=s;
        transform(s1.begin(), s1.end(), s1.begin(), ::tolower);
        int x=0,y=0;
        for(int i=0;i<n;i++)
        {
            if(isalpha(s1[i]))
            {
            if(s1[i]=='a' || s1[i]=='e'|| s1[i]=='i'|| s1[i]=='o' || s1[i]=='u')
            x++;
            else
            y++;
            }
            else if(isdigit(s1[i]))
            continue;
            else
            return 0;
        }
        if(x>0 && y>0 && n>=3)
        return true;
        else
        return false;
        
    }
};