#include <algorithm>
#include <iostream>
using namespace std;

static void testcase() {
	unsigned N;
	std::cin >> N;
	int one = 0;
	int zero = 0;
	while(N--) {
		unsigned temp;
		std::cin >> temp;
		one += (temp == 1);
		zero += (temp == 0);
	}
	std::cout << (min(one, zero) + max(0, one - zero) / 3) << '\n';
}

int main() {
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);

	unsigned T;
	std::cin >> T;

	while(T--)
		testcase();
    return 0;
}