// week01-1.cpp
// Leetcode �ǲ߭p�e �j�����w �bhaystack ��� needle
// 28. Find the Index of the First Occurrence in a String
class Solution {
public:
    int strStr(string haystack, string needle) {
        // �n�ΰj��A��Ҧ��i�઺��m�A����L�@��
        // ex. sadbutsad �����L �n��sad
        // i:0 sad �� haystack �ūe��N�Ӧr��
        //     sad
        // i:1 sad
        //     adb
        // i:2 sad ...
        //     dbu
        int H = haystack.length(), N = needle.length();
        for(int i=0; i<=H-N;i++){ //i�չL�Ҧ���m
            if(haystack.substr(i,N) == needle)return i;
            // �qi�}�l�A�ťXN�Ӧr�����M�ۦP ��쵪�סI�I�I
        }
        return -1; //�S����쵪�סA�n�^��-1�N����
    }
};
