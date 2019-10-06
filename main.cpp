#include <iostream>
#include <string>

using namespace std;
int main() {
  string name;
  int age;
  cout << "Czesc, jak sie nazywasz?" << endl;
  cin >> name;

  if (name != "Wojtek") {
    cout << "Czesc nie-Wojtku" << endl;
  }
}
