class Solution {
public:
    string convertToTitle(int columnNumber) {
        string a = "";
        while (columnNumber)
        {
            columnNumber--;
            a += 'A' + (columnNumber % 26);
            columnNumber /= 26;
        }
        reverse(a.begin(), a.end());
        return a;
    }
};
