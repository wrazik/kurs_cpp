#include <iostream>
#include <vector>

int main() {
  std::vector<int> notes;
  int note_count = 0;
  std::cout << "Wprowadz ile ocen chcesz wprowadzic" << std::endl;
  std::cin >> note_count;
  for (int i = 0; i < note_count; ++i) {
    int note = 0;
    notes.push_back(note);
  }
  int notes_sum = 0;
  for (int note : notes) {
    notes_sum += note;
  }
  double average = notes_sum * 1.0/ notes.size();
  std::cout << "Twoja srednia to: " << average << std::endl;
}
