class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& a) 
    {
        int ans=0;
        for(int i=0;i<9;i++)
        {
            vector<int> b(9,0),c(9,0);
            for(int j=0;j<9;j++)
            {
                if(a[i][j]!='.')
                {
                    int x=a[i][j]-'0';
                    b[x-1]++;
                }
                if(a[j][i]!='.')
                {
                    int y=a[j][i]-'0';
                    c[y-1]++;
                }
            }
            for(auto i:b)
            {
                if(i>1)
                {
                    ans=1;
                    break;
                }
            }
            for(auto i:c)
            {
                if(i>1)
                {
                    ans=1;
                    break;
                }
            }
        }
        int ans1=0;
        for(int i=0;i<9;i+=3)
        {
            vector<int> d(9,0);
            for(int j=0;j<9;j+=3)
            {
                if(a[i][j]!='.')
                {
                    int x=a[i][j]-'0';
                    d[x-1]++;
                }
                if(a[i][j+1]!='.')
                {
                    int x=a[i][j+1]-'0';
                    d[x-1]++;
                }
                if(a[i][j+2]!='.')
                {
                    int x=a[i][j+2]-'0';
                    d[x-1]++;
                }
                if(a[i+1][j]!='.')
                {
                    int x=a[i+1][j]-'0';
                    d[x-1]++;
                }
                if(a[i+1][j+1]!='.')
                {
                    int x=a[i+1][j+1]-'0';
                    d[x-1]++;
                }
                if(a[i+1][j+2]!='.')
                {
                    int x=a[i+1][j+2]-'0';
                    d[x-1]++;
                }
                if(a[i+2][j]!='.')
                {
                    int x=a[i+2][j]-'0';
                    d[x-1]++;
                }
                if(a[i+2][j+1]!='.')
                {
                    int x=a[i+2][j+1]-'0';
                    d[x-1]++;
                }
                if(a[i+2][j+2]!='.')
                {
                    int x=a[i+2][j+2]-'0';
                    d[x-1]++;
                }
                for(auto i:d)
                {
                if(i>1)
                {
                    ans1=1;
                    break;
                }
                }
                for(int i=0;i<9;i++) d[i]=0;
            }
            if(ans1)
            break;
            
        }
        if(ans1 || ans)
        return false;
        else
        return true;
    }
};