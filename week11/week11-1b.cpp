// week11-1b.cpp 挑戰題 聰明的方法
// Leetcode 2154. Keep Multiplying Found Values by Two
// 每次乘兩倍, 把沒有出現的數字 return 出來
class Solution {
public:
    int findFinalValue(vector<int>& nums, int original) {
        set<int> numsSet; // HashSet 可以快速找到有沒有這個數
        for (int num : nums) numsSet.insert(num); // C++的進階迴圈
        // 請問 original 有沒有在 numsSet 裡,有的話,繼續一直做
        while (numsSet.find(original) != numsSet.end() ){ // 沒有找到
            original = original * 2; // 有找到, 繼續,乘2倍
        }
        return original;
    }
};
