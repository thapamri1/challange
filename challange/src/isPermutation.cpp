#include <iostream>
#include <string>
#include <vector>
#include <bits/stdc++.h>
using namespace std;

//When the length is same


//brute force approach
// sort() method takes, O(n log n)
bool isPermutation(string s1, string s2) {
	sort(s1.begin(), s1.end());
	sort(s2.begin(), s2.end());

	if(s1.length() == s2.length()) {
		return true;
	}
	return false;
}

// Using a count Map
//
bool isPermutation_map(string s1, string s2) {
	map<char, int> countMap1;
	map<char, int> countMap2;
	if(s1.length() != s2.length())
		return false;
	for(int i = 0; i < s1.length(); i++) {
		countMap1[s1[i]]++;
		countMap2[s2[i]]++;
	}

	for(int i = 0; i<s1.length(); i++){
		if(countMap1[s1[i]] == countMap2[s2[i]])
			return true;
	}
	return false;


}

//int main() {
//	string string1 = "abcd";
//	string string2 = "bacdd";
//
//	cout<<isPermutation_map(string1, string2)<<endl;
//	cout<<isPermutation(string1, string2);
//
//}
