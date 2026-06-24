#include <iostream>
#include <string>
using namespace std;

string compressString(string str) {
    string result = "";
    int count = 1;

    for (int i = 0; i < str.length(); i++) {
        while (i < str.length() - 1 && str[i] == str[i + 1]) {
            count++;
            i++;
        }

        result += str[i];
        result += to_string(count);
        count = 1;
    }

    return result;
}

int main() {
    string str = "aaabbcc";
    cout << compressString(str);

    return 0;
}