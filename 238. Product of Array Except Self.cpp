/*Given an integer array nums, return an array answer such that answer[i] is equal to the product of all the elements of nums except nums[i].

The product of any prefix or suffix of nums is guaranteed to fit in a 32-bit integer.

You must write an algorithm that runs in O(n) time and without using the division operation.

 

Example 1:

Input: nums = [1,2,3,4]
Output: [24,12,8,6]
Example 2:

Input: nums = [-1,1,0,-3,3]
Output: [0,0,9,0,0]
 

Constraints:

2 <= nums.length <= 105
-30 <= nums[i] <= 30
The product of any prefix or suffix of nums is guaranteed to fit in a 32-bit integer.*/

class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int l=nums.size();//length of the main array
        int left[l];
        int right[l];
        
        left[0]=1;//since there would be nothing to the left of the first element 
        right[l-1]=1;//since there would be nothing to the right of the last element
        //loop for filling up the left array

        for(int i=1;i<l;i++)
        {
            left[i]=nums[i-1]*left[i-1];
        }
        //loop to fill the right array
        for(int i=l-2;i>=0;i--)
        {
            right[i]=right[i+1]*nums[i+1];
        }

        //solution array
        for(int i=0;i<l;i++){
            nums[i]=left[i]*right[i];
        }
        return nums;
        
    }
};
