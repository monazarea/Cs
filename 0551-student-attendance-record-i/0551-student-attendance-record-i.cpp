class Solution {
public:
    
bool checkRecord(string s) {
    int cnt=0;
    int bnt=0;
   
    for(int i=0;i<s.length();i++){
        if(s[i]=='A'){
            cnt++;
        }
        if(s[i]=='L'){
            bnt++;
        }
        else{
            bnt=0;
        }
        if(cnt>=2||bnt>2){
            return false;
        }
        
   
     }
     return true;
}
};