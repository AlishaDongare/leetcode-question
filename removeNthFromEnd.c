struct ListNode* removeNthFromEnd(struct ListNode* head, int n) { 
    struct ListNode* slow = head;
    struct ListNode* fast = head;

    for (int i = 0; i < n; i++) {
        fast = fast->next;
    }

    if (fast == NULL) {
        head = head->next;
        return head;
    }

    while (fast->next != NULL) {
        slow = slow->next;
        fast = fast->next;
    }

    slow->next = slow->next->next;

    return head;
}



