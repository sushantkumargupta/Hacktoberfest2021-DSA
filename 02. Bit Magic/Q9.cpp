//https://leetcode.com/problems/missing-number/
class Solution {
public:
    int missingNumber(vector<int>& nums) {
       int n=nums.size();
        int x=nums[0],y=0;
        for(int i=0; i<n;i++){
       if(i>0)  x^=  nums[i]; 
            y^=i+1;
        }
       // y=y^n;
        return x^y;
    }
};
