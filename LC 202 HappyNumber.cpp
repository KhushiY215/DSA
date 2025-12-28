//made err in recognizing set usage and  while (n != 1 && !seen.count(n)) the while condition to stop unnecessary traversals
class Solution {
public:
    bool isHappy(int n) {
        unordered_set<int> seen;

        while (n != 1 && !seen.count(n)) {
            seen.insert(n);
            int s = 0;

            while (n > 0) {
                int r = n % 10;
                s += r * r;
                n /= 10;
            }

            n = s;
        }

        return n == 1;
    }
};
