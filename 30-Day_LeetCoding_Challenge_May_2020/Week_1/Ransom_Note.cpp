class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        int count=0;
        map<char,int> mag;
        for(char ch:magazine){
            mag[ch]++;
        }
        map<char,int> note;
        for(char c:ransomNote){
            note[c]++;
        } 
        map<char,int> :: iterator it;
        map<char,int> :: iterator itr;
        
    for (itr=mag.begin();itr!=mag.end();itr++){
        for(it=note.begin();it!=note.end();it++){
            if(itr->first==it->first && itr->second>=it->second){
                count++;
            }
        }
    }
        if(count==note.size())
            return true;
        else
            return false;     
    }
    
};