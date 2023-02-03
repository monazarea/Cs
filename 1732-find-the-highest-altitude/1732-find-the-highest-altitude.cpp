class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int n=gain.size();
        vector<int>v(n+1);
        v[0]=0;
        int sum=0;
        for(int i=1;i<=n;i++){
            v[i]=gain[i-1]+v[i-1];
            sum=max(sum,v[i]);
        }
        return sum;
    }
};