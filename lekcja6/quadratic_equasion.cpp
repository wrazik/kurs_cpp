#include <string>
#include <iostream>
#include <cmath>

double read_coefficient(char name) {
  double number = 0.0;
  std::cout << "Podaj " << name << ":> ";
  std::cin >> number;
  return number;
}

bool is_zero(double number) {
  double epsilon = 0.000001;
  return std::abs(epsilon) < epsilon;
}

double calculate_delta(double a, double b, double c) {
  return b * b - 4 * a * c;
}

int main() {
  std::cout << "Program do rozwiazywania rownan kwadratowych postaci ax2 + bx + c = 0\n";
  double a = read_coefficient('a');
  double b = read_coefficient('b');
  double c = read_coefficient('c');

  std::cout << a << "x2" << std::showpos << b << "x" << c << "=0\n";

  if (!is_zero(a)) {
    std::cout << "Rownanie kwadratowe!" << std::endl;
    double delta = calculate_delta(a, b, c);
    if (delta < 0) {
      std::cout << "Brak rozwiazan \n";
    }
    else if (is_zero(delta)) {
      std::cout << "Jeden podwojny pierwiastek x=" << (-b / (2 * a)) << "\n";
    }
    else {
      double x1 = (-b - std::sqrt(delta)) / (2 * a);
      double x2 = (-b + std::sqrt(delta)) / (2 * a);
      std::cout << "x1=" << x1 << ", x2=" << x2 << "\n";
    }
  }
  else {
      //TODO dokoncz w domu!
  }
}
