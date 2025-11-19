// week11-1a.cpp 挑戰題 先用笨方法
// Leetcode 2154. Keep Multiplying Found Values by Two
// 每次乘兩倍, 把沒有出現的數字 return 出來
class Solution {
public:
    int findFinalValue(vector<int>& nums, int original) {
        while (1){ // 用while 迴圈 一直做
            int found = 0; // 一開始還沒找到
            for (int i=0; i<nums.size(); i++){
                if ( nums[i] == original) found = 1; // 找到了
            }
            if (found==0) break; // 失敗, 離開迴圈
            else original = original * 2; // 有找到, 繼續,乘2倍
        }
        return original;
    }
};
