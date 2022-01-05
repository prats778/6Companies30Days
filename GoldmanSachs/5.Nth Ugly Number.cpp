class Solution {
   public:
    // ull--->  unsigned long long
    ull getNthUglyNo(int n) {

        ull curr = 1;
        ull two = 0;
        ull three = 0;
        ull five = 0;

        vector<ull> store(n, 1);
        while (curr < n) {
            ull least = min(2 * store[two], min(3 * store[three], 5 * store[five]));
            if (least == 2 * store[two]) two++;
            if (least == 3 * store[three]) three++;
            if (least == 5 * store[five]) five++;
            store[curr] = least;
            curr++;
        }

        return store[n - 1];
    }
};