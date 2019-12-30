#include <iostream>
#include <utility>
#include <string>

std::pair<double, double> get_vertex(double a, double b, double c) {
  double delta = b * b - 4 * a * c;
  return {-b / 2 * a, -delta / 4 * a};
}

int main() {
  auto [x, y] = get_vertex(4, 2, -3);
  std::cout << "(" << x << ", " << y << ")\n";
}
