    void sortColors(vector<int>& nums) {
        int left =0, right=nums.size()-1;
        for(int i=0;i<=right;i++){
            if(nums[i]==0){
                swap(nums[i],nums[left]);
                left++;
            }
            else if(nums[i]==2){
                swap(nums[i],nums[right]);
                right--;
                i--;
            }
        }
    }
