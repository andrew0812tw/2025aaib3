/// week02-2.cpp
#include <iostream>
#include <string>
using namespace std;
int main()
{
    cout <<"�п�J�Ʀr: ";
    string a,ans;p /// C++���r��
    cin >> a;///Ū�J�r��
    ///�˹L�Ӫ��j��
    for(int i=a.length()-1;i>=0;i--){
        ans +=a[i]; ///��r���˹L�ӡA��J����
    }
    cout << a << ans;
}
