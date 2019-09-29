#include <iostream>

using namespace std;
int main() 
{
  cout << "Podaj wartosc pierwszego kata" << endl;
  int first_angle = 0;
  cin >> first_angle;

  cout << "Podaj wartosc drugiego kata" << endl;
  int second_angle = 0;
  cin >> second_angle;

  int third_angle = 180 - first_angle - second_angle;
  cout << "Trzeci kat bedzie wynosil " << third_angle << endl;
}
