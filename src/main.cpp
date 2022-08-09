#include <iostream>
#include <vector>
#include <string>

using namespace std;

using vs = vector<string>;

int main() {
	ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	auto n = int{};
	auto m = int{};
	cin >> n >> m;

	auto img1 = vs(n);
	for (auto i = 0; i < n; ++i) {
		auto s = string{};
		cin >> s;

		for (auto j = 0; j < m; ++j) {
			if ('W' == s[j]) {
				s[j] = 'B';
			}
			else if ('B' == s[j]) {
				s[j] = 'W';
			}
		}

		img1[i] = s;
	}

	auto ans = int{ 0 };
	for (auto i = 0; i < n; ++i) {
		auto s = string{};
		cin >> s;

		for (auto j = 0; j < m; ++j) {
			if (s[j] != img1[i][j]) {
				++ans;
			}
		}
	}

	cout << ans;

	return 0;
}