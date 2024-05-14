// C++ implementation for text2emoji, for detailed notes read .py version
#include <bits/stdc++.h>
using namespace std;
// Function to traverse the string
void TraverseString(string & str, int N) { // Stores address of a character of str
    string::iterator it;
    // Traverse the string
    for (it = str.begin(); it != str.end(); it++) {
        // Print current emoji
        int x = int(*it);
        if (x == 65 or x == 97) {
            cout << "🇦 ";
        }
        else if (x == 66 or x == 98) {
            cout << "🇧 ";
        }
        else if (x == 67 or x == 99) {
            cout << "🇨 ";
        }
        else if (x == 68 or x == 100) {
            cout << "🇩 ";
        }
        else if (x == 69 or x == 101) {
            cout << "🇪 ";
        }
        else if (x == 70 or x == 102) {
            cout << "🇫 ";
        }
        else if (x == 71 or x == 103) {
            cout << "🇬 ";
        }
        else if (x == 72 or x == 104) {
            cout << "🇭 ";
        }
        else if (x == 73 or x == 105) {
            cout << "🇮 ";
        }
        else if (x == 74 or x == 106) {
            cout << "🇯 ";
        }
        else if (x == 75 or x == 107) {
            cout << "🇰 ";
        }
        else if (x == 76 or x == 108) {
            cout << "🇱 ";
        }
        else if (x == 77 or x == 109) {
            cout << "🇲 ";
        }
        else if (x == 78 or x == 110) {
            cout << "🇳 ";
        }
        else if (x == 79 or x == 111) {
            cout << "🇴 ";
        }
        else if (x == 80 or x == 112) {
            cout << "🇵 ";
        }
        else if (x == 81 or x == 113) {
            cout << "🇶 ";
        }
        else if (x == 82 or x == 114) {
            cout << "🇷 ";
        }
        else if (x == 83 or x == 115) {
            cout << "🇸 ";
        }
        else if (x == 84 or x == 116) {
            cout << "🇹 ";
        }
        else if (x == 85 or x == 117) {
            cout << "🇺 ";
        }
        else if (x == 86 or x == 118) {
            cout << "🇻 ";
        }
        else if (x == 87 or x == 119) {
            cout << "🇼 ";
        }
        else if (x == 88 or x == 120) {
            cout << "🇽 ";
        }
        else if (x == 89 or x == 121) {
            cout << "🇾 ";
        }
        else if (x == 90 or x == 122) {
            cout << "🇿 ";
        }
        else if (x == 48) {
            cout << "⿠ ";
        }
        else if (x == 49) {
            cout << "⿡ ";
        }
        else if (x == 50) {
            cout << "⿢ ";
        }
        else if (x == 51) {
            cout << "⿣ ";
        }
        else if (x == 52) {
            cout << "⿤ ";
        }
        else if (x == 53) {
            cout << "⿥ ";
        }
        else if (x == 54) {
            cout << "⿦ ";
        }
        else if (x == 55) {
            cout << "⿧ ";
        }
        else if (x == 56) {
            cout << "⿨ ";
        }
        else if (x == 57) {
            cout << "⿩ ";
        }
        else if (x == 33) {
            cout << "❗ ";
        }
        else if (x == 61) {
            cout << "🟰 ";
        }
        else if (x == 63) {
            cout << "❓ ";
        }
        else if (x == 43) {
            cout << "➕ ";
        }
        else if (x == 45) {
            cout << "➖ ";
        }
        else if (x == 36) {
            cout << "💲 ";
        }
        else if (x == 42) {
            cout << "*️⃣ ";
        }
        else if (x == 35) {
            cout << "#️⃣ ";
        }
        else {
            cout << *it;
        }
    }
}
// Driver Code
int main() {
    string str = "";
    cin >> str;
    // Stores length of the string
    int N = str.length();
    TraverseString(str, N);
    cout << "Press any key to exit: ";
    cin >> str;
}
