/// week03-1.cpp
/// C++ �}�C vector<int>
#include <iostream> /// cin cout �n�Ϊ�
#include <vector> /// ���Ѫ��D�D �}�C vector
using namespace std; ///���n�ѤF�ϥΩR�W�Ŷ� std
int main()
{
    cout << "�п�J 4 �ӼƦr: ";
    vector<int> a; /// ���Y�ۦp���}�C
    int now;
    for(int i=0; i<4; i++){
        cin >> now; /// �{�b��J�@�ӼƦr
        a.push_back(now); ///���� a ���̫᭱
    }
    for(int i=0;i<a.size();i++){ ///�̷Ӱ}�C���j�p.size()�ӦL
        cout << a[i] << ' '; ///�Ʀr�᭱�A���Ů�
    }
    cout << "�{�b�{���X�̡A�S���J�F99 88 ��ӼƦr�A���G�O?\n";
    a.push_back(99); ///���� a ���̫᭱
    a.push_back(88); ///���� a ���̫᭱
    for(int i=0;i<a.size();i++){ ///�̷Ӱ}�C���j�p.size()�ӦL
        cout << a[i] << ' '; ///�Ʀr�᭱�A���Ů�
    }
}
