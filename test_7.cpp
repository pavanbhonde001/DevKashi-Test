#include <iostream>
#include <string>

using namespace std;

// Function to check if a string is a palindrome
bool isStringPalindrome(const string& str) {
    int left = 0;
    int right = str.length() - 1;

    while (left < right) {
        if (str[left] != str[right]) {
            return false; // Mismatch found, not a palindrome
        }
        left++;
        right--;
    }
    return true; // All characters matched
}

int main() {
    string inputStr;
    cout << "Enter a string: ";
    cin >> inputStr;

    if (isStringPalindrome(inputStr)) {
        cout << "\"" << inputStr << "\" is a palindrome." << endl;
    } else {
        cout << "\"" << inputStr << "\" is not a palindrome." << endl;
    }

    return 0;
}
