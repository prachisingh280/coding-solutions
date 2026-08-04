class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int n = nums.size();
    long long maxx = INT_MIN;
    long long pre = 1;
    long long suff = 1;
    
    for(int i=0; i<n; i++)
    {
        if(pre == 0)
        {
            pre = 1;
        }
        if(suff == 0)
        {
            suff = 1;
        }
        pre = pre * nums[i];
        suff = suff * nums[n-i-1];
        
        maxx = max(maxx,max(pre,suff));
    }
    
    return maxx;
    }
};