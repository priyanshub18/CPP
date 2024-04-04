lass Solution {
public:
    int search(vector<int>& nums, int t) {

          int ans=0,l=0,r=nums.size()-1,mid=0;
          int n=nums.size()-1;
    
    
        while(l<=r){
            mid=(l+r)/2;
            if(t==nums[mid]){return mid;}
             if(nums[mid]>nums[n]){
                 if(t>nums[mid]||t<nums[0]){
                     l=mid+1;
                 }else{
                     r=mid-1;
                 }
             }else{
                 if(t<nums[mid]||t>nums[n]){
                     r=mid-1;
                 }else{
                     l=mid+1;
                 }
             }
        }
        
        return -1;
    }
};