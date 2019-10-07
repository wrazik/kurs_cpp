#include <iostream>
#include <string>

using namespace std;
int main() {
  string name;
  cout << "Czesc, jak sie nazywasz?" << endl;
  cin >> name;

  if (int age = 0; name == "Wojtek" || name == "Piotrek" || name == "Dominik" || name == "Maciej") {
    cout << "Ile masz lat?" << endl;
    cin >> age;
    if (age >= 18) {
      cout << "Czesc, my sie przeciez znamy, jestes dorosly!" << endl;
    }
  } else {
    cout << "Wiek: " << age << endl;
  }
}
