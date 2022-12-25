class Solution {
public:
    int mySqrt(int x) {
        int res = sqrt(x);
        return res;
    }
};

//2nd solution

class Solution {
public:
    int mySqrt(int x) {
        int low = 1;
        int high = x;
        int res = 0;

        while(low<=high){
            long long int mid = low + (high - low)/2;
            if(mid*mid<=x){
                res = mid;
                low = mid +1;
            }
            else 
            high = mid -1;
        }
        return res;
    }
}


