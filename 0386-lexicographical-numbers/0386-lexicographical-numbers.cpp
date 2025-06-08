class Solution {
public:
    vector<int> lexicalOrder(int n) {
        vector<int>ans;
        int ele=1;
        while(ans.size()<n){
            ans.push_back(ele);
            if(ele*10<=n){
                ele*=10;
            }
            else if(ele+1<=n and ele%10!=9){
                ele++;
            }
            else{
                while((ele/10)%10==9){
                    ele/=10;
                }
                ele=ele/10+1;
            }
        }
        return ans;
    }
};