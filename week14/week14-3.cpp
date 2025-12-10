// week14-3.cpp 學習計畫
// 206. Reverse Linked List
class Solution {
public:
    ListNode* reverseList(ListNode* head) {
    vector<int> a;
    while (head != nullptr){
        a.push_back(head->val);
        head = head-> next;
    }

    ListNode* ans = new ListNode(999);
    ListNode* now = ans;
    for(int i = (int)a.size() - 1; i >= 0; i--){
        now ->next = new ListNode(a[i]);
        now = now->next;
    }

    return ans->next; // <- 改這行:回傳真正的第一個 node
    }
};
