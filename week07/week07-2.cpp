/// week07-2.cpp
/// 657. Robot Return to Origin ���������H����
class Solution {
public:
    bool judgeCircle(string moves) {
        int x = 0, y = 0; // �@�}�l����m,�b (0,0)
        // for (int i=0; i<moves.length();i++){ //�ǲ�for�j��
        //      char c = move[i];
        for (char c : moves){ // C++ �i���j��
            if (c=='U'){
                y++;
            }   else if (c=='D'){
                y--;
            }   else if (c=='L'){
                x--;
            }   else if (c=='R'){
                x++;
            }
        } //���}�j���
        if (x==0 && y==0) return true;
        else return false;
    }
};
