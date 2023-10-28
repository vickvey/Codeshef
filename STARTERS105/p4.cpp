#include <iostream>

void solve() {
    int t;
    std::cin >> t;

    while (t--) {
        int n;
        std::cin >> n;

        if (n == 1) {
            std::cout << "1 0\n";
            continue;
        }

        int x = 1;
        while (x <= n) {
            x <<= 1;
        }

        x -= 1;
        int y = x ^ n;

        std::cout << x << " " << y << "\n";
    }
}

int main() {
    solve(); // Call the solve function from main
    return 0;
}
