#include <stdio.h> 

int main() {
	// Read the number of test cases.
	int T;
	cin >> T;
	while (T--) {
		// Read the input a, b
		int a, b;
		cin >> a >> b;

		// Compute the ans.
		int ans = a + b;
		cout << ans << endl;
	}

	return 0;
}
