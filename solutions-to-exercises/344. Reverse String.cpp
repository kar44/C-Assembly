class Solution {
public:
    void reverseString(vector<char>& s) {
        int n = s.size() - 1;
        int l = 0;
        int r = n;
        while(l<r){
           swap(s[l],s[r]);
            l++;
            r--;
        }
    }
};
