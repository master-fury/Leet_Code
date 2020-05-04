class Solution {
public:
    int numJewelsInStones(string J, string S) {
        int count =0;
        for (char ch:J){
            for (int i = 0; i < S.size(); i++){
            if (ch ==  S[i])
            ++ count; 
            }
        }
        return count;
    }
};