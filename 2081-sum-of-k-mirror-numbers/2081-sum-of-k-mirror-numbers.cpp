class Solution {
public:
    string to_base(long long n, int base) {
        if (n == 0) return "0";
        string digits = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ";
        string res;
        while (n > 0) {
            res = digits[n % base] + res;
            n /= base;
        }
        return res;
    }

    bool is_palindrome(const string& s) {
        int l = 0, r = s.size() - 1;
        while (l < r) {
            if (s[l++] != s[r--]) return false;
        }
        return true;
    }

    // Generate palindromes by constructing half and mirroring
    vector<long long> generate_palindromes(int len) {
        vector<long long> res;
        int start = pow(10, (len - 1) / 2);
        int end = pow(10, (len + 1) / 2);
        for (int i = start; i < end; ++i) {
            string half = to_string(i);
            string full = half;
            if (len % 2) half.pop_back();  // Remove center for odd length
            reverse(half.begin(), half.end());
            full += half;
            res.push_back(stoll(full));
        }
        return res;
    }

    long long kMirror(int k, int n) {
        long long ans = 0;
        int len = 1;
        while (n > 0) {
            vector<long long> palindromes = generate_palindromes(len);
            for (long long x : palindromes) {
                string base_k = to_base(x, k);
                if (is_palindrome(base_k)) {
                    ans += x;
                    if (--n == 0) return ans;
                }
            }
            len++;
        }
        return ans;
    }
};
