class Solution {
     void dfs(vector<vector<int>>& image, int sr, int sc, int newCol, int rows, int col, int source) {
        if(sr<0 || sr>=rows || sc<0 || sc>=col){return;}
        else if(image[sr][sc]!=source){return;}

        image[sr][sc] = newCol;
        dfs(image,sr-1,sc,newCol,rows,col,source);
        dfs(image,sr+1,sc,newCol,rows,col,source);
        dfs(image,sr,sc-1,newCol,rows,col,source);
        dfs(image,sr,sc+1,newCol,rows,col,source);
    }
public:

    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int newCol) {
        if(newCol==image[sr][sc]){return image;}
        
        int rows = image.size();
        int col = image[0].size();
        int source = image[sr][sc];
        dfs(image,sr,sc,newCol,rows,col,source);

        return image;
    }
};
