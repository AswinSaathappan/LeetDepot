class Solution {
public:
    string makeLargestSpecial(string s) {
        vector<string> parts;
        int count = 0;
        int start = 0;

        for (int i = 0; i < s.size(); i++) {
            if (s[i] == '1')
                count++;
            else
                count--;

            // Found one complete special substring
            if (count == 0) {
                string inside = s.substr(start + 1, i - start - 1);

                // Make the inside part as large as possible
                inside = makeLargestSpecial(inside);

                // Add outer 1 and 0
                parts.push_back("1" + inside + "0");

                start = i + 1;
            }
        }

        // Sort strings in descending order
        sort(parts.rbegin(), parts.rend());

        string result = "";
        for (string part : parts) {
            result += part;
        }

        return result;
    }
};