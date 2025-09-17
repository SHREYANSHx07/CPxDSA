class FoodRatings {
public:

    unordered_map<string,pair<string,int>> m;
    unordered_map<string , set<pair<int,string>>> m1;
    FoodRatings(vector<string>& f, vector<string>& c, vector<int>& r) 
    {
        for(int i=0;i<f.size();i++)
        {
            m[f[i]]={c[i],r[i]};
            m1[c[i]].insert({-r[i],f[i]});
        }
    }
    
    void changeRating(string f, int n) 
    {
        auto &x = m[f];
        string c = x.first;
        int y=x.second;
        m1[c].erase({-y,f});
        m1[c].insert({-n,f});
        x.second = n;
    }
    
    string highestRated(string c) 
    {
        return m1[c].begin()->second;
    }
};


/**
 * Your FoodRatings object will be instantiated and called as such:
 * FoodRatings* obj = new FoodRatings(foods, cuisines, ratings);
 * obj->changeRating(food,newRating);
 * string param_2 = obj->highestRated(cuisine);
 */