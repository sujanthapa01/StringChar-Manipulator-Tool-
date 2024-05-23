#include<iostream>
#include<string>

using namespace std;

// Function that tracks index value of str
void TrackIndex(string &str) {
    for (int i = 0; i < str.length(); i++) {
        cout << str[i] << " : index => " << i << endl;
    }
}

// Function that replaces char with new_char using index no
void Replace_char(string &str, int index, char new_char) {
   int replaced_char = 0;
    if (index >= 0 && index < str.length()) {
        char prev_char = str[index];
        str[index] = new_char;
        replaced_char++;
        cout << prev_char << " => REPLACED => " << new_char << " | count => " << replaced_char << endl;
        cout << "Edited Char : |* " << str << " *|" << endl;
    } else {
        cout << "<----Out Of Index ---->" << endl;
    }
}

int main() {
    string str;
    cout << "Enter a Text : ";
    cin >> str;
    TrackIndex(str);

    char choosed;

    do {
        int index = 0;
        cout << "Enter The Index Value : ";
        cin >> index;
        cout << "You Entered Index " << index << " => " << str[index] << endl;

        char new_char;
        cout << "Enter The New Char : ";
        cin >> new_char;
        Replace_char(str, index, new_char);

        cout << "Do You Want To Rerun The Program? (y/n) : ";
        cin >> choosed;
        cin.ignore();
    } while (choosed == 'y' || choosed == 'Y');

}