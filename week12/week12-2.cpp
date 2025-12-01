// week12-2.cpp
// 860. Lemonade Change
class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        int d5 = 0, d10 = 0, d20 = 0;   /// 手上錢多少錢
        for (int bill : bills) {        /// C++進階迴圈
            if (bill == 5) d5++;        /// 拿到5元，開心收下
            else if (bill == 10) {
                if (d5 > 0) {           /// 還有5元可以找零，太好了
                    d10++;              /// 拿到10元
                    d5--;               /// 還客人5元
                } else return false;
            } else if (bill == 20) {
                if ((d5 > 0) && (d10 > 0)) {
                    d20++;
                    d10--;
                    d5--;
                } else if (d5 >= 3) {
                    d20++;
                    d5 -= 3;
                } else return false;
            }
        }

        return true;                    /// 成功找完零錢
    }
};
