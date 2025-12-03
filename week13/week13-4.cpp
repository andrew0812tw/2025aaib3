// week13-4.cpp 聖誕節倒數寫程式 Advent of Code 2025
// 第1題 --- Day 1: Secret Entrance --- 神秘的入口
// 我們利用 Leetcode 有個功能 My Playground 我的遊戲
// Leetcode 會幫我們#inlcude 全部的東西,所以前面什麼都不用寫
int main() {
    char c;
    int d;
    int now = 50;
    int ans = 0;
    while(cin >> c >> d){
        //if(c=='L') cout << "往左轉" << d << "格\n";
        //if(c=='R') cout << "往右轉" << d << "格\n";

        if(c=='L') now -= d;
        if(c=='R') now += d;

        now = (now % 100 + 100) % 100;
        if(now==0) ans++;
        //cout << "現在到達格子刻度" << now << "\n";
    }
    cout << "答案是:" << ans;
}
