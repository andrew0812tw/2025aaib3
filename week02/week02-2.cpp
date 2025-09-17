/// week02-2.cpp
#include <iostream>
#include <string>
using namespace std;
int main()
{
    cout <<"請輸入數字: ";
    string a,ans;p /// C++的字串
    cin >> a;///讀入字串
    ///倒過來的迴圈
    for(int i=a.length()-1;i>=0;i--){
        ans +=a[i]; ///把字母倒過來，放入答案
    }
    cout << a << ans;
}
