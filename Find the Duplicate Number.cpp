    int findDuplicate(vector<int>& nums) {
        int slow = nums[nums[0]], fast = nums[slow];
        while(slow!=fast){
            slow = nums[slow];
            fast = nums[nums[fast]];
            cout<<slow<<" "<<fast;
        }
        slow = nums[0];
        cout<<slow<<" ";
        while(slow!=fast){
            slow = nums[slow];
            fast = nums[fast];
            cout<<slow<<" "<<fast;
        }
        return slow;
    }
