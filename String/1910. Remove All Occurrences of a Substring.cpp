class Solution {
public:
    string removeOccurrences(string s, string part) {
        int n = part.size();
        vector<int> lps(n, 0);
        
        int i = 0, j = 1;
        while (j < n) {
            if (part[i] == part[j]) {
                lps[j] = ++i;
                j++;
            } else {
                if (i > 0) i = lps[i - 1];
                else j++;
            }
        }
        
        int m = s.size(), x = 0, y = 0;
        while (x < m) {
            if (s[x] == part[y]) {
                x++, y++;
            }
            if (y == n) {
                s = s.substr(0, x - n) + s.substr(x);
                m = s.size();
                x = max(0, x - 2 * n);
                y = 0;
            }
            if (s[x] != part[y]) {
                if (y == 0) x++;
                else y = lps[y - 1];
            }
        }
        
        return s;
    }
};
