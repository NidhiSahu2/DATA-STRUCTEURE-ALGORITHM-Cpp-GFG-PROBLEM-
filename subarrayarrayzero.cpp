bool subArrayExists(int arr[], int n)
    {
        unordered_set<int>h;
       int pre_sum =0;
        for(int i=0;i<n;i++){ 
            pre_sum += arr[i]; 
            if(h.find(pre_sum) != h.end())
            return true;
            if(pre_sum == 0)
            return true;
            h.insert(pre_sum);
        }
        return false;
        
    }
