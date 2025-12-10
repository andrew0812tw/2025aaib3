// week14-2.cpp
// 206. Reverse Linked List
class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        if(head==nullptr || head->next==nullptr) return head;

        ListNode* ans = reverseList(head->next);

        head->next->next = head;
        head->next = nullptr;
        return ans;
    }
};
