// class Solution {
// public:
//     int sumOddLengthSubarrays(vector<int>& arr) {
//         vector<int>v(arr.size()+1);
//         v[0]=0;
//         for(int i=0;i<arr.size();i++){
//             v[i+1]=arr[i]+v[i];
//         }
//         int sum=0;
//     for(int i=1;i<v.size();i++){
//         for(int j=i;j<v.size();j+=2){
//             sum+=(v[j]-v[i-1]);
//         }
//     }
//     return sum;
//     }
// };
class Solution {
public:
    int sumOddLengthSubarrays(vector<int>& arr) {
        int n = int(arr.size()), answer = 0;
        
        for (int left = 0; left < n; ++left) {
            for (int right = left; right < n; ++right) {
                if ((right - left + 1) % 2 == 1) {
                    int currentSum = 0;
                    for (int index = left; index < right + 1; ++index) {
                        currentSum += arr[index];    
                    }
                    answer += currentSum;
                }
            }
        }
        return answer;
    }
};