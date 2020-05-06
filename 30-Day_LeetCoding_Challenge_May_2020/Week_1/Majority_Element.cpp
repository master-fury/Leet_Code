class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int,int> mp;
        for(int x:nums){
            mp[x]++;
        }
        int majority=nums.size()/2;
        for(auto i:mp){
            if(i.second>majority)
                return i.first;
        }
        return 0;
    }
};