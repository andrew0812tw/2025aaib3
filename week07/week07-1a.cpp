/// week07-1a.cpp �G�X�@
/// Input: 1-9 ���Ʀr Output:¶��骺���
/// ex. Input 3
/// 3 3 3 3 3
/// 3 2 2 2 3
/// 3 2 1 2 3
/// 3 2 2 2 3
/// 3 3 3 3 3 �@���h��
#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n; /// Step01: Input

    for(int i=1; i<2*n; i++){ /// Step03: for�j��A�Ӽh
        for(int j=1; j<2*n; j++) { ///�ĴX��
            if(j>1) cout << " "; /// Step05: �����Y+���[+���[+���[+���[
            cout << n;
        }
        cout << "�{�b�O��i��, i:" << i; ///Step04: �Ӽh�N�[(�N�|�)
        cout << endl; /// Step02: Output, ����
    }
}
