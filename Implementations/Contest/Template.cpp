// compile : g++ -o PROB PROB.cpp -std=c++11 -Wall -O2
// options : -fsanitize=address -Wfatal-errors -Wl,--stack=256000000
#include <bits/stdc++.h>
using namespace std;
using lint = long long;
using pii = pair<int, int>;
inline int read() {
	int x = 0, f = 1; char ch = getchar();
	while (ch < '0' || ch > '9') if (ch == '-') f = -1, ch = getchar();
	while (ch >= '0' && ch <= '9') x = x * 10 + ch - '0', ch = getchar();
	return x * f;
}
auto seed = std::chrono::high_resolution_clock::now().time_since_epoch().count();
std::mt19937 mt(seed);
#define MN 100005
int main() {
	return 0;
}