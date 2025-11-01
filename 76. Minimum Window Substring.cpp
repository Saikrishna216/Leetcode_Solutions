class Solution {
public:
    string minWindow(string s, string t) {
        int m = s.size(), n = t.size();
        if (m < n) return "";

        unordered_map<char, int> map;
        for (char c : t) map[c]++;

        int cnt = 0, i = 0, j = 0;
        int minlen = INT_MAX, start_idx = -1;

        while (j < m) {
            if (map[s[j]] > 0) cnt++;
            map[s[j]]--;

            while (cnt == n) {
                if (minlen > j - i + 1) {
                    minlen = j - i + 1;
                    start_idx = i;
                }

                map[s[i]]++;
                if (map[s[i]] > 0) cnt--;
                i++;
            }
            j++;
        }

        return (start_idx == -1) ? "" : s.substr(start_idx, minlen);
    }
};
