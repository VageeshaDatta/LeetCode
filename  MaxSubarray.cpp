class Solution {
public:
      int maxSubArray(vector<int>& nums) {

      //initialising 2 variables to keep track of current sum and Maximum sum

        int max_sum,cur_sum;


      //intially storing the first value as the current sum a  
        cur_sum = nums[0];
        max_sum = cur_sum;
       
       //Iterating through the given array 'nums' only once 
       // So, the time complexity here is linear(O(N))
        for(int i=1;i<nums.size();i++)
        {


           //calulating current sum in each step and finding the maximum between current value 
           //and current value + previous current sum
            cur_sum = max(nums[i] + cur_sum, nums[i]);  


           //finding maximum of current sum and previous maximum sum 
            max_sum = max(cur_sum, max_sum);
        }
        
        
        // returnthe maximum sum 
        return max_sum;
        
    }
};