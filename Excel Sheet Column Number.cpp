class Solution {
public:
    int titleToNumber(string columnTitle) {
        long long a = 0;
        for (int i = 0; i < columnTitle.length(); i++)
        {
            a += (columnTitle[i] - 'A' + 1) * pow(26, columnTitle.length() - i - 1);
        }
        return a;
    }
};
