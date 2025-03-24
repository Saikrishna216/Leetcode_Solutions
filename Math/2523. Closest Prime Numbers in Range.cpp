class Solution {
public:
    vector<int> closestPrimes(int left, int right) {
        vector<bool> isPrime(right + 1, true);
        isPrime[0] = isPrime[1] = false;
        for (int p = 2; p * p <= right; p++) { 
            if (isPrime[p]) {             
                for (int i = p * p; i <= right; i += p) { 
                    isPrime[i] = false;
                }
            }
        }
        vector<int> primes;
        for (int i = left; i <= right; i++) {
            if (isPrime[i]) {
                primes.push_back(i);
            }
        }
        if (primes.size() < 2) {
            return {-1, -1};
        }
        int minDiff = 1e9;
        vector<int> result = {-1, -1};
        for (int i = 1; i < primes.size(); i++) {
            int diff = primes[i] - primes[i - 1];
            if (diff < minDiff) {
                minDiff = diff;
                result = {primes[i - 1], primes[i]};
            }
        }
        return result;
    }
};
