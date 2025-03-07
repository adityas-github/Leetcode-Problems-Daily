class Solution {
public:
    // Function to generate a sieve of primes up to 'n'
    vector<bool> SieveOfEratosthenes(int n) {
        vector<bool> prime(n + 1, true);
        prime[0] = prime[1] = false; // 0 and 1 are not primes
        for (int p = 2; p * p <= n; p++) {
            if (prime[p]) {
                for (int i = p * p; i <= n; i += p)
                    prime[i] = false;
            }
        }
        return prime;
    }
    
    vector<int> closestPrimes(int left, int right) {
        // Get the sieve of primes up to the 'right' value
        vector<bool> temp = SieveOfEratosthenes(right);
        vector<int> primes;

        // Collect all prime numbers between 'left' and 'right'
        for (int i = left; i <= right; i++) {
            if (temp[i]) {
                primes.push_back(i);
            }
        }

        // If there are less than two primes, return {-1, -1}
        if (primes.size() < 2) {
            return {-1, -1};
        }

        // Now, find the closest pair of primes
        int ans1 = -1, ans2 = -1, minDiff = INT_MAX;
        for (int i = 1; i < primes.size(); i++) {
            int diff = primes[i] - primes[i - 1];
            if (diff < minDiff) {
                minDiff = diff;
                ans1 = primes[i - 1];
                ans2 = primes[i];
            }
        }

        return {ans1, ans2};
    }
};
