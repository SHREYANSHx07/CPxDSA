// class Solution {
// public:
//     vector<int> smallestSubarrays(vector<int>& v) {
//         int x=v[0],n=v.size();
//         if (n==1) return {1};
//         for(int i=0;i<n;i++) x|=v[i];
//         vector<int> ans;
//         for(int i=0;i<n;i++)
//         {
//             int y=0,y1=0,z=0,z1=0;;
//             for(int j=i;j<n;j++)
//             {
//                 y|=v[j];
//                 z++;
//                 if(y>y1)
//                 {
//                 z1=max(z1,z);
//                 y1=y;
//                 }
//                 if(y==x) break;
//             }
//             z1=max(z1,1);

//             ans.push_back(z1);
//         }
//         //cout<<x<<" "<<x1;
//         return ans;
        
//     }
// };


class Solution {
public:
    vector<int> smallestSubarrays(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans(n);
        vector<int> lastSeen(32, -1);

        for (int i = n - 1; i >= 0; --i) {
            for (int b = 0; b < 32; ++b) {
                if ((nums[i] >> b) & 1) {
                    lastSeen[b] = i;
                }
            }

            int farthest = i;
            for (int b = 0; b < 32; ++b) {
                if (lastSeen[b] != -1) {
                    farthest = max(farthest, lastSeen[b]);
                }
            }

            ans[i] = farthest - i + 1;
        }

        return ans;
    }
};
