/// week05-3c.cpp �T�X�@��Part1/Part2 Input/Output
/// Part3: Stringstream �_�r Part 4: �ϹL�� algorithm
/// CPE �o�����ĤG�D UVA Word SCramble ��r�ˤ�
#include <iostream>
#include <sstream> /// Part 3:��r��Ψ��_�r
#include <string>
#include <algorithm> /// Part 4: �ϹL�ӡA�n�Ψ�algorithm �t��k
using namespace std;
int main()
{
    string line; /// Part 1: Input
    while ( getline (cin, line) ){
    /// Ū�J�@�� �@��Ū�AŪ��Ctrl-z�~����
        stringstream ss(line); /// Part 3: ��r��Ψ��_�r
        string word; /// �Ψ��_�r�o
        ss >> word; /// Part 5: �ѨM�Ů���D�A�����Y���ΪŮ�
        reverse( word.begin(), word.end() );
        cout << word; /// Part 5: �ѨM�Ů���D�A�����Y���ΪŮ�
        while ( ss >> word ){  /// Part 3: ��r��Ψ��_�r
            reverse( word.begin(), word.end() ); /// Part 4:�ϹL��
            cout << " " << word;
        }
        cout << endl; ///���� Part 2: Output
        ///cout << line << endl; /// ���H�K�L�X��
    }
}


