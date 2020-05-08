class Solution {
public:
    bool checkStraightLine(vector<vector<int>>& coordinates) {
        int dist,newdist;
        if(coordinates.size()<=2)
            return true;
        else{
            int a=(coordinates[0][0]-coordinates[1][0]);
            if(a==0) dist=0;
            else{
            dist=(coordinates[0][1]-coordinates[1][1])/a;
            }
            int b=(coordinates[0][0]-coordinates[2][0]);
            if(b==0) newdist=0;
            else
            newdist=(coordinates[0][1]-coordinates[2][1])/b;
            int i=1;
            cout<<dist<<" "<<newdist<<"\n";
            while(dist==newdist && i<coordinates.size()-2){
                 a=(coordinates[i][0]-coordinates[i+1][0]);
                if(a==0) dist=0;
                else
                 dist=(coordinates[i][1]-coordinates[i+1][1])/a;
                b=(coordinates[i][0]-coordinates[i+2][0]);
                if(b==0) newdist=0;
                else
                newdist=(coordinates[i][1]-coordinates[i+2][1])/b;
                i++;
                cout<<dist<<" "<<newdist<<"\n";
            }
            int res=coordinates.size()-2;
            cout<<res<<"res"<<i;
            if(res==i) return true;  else return false;
        }
    }
};