// week15-4.cpp 學習計畫 Basic 羅馬數
// Leetcode 13. Roman to Integer 羅馬數字 變成 int
class Solution {
public:
    int Table(char c) { // 字母的對照表，很簡單
        if (c == 'I') return 1;    // 把所有的字母，都變數字
        if (c == 'V') return 5;
        if (c == 'X') return 10;
        if (c == 'L') return 50;
        if (c == 'C') return 100;
        if (c == 'D') return 500;
        if (c == 'M') return 1000;
        return 0;
    }

    int romanToInt(string s) {
        int ans = 0;
        int prev = 2000; // 一定會比任何一個大(偷吃步)

        for (int i = 0; i < s.length(); i++) {
            int now = Table(s[i]); // 現在的數值

            if (prev < now)
                ans = ans + now - prev - prev; // 羅馬數字規則，變成減法
            else
                ans = ans + now; // 正常數字，直接加

            prev = now; // 現在的數字，變成前一個
        }
        return ans;
    }
};
