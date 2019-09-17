/* Google Challenge 1:
* Find the longest subsequence of string S in set of strings D
* Developer: Daniel Steinberg
* 9/13/19
*/

#include <string>
#include <iostream>
#include <vector>
#include <sstream>
#include "subsq.h"

using namespace std;

int main(int argc, char **argv)
{
	string s;
	vector<string> d;
	if (argc <= 1) {
		// Get a word if none on command line
		cout << "Enter a word: ";
		cin >> s;
	}
	if (argc <= 2) {
		// Get a list of words if none on the command line
		string words_input;
		cout << "Enter a series of words: ";
		cin.ignore();
		getline(cin, words_input);
		istringstream ss(words_input);
		do {
			string word;
			ss >> word;
			d.push_back(word);
		} while(ss);
		cout << endl;
	} else if (argc > 2) {
		// Set word and list of words from command line args
		s = argv[1];
		cout << "The word you entered is " << s << endl;
		cout << "The series of words you entered are: {";
		for (int i = 2; i < argc; i++) {
			d.push_back(argv[i]);
			cout << argv[i] << ", ";
		}
		cout << "}\n";
	}

	vector<string> subsqs = identify_subsequences(s, d);
	string longest_subsq = find_longest(subsqs);

	if (longest_subsq != "") {
		cout << "The longest word given that is a subsequence of " << s;
		cout << " is " << longest_subsq << endl;
	} else {
		cout << "No given word was a subsequence of " << s << endl;
	}

	// Some tests
	//run_tests();

	return 0;
}

