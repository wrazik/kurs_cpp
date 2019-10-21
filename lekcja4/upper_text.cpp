#include <cctype>
#include <iostream>

using namespace std;

int main() {
  string input_text;
  getline(cin, input_text);
  for (char& letter : input_text) {
    letter = toupper(letter);
  }
  cout << input_text << endl;
}
