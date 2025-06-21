#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int minimumDeletions(string word, int k) {
        map<char,int> m;
        int n=word.size();
        for(int i=0;i<n;i++)
        {
            m[word[i]]++;
        }
        vector<int> v;
        for(auto i:m)
        {
            v.push_back(i.second);
        }
        int y=v.size();
        sort(v.rbegin(),v.rend());
        int ans=INT_MAX;
        for(int i=0;i<y;i++)
        {
            int a=v[i],b=0;
            for(auto j:v)
            {
                if(j<a)
                    b+=j;
                else if(j>a+k)
                    b+=j-(a+k);
            }
            ans=min(ans,b);
            if(ans==0)
                break;
        }
        if(ans!=INT_MAX)
            return ans;
        else
            return 0;
    }
};