    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        int n = nums2.size();
        vector<int> nge(10001,-1);
        stack<int> st;
        for(int i=0;i<n;++i){
            while(!st.empty() && nums2[st.top()]<nums2[i]){
                nge[nums2[st.top()]]=nums2[i];
                st.pop();
            }
            st.push(i);
        }
        n=nums1.size();
        vector<int> ans(n);
        for(int i=0;i<n;++i){
            ans[i]=nge[nums1[i]];
        }
        return ans;
    }