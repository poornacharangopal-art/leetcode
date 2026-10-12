class BusBooking {
public:
    int time = 0;
    int mini = 0;
    int n;

    vector<vector<int>> v;
    vector<vector<int>> t;

    BusBooking(int n) {
        this->n = n;
        v = vector<vector<int>>(n, vector<int>(4, 0));
        t = vector<vector<int>>(n, vector<int>(4, 0));
    }

    void toggle(string seat) {
        int r = stoi(seat.substr(1)) - 1;
        int c = seat[0] - 'A';

        if (v[r][c]) {
            time -= t[r][c];
            mini--;
            v[r][c] = 0;
            t[r][c] = 0;
            return;
        }

        int cost = 1;

        if (c == 0 && v[r][1] == 1) {
            cost = 3;
        } 
        else if (c == 3 && v[r][2] == 1) {
            cost = 3;
        }

        time += cost;
        t[r][c] = cost;
        v[r][c] = 1;
        mini++;
    }

    int getTotalTime() {
        return time;
    }

    int getMinTime() {
        return mini;
    }
};