class Solution {
public:
    int minimumSum(int num) {
        string s = "";
        while (num > 0) {
            s += char('0' + num % 10);
            num /= 10;
        }
        sort(s.begin(), s.end());
        int first = ((s[0] - '0') * 10) + (s[2] - '0');
        int second = ((s[1] - '0') * 10) + (s[3] - '0');
        // cout << first << " " << second << "\n";
        return first + second;
    }
};
