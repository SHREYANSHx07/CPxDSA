class Solution {
public:
    int longestSubsequence(string s, int k) {
        int n = s.size();
        int x = 0, y = 0;

        for (int i = 0; i < n; i++) {
            if (s[i] == '1') x++;
            else y++;
        }

        long long ans = y;
        long long ans1 = 0;
        long long z = 0;

        for (int i = n - 1; i >= 0; i--) {
            int bit = s[i] - '0';
            if (bit == 1) {
                if (z >= 63 || (1LL << z) > k) break;
                ans1 += (1LL << z);
            }
            z++;
            if (s[i] == '0') y--;
            else x--;
            if (ans1 <= k) {
                ans = max(ans, z + y);
            } else {
                break;
            }
        }
        return ans;
    }
};
