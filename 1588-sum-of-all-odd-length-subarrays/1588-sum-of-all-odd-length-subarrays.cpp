class Solution {
public:
    int sumOddLengthSubarrays(vector<int>& arr) {
        vector<int>v(arr.size()+1);
        v[0]=0;
        for(int i=0;i<arr.size();i++){
            v[i+1]=arr[i]+v[i];
        }
        int sum=0;
    for(int i=1;i<v.size();i++){
        for(int j=i;j<v.size();j+=2){
            sum+=(v[j]-v[i-1]);
        }
    }
    return sum;
    }
};
