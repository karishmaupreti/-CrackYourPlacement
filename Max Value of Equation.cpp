class Solution {
public:
    int findMaxValueOfEquation(vector<vector<int>>& points, int k) {
          deque<std::pair<int, int>> dq;
        int max_value = INT_MIN;

        for (const auto& point : points) {
            int xj = point[0], yj = point[1];

            while (!dq.empty() && xj - dq.front().second > k) {
                dq.pop_front();
            }

           
            if (!dq.empty()) {
                max_value = std::max(max_value, dq.front().first + yj + xj);
            }

            
            int current_value = yj - xj;
            while (!dq.empty() && dq.back().first <= current_value) {
                dq.pop_back();
            }

          
            dq.emplace_back(current_value, xj);
        }

        return max_value;
    }
};
