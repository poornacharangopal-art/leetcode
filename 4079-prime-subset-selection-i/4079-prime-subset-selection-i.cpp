class Solution {
public:
vector<int> sieve(int n) {
    vector<bool> isPrime(n + 1, true);

    isPrime[0] = isPrime[1] = false;

    for (int i = 2; i * i <= n; i++) {
        if (isPrime[i]) {
            for (int j = i * i; j <= n; j += i) {
                isPrime[j] = false;
            }
        }
    }

    vector<int> primes;

    for (int i = 2; i <= n; i++) {
        if (isPrime[i]) {
            primes.push_back(i);
        }
    }

    return primes;
}
    vector<int> maxPrimes(int n, int s) {
        vector<int>primes=sieve(n);
        vector<int>ans;
        int sum=0;
        int i=0;
        while(sum<=s&&i<primes.size()){
            sum+=primes[i];
            if(sum<=s){
                ans.push_back(primes[i]);
            }
            i++;
        }

        return ans;
    }
};