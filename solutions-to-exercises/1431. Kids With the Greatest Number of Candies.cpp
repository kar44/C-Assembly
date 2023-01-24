class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int max =  INT_MIN;
        int n = candies.size();
        vector<bool>res;

        for(int i = 0; i<n; i++){
        if(max<=candies[i])
           max = candies[i];    
        }
        for(int i = 0; i<n; i++){
            candies[i]=candies[i] + extraCandies;
        }
        for(int i = 0; i<n; i++){  
            if(max<=candies[i]){
                res.push_back(true);
                }
            else
                res.push_back(false);
        }
        return res;
    }

};
