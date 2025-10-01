///week04-1.cpp
///複習 C++ 伸縮自如的陣列 vector<int> a
#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> a; /// 上週教過 伸縮自如的陣列 沒有初始化大小
    cout << "沒有初始化a的長度是" << a.size() << endl; /// 一開始 大小是0
    a.push_back(99);
    cout << "經過 .push_back() 後a的長度變" << a.size() << endl;

    vector<int> b(3); /// 伸縮自如的陣列，長度是3 裡面都是0
    cout << "b的長度是" << b.size() << endl;
    b.push_back(99); ///最後面再加一個99
    for(int i=0; i<b.size();i++) cout << b[i] << ' '; /// 0 0 0 99
    cout << "經過 .push_back(99) 後 b變長了" <<endl;

    vector<int> c(3, 88); ///伸縮自如的陣列 長度是3 裡面都放88
    for(int i=0; i<c.size();i++) cout << c[i] << ' '; /// 88 88 88
    cout << "初始化 (3, 88) 就會是三個88" <<endl;

    ///下面還有很多，換下一個作業，不要一次教太多
}
