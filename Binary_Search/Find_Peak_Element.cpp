class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int low=0;
        int high=nums.size();
        int answer=0;
        while(low<high){
            int mid=low+(high-low)/2;
            if(mid==0 || nums[mid]>nums[mid-1]){
                answer=mid;
                low=mid+1;
            }
            else
                high=mid;
        }
        return answer;
    }
};