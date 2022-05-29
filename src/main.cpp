#include <iostream>
#include <string>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	string s;
	cin >> s;

	auto z = s[0];
	s[0] = s[2];
	s[2] = z;

	cout << s;

	return 0;
}