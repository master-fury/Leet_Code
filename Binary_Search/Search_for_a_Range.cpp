class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        //std::vector<int>::iterator it1,it2;
        vector<int>v;
        auto it1=std::lower_bound(nums.begin(),nums.end(),target);
        auto it2=std::upper_bound(nums.begin(),nums.end(),target);
        if(it1!=nums.end() && *it1==target){
            v.push_back(it1 - nums.begin());
            v.push_back(it2 - nums.begin()-1);
            return v;
        }
        return {-1,-1};
    }
};