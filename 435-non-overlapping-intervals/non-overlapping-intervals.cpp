class Solution {
public:
    static bool compare(vector<int>&a,vector<int>&b){
        return a[1]<b[1];
    }
    int eraseOverlapIntervals(vector<vector<int>>& intervals) {

        sort(intervals.begin(),intervals.end(),compare);

        int remove=0;

        int last=intervals[0][1];

        for(int i=1;i<intervals.size();i++){
            if(intervals[i][0]>=last){    /// curr ka start does not overlap
                last=intervals[i][1];
            }else{
                remove++;
            }
        }
        return remove;

        
    }
};