#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, x, y;
        cin >> n >> x >> y;
        
        int prices[n];
        int totalWithoutCoupon = 0;
        int totalWithCoupon = 0;
        
        for (int i = 0; i < n; i++) {
            cin >> prices[i];
            totalWithoutCoupon += prices[i];
            if (prices[i] > y) {
                totalWithCoupon += (prices[i] - y);
            }
            // If prices[i] <= y, the price becomes 0 with the coupon
        }
        
        totalWithCoupon += x; // Adding cost of the coupon
        
        if (totalWithCoupon < totalWithoutCoupon) {
            cout << "COUPON" << endl;
        } else {
            cout << "NO COUPON" << endl;
        }
    }
    return 0;
}
