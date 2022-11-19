#include <chrono>
#include <iostream>
#include <limits>
#include <sstream>
#include <string>
#include <algorithm>
class Solution {
   public:
    // 123

    int reverse(int x) {
        long long ans = 0;
        _verse(x, ans);
        if (x >= 0 && ans <= std::numeric_limits<int>::max()) {
            return ans;
        } else if (x < 0 && -ans >= std::numeric_limits<int>::min()) {
            return -ans;
        }

        return 0;
    }

    void _verse(long long x, long long& ans) {
        constexpr auto limit = std::numeric_limits<long long>::max();
        if (x < 0) {
            x = -x;
        }
        while (x != 0) {
            if (x == 0) {
                return;
            }

            ans *= 10;
            if (ans > limit - (x % 10)) {
                ans = 0;
                return;
            }

            ans += (x % 10);

            x /= 10;
        }
    }

    int badreverse(int x) {
        std::string s = std::to_string(x);
        std::reverse(s.begin(), s.end());
        try {
            return x >= 0 ? std::stoi(s) : -std::stoi(s);
        } catch (std::out_of_range& err) {
            return 0;
        }
    }
};

int main() {
    Solution s;
    using milli = std::chrono::milliseconds;
    auto start = std::chrono::high_resolution_clock::now();

    for (int i = 0; i < 100000000; i++) s.badreverse(rand());

    auto finish = std::chrono::high_resolution_clock::now();
    std::cout << "myFunction() took "
              << std::chrono::duration_cast<milli>(finish - start).count()
              << " milliseconds\n";
}