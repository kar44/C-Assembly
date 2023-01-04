class Solution {
public:
    vector<int> runningSum(vector<int>& num) {
        int n = num.size();
        for(int i = 1; i<n; i++){
            int r = num[i] + num[i-1];
            num[i] = r;
        }
        return num;
    }
};
