//string manipulation
#include <iostream>
using namespace std;
bool isPalindrome(string str) {
    int left = 0, right = str.length() - 1;
    while (left < right) {
        while (left < right && !isalpha(str[left])) left++;  
        while (left < right && !isalpha(str[right])) right--; 
        if (tolower(str[left]) != tolower(str[right])) 
            return false;
        left++;
        right--;
    }
    return true;
}
void countFrequency(string str) {
    int freq[26] = {0}; 
    for (int i = 0; i < str.length(); i++) {
        if (isalpha(str[i])) {
            freq[tolower(str[i]) - 'a']++;
        }
    }
    cout << "Character Frequency:\n";
    for (int i = 0; i < 26; i++) {
        if (freq[i] > 0) {
            cout << char(i + 'a') << " : " << freq[i] << endl;
        }
    }
}
void replaceVowels(string &str) {
    string vowels = "aeiouAEIOU";
    for (int i = 0; i < str.length(); i++) {
        for (int j = 0; j < vowels.length(); j++) {
            if (str[i] == vowels[j]) {
                str[i] = '*';
                break;
            }
        }
    }
    cout << "String after replacing vowels: " << str << endl;
}
int main() {
    string str;
    cout << "Enter a string: ";
    getline(cin, str); 
    if (isPalindrome(str))
        cout << "The string is a palindrome." << endl;
    else
        cout << "The string is NOT a palindrome." << endl;
    countFrequency(str);
    replaceVowels(str);

    return 0;
}
