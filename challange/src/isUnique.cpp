#include <iostream>
#include <string>
#include <vector>
using namespace std;

//Brute Force
bool bfUniqueCharacter(string str) {
	int length = str.length();
	for(int i = 0; i < length-1; i++) {
		for(int j = i+1; j< length; j++) {
			if(str[i] == str[j])
				return false;
		}
	}
	return true;
}

bool isUnique(string str) {
	// based on ASCII value, if the it is greater than 128
	// There is automatically a repeated character
	if(str.size() > 128)
		return false;

	// create an array of boolean value of 128
	// 256 if you are taking Unicode into account
    vector<bool> chars(128);
    for (unsigned int i = 0; i < str.length(); i++) {
        if (chars[str[i]]) //
            return false;

        chars[str[i]] = true;
    }
    return true;
}

int main() {
	string test1 = "Hello";
	string test2 = "abc";

	cout<<"Test1:"<<isUnique(test1)<<endl;
	cout<<"Test2:"<<isUnique(test2)<<endl;

	cout<<"bfTest1:"<<bfUniqueCharacter(test1)<<endl;
	cout<<"bfTest2:"<<bfUniqueCharacter(test2)<<endl;

	return 0;
}
