#include <iostream>
#include <cstring>

using namespace std;

char* ReplacePatternWithAsterisks(char* s, bool& foundPattern) {
    foundPattern = false;
    char t[201] = { 0 }; 
    int j = 0;        

    for (int i = 0; s[i] != '\0'; i++) {
        
        if (s[i] == 'n' && s[i + 2] == 'o' && isalpha(s[i + 1])) {
           
            strncpy_s(&t[j], 201 - j, "**", 2);
            j += 2;
            foundPattern = true;
            i += 2; 
        }
        else {
           
            t[j++] = s[i];
        }
    }

    t[j] = '\0'; 

   
    strcpy_s(s, 101, t);

    return s;
}

int main() {
    char str[101];
    cout << "Enter string:" << endl;
    cin.getline(str, 100);

    bool foundPattern;
    ReplacePatternWithAsterisks(str, foundPattern);

    if (foundPattern) {
        cout << "letter between n and o: yes" << endl;
    }
    else {
        cout << "letter between n and o: no" << endl;
    }

    cout << "Modified string: " << str << endl;

    return 0;
}
