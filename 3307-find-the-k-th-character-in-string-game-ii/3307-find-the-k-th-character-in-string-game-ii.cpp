// class Solution {
// public:
//     char kthCharacter(long long k, vector<int>& v) {
//         string s = "a";
//         if (k == 1) return 'a';

//         int n = v.size();
//         int z=-1;
//         for (int i = 0; i < n; i++) {
//             if ((long long)s.size() >= k) break;

//             if (v[i] == 0) {
//                 s += s;
//             } else {
//                 string s1 = "";
//                 for (char c : s) {
//                     char y1 = c + 1;
//                     if (y1 > 'z') y1 = 'a';
//                     s1 += y1;
//                 }
//                 s += s1;
//             }
//             if ((long long)s.size() * 2 >= k)
//             {
//                 z=v[i+1];
//             break;
//             }
//         }
//         int k1=k;
//         k1--;
//         if(k<=s.size())
//         return s[k1];
//         else
//         {
//             int z1=k%s.size();
//             if(z==0)
//             {
//                 if(z1==0) return s[s.size()-1];
//                 else return s[z1-1];
//             }
//             else
//             {
//                 if(z1==0)
//                 {
//                     if(s[s.size()-1]=='z') return 'a';
//                     else
//                     {
//                         char ans=s[s.size()-1];
//                         ans++;
//                         return ans;
//                     }
//                 }
//                 else
//                 {
//                     char ans= s[z1-1];
//                     ans++;
//                     return ans;
//                 }
//             }
//         }
//         return 'a';

//     }
// };
class Solution {
public:
    char kthCharacter(long long k, vector<int>& v) {
        vector<long long> lens;
        lens.push_back(1);
        for (int i = 0; i < v.size(); i++) {
            long long last = lens.back();
            if (last >= k) break;
            lens.push_back(last * 2);
        }

        int shiftCount = 0;
        for (int i = lens.size() - 2; i >= 0; i--) {
            long long half = lens[i];

            if (k > half) {
                k -= half;
                if (v[i] == 1) {
                    shiftCount++;
                }
            }
        }

        char ch = 'a' + shiftCount;
        if (ch > 'z') ch = (ch - 'a') % 26 + 'a';
        return ch;
    }
};

