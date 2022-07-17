class Solution {
public:
    int thirdMax(vector<int>& nums) {
        if(nums.size()==1)
            return nums[0];
        
        if(nums.size()==2)
            return max(nums[0],nums[1]);
        
        int max_e = INT_MIN , prev_max = INT_MIN , third_min = INT_MIN;
        
        for(int i = 0 ; i < nums.size() ;i++)
        {
            if(max_e < nums[i]){
                prev_max = max_e;
                max_e = nums[i];
            }
            
            if(prev_max < nums[i] and nums[i] != max_e )
            {   
                third_min = prev_max;
                prev_max = nums[i];
            }
            
        }
        int cnt = 0, maxcnt = 0;
        for(int i = 0 ; i < nums.size() ;i++)
        {
            if(nums[i] > third_min and nums[i] < prev_max)
                third_min = nums[i];
            
            if(nums[i]==prev_max){
                cnt++; 
            }
            
            if(nums[i]==max_e){
                maxcnt++; 
            }
        }
        //cout << maxcnt << " " << cnt;
        if(cnt == nums.size() - 1 or maxcnt == nums.size() - 1 or maxcnt == nums.size() or prev_max == INT_MIN )
            return max_e;
        
        return third_min;
    }
};
// [1,2,3]
// [3,2,1]
// [1,2,4,3]