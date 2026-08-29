class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval) {
        vector<vector<int>>ans;
        int newStart=newInterval[0];
        int newEnd=newInterval[1];

        int i=0;
        int n=intervals.size();
            // before overlap
            while(i<n && intervals[i][1]<newStart){        // interval ended before new interval start
            ans.push_back(intervals[i]);      
            i++;
            }

            // merge all overlaps 
            while(i<n && intervals[i][0]<=newEnd){         // interval that start or overlap before newEnd
            newStart=min(intervals[i][0],newStart);
            newEnd=max(intervals[i][1],newEnd);
            i++;
            }
            // push new interval
            ans.push_back({newStart,newEnd});

            //put remaining inside
            while(i<n){
                ans.push_back(intervals[i]);
                i++;
            }
            return ans;
        }
        
    
};