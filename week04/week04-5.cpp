// week04-5.cpp
// LeetCode �ǲ߭p�e�ĤC�D 66. Plus One
// �q�k�����ݡB�˹L�Ӫ��B��
// 1, 9, 9
//       0 �]�����i��A�ҥH�����٬O+1
//    0    �]�����i��A�ҥH�����٬O+1
// 2       �S���i��A�������״N���F
// 1, 2, 3
//       4 �S���i��A�������״N���F
// 9, 9, 9
class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int N=digits.size();
        for(int i=N-1;i>=0;i--){
            if(digits[i]==9)digits[i]=0;
            else{
                digits[i]++;
                return digits;
            }
        }
        digits.insert(digits.begin(),1);
        return digits;
    }
};
