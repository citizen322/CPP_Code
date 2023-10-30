#include <iostream>
#include <string>

using namespace std;
int main() {
    string input = "aabbccAABBCC";
    string result = "";


    for (char c : input) {
        if (c == 'a')
            result += 'b';
        else if (c == 'A')
            result += 'B';
        else if (c == 'b')
            result += 'a';
        else if (c == 'B')
            result += 'A';
        else
            result += c;
    }


    cout << "Input: " << input << endl;
    cout << "Result: " << result << endl;

    return 0;
}
