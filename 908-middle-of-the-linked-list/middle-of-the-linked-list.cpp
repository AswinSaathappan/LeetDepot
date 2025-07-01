class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        int count = 0;
        ListNode* temp = head;

        // Step 1: Count the number of nodes
        while (temp != NULL) {
            count++;
            temp = temp->next;
        }

        // Step 2: Go to middle node
        int middle = count / 2;
        temp = head;

        for (int i = 0; i < middle; i++) {
            temp = temp->next;
        }

        return temp; // This is the middle node
    }
};
