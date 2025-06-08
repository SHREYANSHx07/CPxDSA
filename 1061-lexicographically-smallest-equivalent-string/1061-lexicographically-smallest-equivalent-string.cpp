// class Solution {
// public:
//     string smallestEquivalentString(string s1, string s2, string b) {
//         map<char,char> m,m1;
//         for(int i=0;i<s1.size();i++) 
//         {
//             if(m.find(s1[i])!=m.end())
//             m[s1[i]]=min(m[s1[i]],s2[i]);
//             else
//             m[s1[i]]=s2[i];
//         }
//         string ans="";
//         for(int i=0;i<b.size();i++) 
//         {
//             char x='0';
//             if(m.find(b[i])!=m.end())
//             x=m[b[i]];
//             if(x=='0')
//             ans+=b[i];
//             else
//             {
//                 int x1=x-'a'+1;
//                 int y1=b[i]-'a'+1;
//                 if(x1<y1)
//                 ans+=x;
//                 else
//                 ans+=b[i];
//             }
//         }
//         return ans;
//     }
// };
class Solution {
public:
    vector<int> parent;
    int findparent(int u){
        if(u==parent[u]) return u;
        return parent[u]=findparent(parent[u]);
    }
    void merge(int u,int v){
        int U=findparent(u);
        int V=findparent(v);
        if(U>V){
            parent[U]=V;
        }
        else if(V>U){
            parent[V]=U;
        }
    }
    string smallestEquivalentString(string s1, string s2, string baseStr) {
        parent.resize(26);
        int n=s1.size();
        for(int i=0;i<26;i++) parent[i]=i;
        for(int i=0;i<n;i++){
            merge(s1[i]-'a',s2[i]-'a');
        }
        string ans;
        for(int i=0;i<baseStr.size();i++){
            int node=findparent(baseStr[i]-'a');
            ans.push_back(node+'a');
        }
        return ans;
    }
};