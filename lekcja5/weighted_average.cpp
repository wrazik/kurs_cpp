#include <iostream>
#include <vector>

int main() {
  std::vector<int> notes;
  int note_count = 0;
  std::cout << "Wprowadz ile ocen chcesz wprowadzic" << std::endl;
  std::cin >> note_count;
  for (int i = 0; i < note_count; ++i) {
    std::cout << "Wprowadz oceny" << std::endl;
    int note = 0;
    std::cin >> note;
    notes.push_back(note);
  }
  std::vector<int> weights;

  std::cout << "Wprowadz wagi" << std::endl;
  for (int i = 0; i < note_count; ++i) {
    int weight = 0;
    std::cin >> weight;
    weights.push_back(weight);
  }

  int weight_note_sum = 0;
  int weight_sum = 0;
  for (int i = 0; i < note_count; ++i) {
    weight_note_sum += notes[i] + weights[i];
    weight_sum += weights[i];
  }

  double average = weight_note_sum * 1.0 / weight_sum;
  std::cout << average << std::endl;
}

