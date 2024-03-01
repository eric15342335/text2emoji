// C++ implementation for text2emoji, for detailed notes read .py version
#include <bits/stdc++.h> 
using namespace std; 
// Function to traverse the string
void TraverseString(string &str, int N) 
{// Stores address of a character of str 
    string:: iterator it; 
    // Traverse the string 
    for (it = str.begin(); it != str.end(); it++) { 
        // Print current emoji
		int x = int(*it);
        if (x==65 or x==97) {cout << "🇦 ";}
		if (x==66 or x==98) {cout << "🇧 ";}
		if (x==67 or x==99) {cout << "🇨 ";}
        if (x==68 or x==100) {cout << "🇩 ";}
		if (x==69 or x==101) {cout << "🇪 ";}
		if (x==70 or x==102) {cout << "🇫 ";}
        if (x==71 or x==103) {cout << "🇬 ";}
		if (x==72 or x==104) {cout << "🇭 ";}
		if (x==73 or x==105) {cout << "🇮 ";}
        if (x==74 or x==106) {cout << "🇯 ";}
		if (x==75 or x==107) {cout << "🇰 ";}
		if (x==76 or x==108) {cout << "🇱 ";}
        if (x==77 or x==109) {cout << "🇲 ";}
		if (x==78 or x==110) {cout << "🇳 ";}
		if (x==79 or x==111) {cout << "🇴 ";}
        if (x==80 or x==112) {cout << "🇵 ";}
		if (x==81 or x==113) {cout << "🇶 ";}
		if (x==82 or x==114) {cout << "🇷 ";}
        if (x==83 or x==115) {cout << "🇸 ";}
		if (x==84 or x==116) {cout << "🇹 ";}
		if (x==85 or x==117) {cout << "🇺 ";}
        if (x==86 or x==118) {cout << "🇻 ";}
		if (x==87 or x==119) {cout << "🇼 ";}
		if (x==88 or x==120) {cout << "🇽 ";}
        if (x==89 or x==121) {cout << "🇾 ";}
		if (x==90 or x==122) {cout << "🇿 ";}
		if (x==48) {cout << "⿠ ";}
		if (x==49) {cout << "⿡ ";}
		if (x==50) {cout << "⿢ ";}
		if (x==51) {cout << "⿣ ";}
		if (x==52) {cout << "⿤ ";}
		if (x==53) {cout << "⿥ ";}
		if (x==54) {cout << "⿦ ";}
		if (x==55) {cout << "⿧ ";}
		if (x==56) {cout << "⿨ ";}
		if (x==57) {cout << "⿩ ";}
		if (x==33) {cout<<"❗ ";}
		if (x==61) {cout<<"🟰 ";}
		if (x==63) {cout<<"❓ ";}
		if (x==43) {cout<<"➕ ";}
		if (x==45) {cout<<"➖ ";}
		if (x==215) {cout<<"✖ ";}
	if (x==247) {cout<<"➗ ";}
	    if (x==36) {cout<<"💲 ";}
	    if (x==42) {cout<<"*️⃣ ";}
	    if (x==169) {cout<<"©️ ";}
	    if (x==174) {cout<<"®️ ";}
	    if (x==153) {cout<<"™️ ";}
	    if (x==35) {cout<<"#️⃣ ";}
	    if (x==128) {cout<<"💶 ";}
}} 
// Driver Code 
int main() 
{string str = ""; cin >> str;
 // Stores length of the string 
 int N = str.length(); TraverseString(str, N);
 cout << "Press any key to exit: "; cin >> str;
} 
