#include <iostream>
#include <random>
#include <string>

using namespace std;

int dice_number(int lower, int upper) {
  std::random_device rd;                                // obtain a random number from hardware
  std::mt19937 eng(rd());                               // seed the generator
  std::uniform_int_distribution<> distr(lower, upper);  // define the range
  return distr(eng);
}

int main() {
  int diced_number = dice_number(0, 1000);
  cout << "Witaj w grze \"Zgadnij Liczbe!\"" << endl;

  int guessed_number = 0;
  int guess_count = 0;
  int try_limit = 8;

  do {
    cout << "Podaj liczbe: " << endl;
    cin >> guessed_number;
    if (guessed_number == diced_number) {
      cout << "Wygrales! Jestes zwyciezca!" << endl;
      return 0;
    } else if (guessed_number < diced_number) {
      cout << "Przykro mi, moja liczba jest wieksza!" << endl;
    } else {
      cout << "Przykro mi, moja liczba jest mniejsza!" << endl;
    }

    guess_count++;
  } while (guess_count < try_limit);
  cout << "Niestety, przegrales! Moja liczba to:" << diced_number << endl;
}
