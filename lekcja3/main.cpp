#include <iostream>
#include <string>

using namespace std;
int main() {
  string name;
  cout << "Czesc, jak sie nazywasz?" << endl;
  cin >> name;

  cout << "Ile masz lat?" << endl;
  int age;
  cin >> age;

  /* &&
     ||
   */

  if (name == "Wojtek" || name == "Piotrek" || name == "Dominik" || name == "Maciej") {
    if (age >= 18) {
      cout << "Czesc, my sie przeciez znamy, jestes dorosly!" << endl;
    }
  }
}
