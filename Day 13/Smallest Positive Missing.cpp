    int missingNumber(int arr[], int n) 
    { 
        // Your code here
        vector<int> v(n+1);
        for(int i=0;i<n;i++){
            if(arr[i]>0 && arr[i]<=n) v[arr[i]]=1;
        }
        int k=1;
        while(k<=n){
            if(v[k]!=1) return k;
            k++;
        }
        return k;
    } 