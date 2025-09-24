// week03-5.cpp
// Leetcode 學習計畫 Arithmetic Progression From Sequence
// 把數字小排到大是不是相鄰都差一樣的數字
class Solution {
public:
    bool canMakeArithmeticProgression(vector<int>& arr) {
        sort(arr.begin(),arr.end()); //把陣列小排大排好

            int d = arr[1] - arr[0]; //兩數差 d
            for(int i=1; i<arr.size();i++){ //迴圈從1開始,因為要找前一項
                if(arr[i] - arr[i-1] !=d) return false;
            } //如果後項-前項不是d的話,就失敗
            return true;
        }
};
