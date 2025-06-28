class Solution {
public:
    vector<int> maxSubsequence(vector<int>& v, int k) {
        vector<pair<int, int>> a;
        int n = v.size();
        for (int i = 0; i < n; i++) a.push_back({v[i], i});
        sort(a.begin(), a.end(), greater<>());
        vector<pair<int, int>> b;
        for (int i = 0; i < k; i++) b.push_back({a[i].second, a[i].first});
        sort(b.begin(), b.end());
        vector<int> res;
        for (auto& p : b) res.push_back(p.second);
        return res;
    }
};
