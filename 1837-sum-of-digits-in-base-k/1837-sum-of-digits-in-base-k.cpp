class Solution {
public:
    int sumBase(int n, int k) {
        int dig=0,rem,i=0;
        while(n>0)
        {
            rem= (n%k);
            dig=dig + (rem*pow(10,i));
            n=n/k;
            i++;
        }
        // cout << dig;
        int sum=0,r;
        while(dig>0)
        {
            r=dig%10;
            sum+=r;
            dig=dig/10;
        }
        return sum;
        
    }
};