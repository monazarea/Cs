class Solution {
public:
    int maxDepth(string s) {
        int c=0,ans=0;
        for(int i=0;i<s.size();i++){
            ans=max(ans,c);
            if(s[i]=='('){
                c++;
            }
            else if(s[i]==')')
                c--;
        }
        return ans;
    }
};