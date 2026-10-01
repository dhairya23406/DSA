class Solution {
public:
    bool isRectangleCover(vector<vector<int>>& rectangles) {
        long long area = 0;

        int minX = INT_MAX, minY = INT_MAX;
        int maxX = INT_MIN, maxY = INT_MIN;

        set<pair<int,int>> corners;

        for (auto &r : rectangles) {
            int x1 = r[0], y1 = r[1];
            int x2 = r[2], y2 = r[3];

            // Total area
            area += (long long)(x2 - x1) * (y2 - y1);

            // Bounding rectangle
            minX = min(minX, x1);
            minY = min(minY, y1);
            maxX = max(maxX, x2);
            maxY = max(maxY, y2);

            // Toggle four corners
            vector<pair<int,int>> c = {
                {x1, y1},
                {x1, y2},
                {x2, y1},
                {x2, y2}
            };

            for (auto p : c) {
                if (corners.count(p))
                    corners.erase(p);
                else
                    corners.insert(p);
            }
        }

        // Area of bounding rectangle
        long long boundingArea =
            (long long)(maxX - minX) * (maxY - minY);

        // Must have exactly 4 remaining corners
        if (corners.size() != 4)
            return false;

        // Check that they are the four bounding corners
        if (!corners.count({minX, minY}) ||
            !corners.count({minX, maxY}) ||
            !corners.count({maxX, minY}) ||
            !corners.count({maxX, maxY}))
            return false;

        // No gaps or overlaps
        return area == boundingArea;
    }
};