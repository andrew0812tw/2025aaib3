// week04-5.cpp
// LeetCode 學習計畫第七題 66. Plus One
// 從右往左看、倒過來的運算
// 1, 9, 9
//       0 因為有進位，所以左邊還是+1
//    0    因為有進位，所以左邊還是+1
// 2       沒有進位，直接答案就找到了
// 1, 2, 3
//       4 沒有進位，直接答案就找到了
// 9, 9, 9
class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int N=digits.size();
        for(int i=N-1;i>=0;i--){
            if(digits[i]==9)digits[i]=0;
            else{
                digits[i]++;
                return digits;
            }
        }
        digits.insert(digits.begin(),1);
        return digits;
    }
};
