class Solution {
public:
    int findComplement(int num) {
        if(num==0)
            return 1;
        int val = (int)log2(num) +1;
        
        int ans = (long long int)pow(2,val) -1 - num;
        
        return ans;
    }
};