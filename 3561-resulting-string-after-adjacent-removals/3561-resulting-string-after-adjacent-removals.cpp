class Solution {
public:
    string resultingString(string s) {
        // string s2=s;
        // while (true) {
        //     string s3 = "";
        //     int i = 0,x=1;
        //     while (i < s2.size()) {
        //         if (i < s2.size() - 1) 
        //         {
        //             char a = s2[i], b = s2[i + 1];
        //             if (((a == 'a' && b == 'z') || (a == 'z' && b == 'a') || abs(a - b) == 1) && x==1) {
        //                 i += 2; 
        //                 x=0;
        //                 continue;
        //             }
        //         }
        //         s3 += s2[i];
        //         i++;
        //     }
        //     if (s2.size() == s3.size()) break; 
        //     s2 = s3;
        // }
        // return s2;
        stack<char> st;
        for(auto i:s)
        {
            if(st.empty())
            {
                st.push(i);
                continue;
            }
            char x=st.top();
            if(abs(x-i)==1 || abs(x-i)==25) st.pop();
            else st.push(i);
        }
        string ans="";
        while(st.size())
        {
            ans+=st.top();
            st.pop();
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};
