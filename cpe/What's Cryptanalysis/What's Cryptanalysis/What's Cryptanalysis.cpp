#include <iostream>
#include <string>
using namespace std;

int main() {
    int t;
    cin >> t; 
    string st;
    int count[26] = { 0 };  
     for (int i = 0; i < t; i++)
     {
        cin >> ws;  
        getline(cin, st);
        for (int j = 0; j < st.length(); j++) {
            char c = st[j];
            if (isalpha(c)) {
                c = toupper(c);  
                count[c - 'A']++; 
            }
        }
    }
    for (int i = 0; i < 26; i++) {
        if (count[i] > 0) {
            cout << char('A' + i) << " " << count[i] << endl;
        }
    }
    return 0;
}

