class FindSumPairs {
private:
    vector<int> num1, num2;
    unordered_map<int, int> freq;  

public:
    FindSumPairs(vector<int>& nums1, vector<int>& nums2) {
        num1 = nums1;
        num2 = nums2;
        for (int a : num2) freq[a]++;
    }

    void add(int index, int val) {
        int old_val = num2[index];
        freq[old_val]--;
        num2[index] += val;
        freq[num2[index]]++;
    }

    int count(int tot) {
        int pairs = 0;
        for (int a : num1) {
            pairs += freq[tot - a];
        }
        return pairs;
    }
};
