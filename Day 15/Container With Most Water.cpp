    int maxArea(vector<int>& h) {
        int i=0,j=h.size()-1;
        int ans=0;
        while(i<j){
            if(h[i]<h[j]){
                ans=max(ans, (j-i)*h[i]);
                i++;
            }
            else{
                ans=max(ans, (j-i)*h[j]);
                j--;
            }
        }
        return ans;
    }