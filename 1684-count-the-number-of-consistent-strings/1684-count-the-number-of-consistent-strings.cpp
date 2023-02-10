class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        map<char,int>mp;
        int c=0;
        for(int i=0;i<allowed.size();i++){
            mp[allowed[i]]++;
        }
        for(int i=0;i<words.size();i++){
         for(int j=0;j<words[i].size();j++){
             string s=words[i];
             if(mp[s[j]]==0){
                 break;
             }
             if(j==(words[i].size())-1)
                 c++;
         }
        }
        return c;
    }
};