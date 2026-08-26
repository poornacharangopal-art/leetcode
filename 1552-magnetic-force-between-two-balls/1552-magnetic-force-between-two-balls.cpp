class Solution {
public:
 bool isPossible(vector<int>& arr, int n, int m, int minAllowed) {
        int currentPosition = arr[0];
        int balls = 1;

        for (int i = 1; i < n; i++) {
            if (arr[i] - currentPosition >= minAllowed) {
                balls++;
                currentPosition = arr[i];
            }

            if (balls == m) {
                return true;
            }
        }

        return false;
    }
    int maxDistance(vector<int>& position, int m) {
        sort(position.begin(), position.end());

        int n = position.size();
        int ans = -1;
        int start = 1;
        int end = position[n - 1] - position[0];

        while (start <= end) {
            int mid = start + (end - start) / 2;

            if (isPossible(position, n, m, mid)) {
                ans = mid;
                start = mid + 1;
            } else {
                end = mid - 1;
            }
        }

        return ans;
    }
};