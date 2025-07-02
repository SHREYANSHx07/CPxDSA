class Solution {
public:
    int minMaxDifference(int n) {
        string s = to_string(n);

        int y = -1;
        for (int i = 0; i < s.size(); i++) {
            if (s[i] != '9') {
                y = i;
                break;
            }
        }

        if (y == -1) return n;

        char x = s[y];
        string s1 = "";
        for (char c : s) {
            s1 += (c == x) ? '9' : c;
        }

        int z = -1;
        for (int i = 0; i < s.size(); i++) {
            if (s[i] != '0') {
                z = i;
                break;
            }
        }

        string s2 = "";
        if (z == -1) {
            s2 = s;  // All digits are '0', no replacement needed
        } else {
            x = s[z];
            for (char c : s) {
                s2 += (c == x) ? '0' : c;
            }
        }

        int ans = stoi(s1);
        int ans1 = stoi(s2);
        return ans - ans1;
    }
};
