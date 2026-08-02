/*Given an integer array nums, move all 0's to the end of it while maintaining the relative order of the non-zero elements.
Note that you must do this in-place without making a copy of the array.
 */



class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int size=nums.size();
        int length=size-1;
        for(int i=0;i<size-1;i++){
            for(int i=0;i<size-1;i++){
                    if(nums[i]==0){
                    swap(nums[i],nums[i+1]);
                }
            }
        }
        for(int i=0;i<length;i++){
            cout<<nums[i];
        }
        
    }
};