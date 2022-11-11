/*Given an array, rotate the array to the right by k steps, where k is non-negative.Example 1:Input: nums = [1,2,3,4,5,6,7], k = 3Output: [5,6,7,1,2,3,4]Explanation:rotate 1 steps to the right: [7,1,2,3,4,5,6]rotate 2 steps to the right: [6,7,1,2,3,4,5]rotate 3 steps to the right: [5,6,7,1,2,3,4] */class Solution {public:        void rev (vector<int> &num, int l, int h){        while(l<h){        swap(num[l], num[h]);            l++;            h--;        }    }        void rotate(vector<int>& nums, int k) {       int n = (int)nums.size();        k=k%n;       rev(nums, 0, n-k-1);       rev(nums,  n-k,n-1);        rev(nums, 0,n-1);       }};