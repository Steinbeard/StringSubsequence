// Functions and tests for identifying string subsequences

#include "subsq.h"

using namespace std;

int check_if_subsequence(string s, string ds) {
	cout << "Is " << ds << " a subsequence of " << s << "?\n";
	int s_index = 0;
	for (int i = 0; i < ds.length(); i++) {
		size_t found = s.find(ds[i], s_index);
		if (found == string::npos) {
			return 0;
		}
		s_index = static_cast<int>(found);
	}
	return 1;
}


vector<string> identify_subsequences(string s, vector<string> d) {
	vector<string> subsqs;
	for (string ds : d) { // C++11 feature
		if (check_if_subsequence(s, ds)) {
			subsqs.push_back(ds);
			cout << ds << " is a subsequence of " << s << endl;
		}
	}
	return subsqs;
}

string find_longest (vector<string> v) {
	int longest_length = 0;
	string longest_string = "";
	for (string s : v) { // C++11 feature
		if (s.length() > longest_length) {
			longest_length = s.length();
			longest_string = s;
		}
	}
	return longest_string;
}

/***** TESTS *****/

void _check_if_subsequence_tests() {
	int passed = 0;
	int total = 7;
	if (check_if_subsequence("hello", "")) {
		cout << "1\n";
		passed++;
	}
	if (check_if_subsequence("hello", "h")) {
		cout << "2\n";
		passed++;
	}
	if (check_if_subsequence("hello", "l")) {
		cout << "3\n";
		passed++;
	}
	if (check_if_subsequence("hello", "ll")) {
		cout << "4\n";
		passed++;
	}
	if (!check_if_subsequence("hello", "le")) {
		cout << "5\n";
		passed++;
	}
	if (!check_if_subsequence("hello", "olleh")) {
		cout << "6\n";
		passed++;
	}
	if (!check_if_subsequence("hello", "le")) {
		cout << "7\n";
		passed++;
	}
	cout << "Check_if_subsequence(): ";
	cout << "Passed " << passed << " tests out of " << total << ".\n";
}

// Public function for tests
void run_tests() {
	_check_if_subsequence_tests();
}
