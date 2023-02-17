class Solution {
public:
    vector<int> selfDividingNumbers(int left, int right) {
        vector<int>v;
        for(int i=left;i<=right;i++){
            string s=to_string(i);
            int f=1;
            for(int j=0;j<s.length();j++){
                if(s[j]=='0'){
                    f=0;
                        break;
                }
                   // break;
                if(i%(s[j]-48)!=0){
                    f=0;
                    break;
                }
            }
            if(f==1)
                v.push_back(i);
            
        }
        return v;
    }
};