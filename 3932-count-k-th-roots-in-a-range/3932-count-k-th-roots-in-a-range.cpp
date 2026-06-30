class Solution {
public:
    long long ipow(long long x, int k) {
        long long res = 1;
        while (k--) res *= x;
        return res;
    }

    int countKthRoots(int l, int r, int k) {
        int start = ceil(pow(l, 1.0 / k));
        int end   = floor(pow(r, 1.0 / k));

        // Correct start
        while (ipow(start, k) < l) start++;
        while (start > 0 && ipow(start - 1, k) >= l) start--;

        // Correct end
        while (ipow(end, k) > r) end--;
        while (ipow(end + 1, k) <= r) end++;

        return max(0, end - start + 1);
    }
};