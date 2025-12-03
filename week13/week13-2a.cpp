///week13-2.cpp 學習計畫 Linked list 第1題
// 21. Merge Two Sorted Lists
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        //ListNode* ans = ListNode(); // 錯誤的寫法 少了new
        ListNode* ans = new ListNode();  // 正確的寫法 要有個new 給指標
        ListNode* now = ans;  //現在再處理的位置, 是ans 的分身
        while(list1 != nullptr && list2 != nullptr) {
            if (list1->val <= list2->val) { //比大小 左邊小, 那就放左邊list1
                now->next = list1;  // 左邊小,放在答案裡
                list1 = list1->next;  // 用完了, 換下一筆
            } else { // 右邊小,要放右邊的list2
                now->next = list2;
                list2 = list2->next; // 用完了, 換下一筆
            }
            now = now->next;  // 分身 要處理下一筆
        }
        // 收尾啦!
        if (list1 != nullptr) now->next = list1; // 收尾啦!
        if (list2 != nullptr) now->next = list2; // 收尾啦!
        return ans->next;
    }
};
