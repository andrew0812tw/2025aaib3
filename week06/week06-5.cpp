// week06-5.cpp
// 3350. Adjacent Increasing Subarrays Detection II
// 跟昨天的3349很像
// 3349用combo, 3350用兩個combo 左到右,右到左,累積多少
class Solution {
public:
    int maxIncreasingSubarrays(vector<int>& nums) {
        int N = nums.size(); //陣列大小
        vector<int> left(N, 1); //左到右的combo
        vector<int> right(N, 1); //右到左的combo
        for(int i=1; i<N; i++){ //左到右的combo逐一更新
            if( nums[i-1] < nums[i] ) left[i] = left[i-1] + 1;
        } //如果有連續,就更新、變更大
        for(int i=N-2; i>=0; i--){ //右到左的combo逐一更新
            if( nums[i] < nums[i+1] ) right[i] = right[i+1] + 1;
        }
        int ans = 0;
        for(int i=0; i<N-1;i++){
            int now = min(left[i], right[i+1]);
            if(now > ans) ans = now; // 有更大的k,就用來更新ans
        }
        return ans;
    }
};
