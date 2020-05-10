class Solution {
public:
    int findJudge(int N, vector<vector<int>>& trust) {
        if(N<=1){
            return 1;
        }
        else if(trust.size()==1){
            return trust[0][1];
        }
        else{
            long long int sum=(N*(N+1))/2; 
            unordered_map<int,int> mp;
            for(auto i : trust){
                mp[i[1]]+=i[0];
            }
            vector<int>v;
            for(auto i: trust){
                v.push_back(i[0]);
            }
            sort(v.begin(),v.end());
            for (auto i: mp){
                if(!(binary_search(v.begin(),v.end(),i.first))){
                if((i.first==sum-(i.second)))
                    return i.first;
            }
            }
        }
        return -1;
    }
};