class Solution {
public:
    bool checkOverlap(int radius, int xCenter, int yCenter, int x1, int y1, int x2, int y2) {
           if (xCenter > x1 && xCenter < x2) {

            if (yCenter > y1 && yCenter < y2)
                return true;

            if (yCenter >= y2) {
                int y = y2;
                int dis = (y - yCenter) * (y - yCenter);

                if (dis <= radius * radius)
                    return true;
            }

            if (yCenter <= y1) {
                int y = y1;
                int dis = (y - yCenter) * (y - yCenter);

                if (dis <= radius * radius)
                    return true;
            }
        }

        if (xCenter <= x1) {

            int x = x1;

            if (yCenter > y2) {
                int dy = yCenter - y2;
                int dx = xCenter - x;

                if (dx * dx + dy * dy <= radius * radius)
                    return true;
            }

            else if (yCenter < y1) {
                int dy = y1 - yCenter;
                int dx = xCenter - x;

                if (dx * dx + dy * dy <= radius * radius)
                    return true;
            }

            else {
                int dis = (x - xCenter) * (x - xCenter);

                if (dis <= radius * radius)
                    return true;
            }
        }

        if (xCenter >= x2) {

            int x = x2;

            if (yCenter > y2) {
                int dy = yCenter - y2;
                int dx = xCenter - x;

                if (dx * dx + dy * dy <= radius * radius)
                    return true;
            }

            else if (yCenter < y1) {
                int dy = y1 - yCenter;
                int dx = xCenter - x;

                if (dx * dx + dy * dy <= radius * radius)
                    return true;
            }

            else {
                int dis = (x - xCenter) * (x - xCenter);

                if (dis <= radius * radius)
                    return true;
            }
        }

        return false;
    }
};