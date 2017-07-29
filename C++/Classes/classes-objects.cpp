#include <numeric>
class Student {
    private:
        vector<int> scores;
    public:
        void input() {
            for(int i = 0; i < 5; ++i) {
                int t; cin >> t;
                scores.push_back(t);
            }
        }
        int calculateTotalScore() {
            return std::accumulate(scores.begin(), scores.end(), 0);
        }
};