class Solution {
public:
    int mostWordsFound(vector<string>& sntencees) {
       
        int ans=0;
        for(int i=0;i<sntencees.size();i++){ 
            int c=1;
            string s=sntencees[i];
            for(int j=0;j<s.length();j++){
               
                if(s[j]==' '){
                    c++;
                }
            }
                 ans=max(c,ans);    
        }
        return ans;
    }
                     
};