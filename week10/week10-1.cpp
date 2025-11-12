// week10-1.cpp 學習計畫
// Leetcode 1572. Matrix Diagonal Sum
class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int ans = 0; //對角線加起來的總合
        int N = mat.size();
        for(int i=0; i<N; i++){
            for(int j=0; j<N; j++){
                if(i==j || i+j==N-1) ans += mat[i][j];
            }
        }
        return ans;
    }
};
