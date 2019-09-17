#ifndef __SUBSQ_H__
#define __SUBSQ_H__

// Functions for identifying string subsequences
#include <string>
#include <iostream>
#include <vector>
#include <sstream>

using namespace std;

/* check_if_subsequence: Check if DS is a subsequence of S
* "A word is a subsequence of S if some number of characters, 
* possibly zero, can be deleted from S to form W, without
* reordering the remaining characters."
* S: the larger string
* DS: the possible substring
*/
int check_if_subsequence(string s, string ds);

vector<string> identify_subsequences(string s, vector<string> d);

string find_longest (vector<string> v);

// run tests
void run_tests();

#endif