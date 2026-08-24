class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        int n=heights.size();
        vector<int>pse(n);   // but will store smaller and equal index only
        vector<int>nse(n);   // same in this

        stack<int>st;
        // PSE ->
        for(int i=0;i<n;i++){
            while(!st.empty()&&heights[st.top()]>=heights[i]){ 
                st.pop();
            }
            if(st.empty()){
                pse[i]=-1;
            }else{
                pse[i]=st.top();
            }
            st.push(i);

        } 

        while(!st.empty()){
            st.pop();
        }

          // NSE ->
        for(int i=n-1;i>=0;i--){
            while(!st.empty()&&heights[st.top()]>=heights[i]){ 
                st.pop();
            }
            if(st.empty()){
                nse[i]=n;
            }else{
                nse[i]=st.top();
            }
            st.push(i);

        } 

        int width[n];
        for(int i=0;i<n;i++){
            width[i]=nse[i]-pse[i]-1;
        }   

        int maxi = 0;
    for (int i = 0; i < n; i++) {
        int area = heights[i] * width[i];
        maxi = max(maxi, area);
    }
return maxi;

        
    }
};