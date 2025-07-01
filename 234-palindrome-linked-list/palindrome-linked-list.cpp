class Solution {
public:
    bool isPalindrome(ListNode* head) {
        vector<int> vals;

        // Step 1: Store all node values in a vector
        while (head != NULL) {
            vals.push_back(head->val);
            head = head->next;
        }

        // Step 2: Check if the vector is a palindrome
        int i = 0, j = vals.size() - 1;
        while (i < j) {
            if (vals[i] != vals[j])
                return false;
            i++;
            j--;
        }

        return true;
    }
};
