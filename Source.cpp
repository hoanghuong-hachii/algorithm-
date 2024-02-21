#include <iostream>
#include <string>

using namespace std;

int countVietnameseChars(const string& input) {
    int count = 0;
    for (size_t i = 0; i < input.length(); ++i) {
        char currentChar = input[i];
        if (currentChar == 'a' || currentChar == 'e' || currentChar == 'o' || currentChar == 'w' || currentChar == 'd') {
            if (i < input.length() - 1) {
                char nextChar = input[i + 1];
                if ((currentChar == 'a' && nextChar == 'a') ||
                    (currentChar == 'a' && nextChar == 'w') ||
                    (currentChar == 'e' && nextChar == 'e') ||
                    (currentChar == 'o' && nextChar == 'o') ||
                    (currentChar == 'o' && nextChar == 'w') ||
                    (currentChar == 'w' && nextChar != 'w') ||
                    (currentChar == 'd' && nextChar == 'd')) {
                    ++count;
                    ++i; 
                }
            }
        }
    }
    return count;
}

int main() {
    string input;
    cin >> input;

    int numVietnameseChars = countVietnameseChars(input);
    cout << numVietnameseChars << endl;

    return 0;
}
