/* https://leetcode.com/problems/majority-element/
Given an array nums of size n, return the majority element.

The majority element is the element that appears more than ⌊n / 2⌋ times. You may assume that the majority element always exists in the array. */

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        
        int count = 0;
        int element = 0;
        
        for(auto it : nums)
        {
            if(count == 0)
            {
                element = it;
            }
            
            if(it == element)
            {
                count++;
            }
            else
            {
                count--;
            }
        }
        return element;
    }
};
