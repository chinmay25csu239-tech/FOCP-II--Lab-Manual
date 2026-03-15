#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main() {
    string in, out = "";
    getline(cin, in);

    int words = 0, digits = 0, special = 0;
    bool inSpace = true;

    // 1. Space Removal & Tokenizing
    for (int i = 0; i < in.length(); i++) {
        if (!isspace(in[i])) {
            if (inSpace && out.length() > 0) out += ' ';
            out += in[i];
            inSpace = false;
        } else {
            inSpace = true;
        }
    }

    // 2. Sentence Case & Counting
    if(out.length() > 0) {
        out[0] = toupper(out[0]);
        words = 1;
        for(int i = 1; i < out.length(); i++) {
            out[i] = tolower(out[i]);
            if(out[i] == ' ') words++;
            if(isdigit(out[i])) digits++;
            if(!isalnum(out[i]) && out[i] != ' ') special++;
        }
    }

    cout << "Normalized: " << out << "\nWords: " << words << "\nDigits: " << digits;
    cout << "\nSpecial: " << special << endl;
    
    if(special == 0) cout << "Validation Successful";
    else cout << "Validation Failed: Contains special characters";

    return 0;
} 