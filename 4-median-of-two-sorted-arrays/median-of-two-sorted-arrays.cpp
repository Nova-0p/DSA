class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int i =0;
        int j=0;
        int n=nums1.size()+nums2.size();
        int count=0;
        double curr=0;
        double prev=0;

        if(nums1.size()==0){
           if(n%2==0){
            double ans= (nums2[n/2]+nums2[(n/2)-1])/2.0;
            return ans;
           }else{
            return nums2[n/2];
           }
           
        }

         if(nums2.size()==0){
           if(n%2==0){
            double ans= (nums1[n/2]+nums1[(n/2)-1])/2.0;
            return ans;
           }else{
            return nums1[n/2];
           }
           
        }

        while(i<nums1.size() && j<nums2.size()){
            if(nums1[i]<=nums2[j]){
                prev=curr;
                curr=nums1[i];
                i++;
                count++;
            }else{
                prev=curr;
                curr=nums2[j];
                j++;
                count++;
            }
            if(count==(n/2)+1){
                break;
            }
        }
        if(i==nums1.size()){
            while(j<nums2.size() && count < (n/2)+1){
                prev=curr;
                curr=nums2[j];
                j++;
                count++;
                if(count==(n/2)+1){
                break;
            }
            }
            }
            
            if(j==nums2.size()){
            while(i<nums1.size() &&count < (n/2)+1){
                prev=curr;
                curr=nums1[i];
                i++;
                count++;
                if(count==(n/2)+1){
                break;
            }
            }
            }

            if(n%2==0){
                return (prev+curr)/2.0;
            }
            return curr;


    }
};