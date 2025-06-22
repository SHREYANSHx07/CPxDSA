class Solution {
public:
    bool checkPrimeFrequency(vector<int>& v) {
        unordered_map<int,int> m;
        for(auto i:v) m[i]++;
        int ans=0;
        for(auto i:m)
        {
            if(i.second==2 || i.second==3 || i.second==5 || i.second==7 || i.second==11 || i.second==13 || i.second==17 || i.second==19 || i.second==21 || i.second==23 || i.second==29 || i.second==31 || i.second==37 || i.second==41 || i.second==43 || i.second==47 || i.second==53 || i.second==59 || i.second==61 || i.second==67 || i.second==71 || i.second==73 || i.second==79 || i.second==83 || i.second==89 || i.second==97)  ans++;
        }
        cout<<ans;
        return ans;
    }
};