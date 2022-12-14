class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int count =0;
        int min = 1000;
        string newstr;
        for(int i=0; i<strs.size();i++){
                int len = strs[i].length();
                if(len<min){
                    min=len;
                    newstr=strs[i]; 
                }
        }
        for(int i=0; i<min;i++){
            for(int j=0; j<strs.size();j++){
                if(strs[j][i]!=newstr[i]){
                return newstr.substr(0,count);
                }
            }
            count++;
        }
        return newstr.substr(0,count);
    }
};