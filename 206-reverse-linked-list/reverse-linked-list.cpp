class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        vector<int> values;

        // Step 1: Store all values in an array
        ListNode* temp = head;
        while (temp != NULL) {
            values.push_back(temp->val);
            temp = temp->next;
        }

        // Step 2: Reverse the array
        reverse(values.begin(), values.end());

        // Step 3: Update the linked list with reversed values
        temp = head;
        int i = 0;
        while (temp != NULL) {
            temp->val = values[i++];
            temp = temp->next;
        }

        return head;
    }
};
