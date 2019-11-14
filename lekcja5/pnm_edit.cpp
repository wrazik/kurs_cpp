#include <string>
#include "pnm.hpp"

int main() {
  // Remember to modify path, I didn't change it on purpose
  std::string image_path = "C:/Users/Wojtek/Source/Repos/Lekcja5/Lekcja5/kosmonauta.pnm";

  auto image = pnm::read(image_path);

  for (auto& pixel : image) {
    pixel.red = 255 - pixel.red;
    pixel.green = 255 - pixel.green;
    pixel.blue = 255 - pixel.blue;
  }

  std::string output_path = "C:/Users/Wojtek/Source/Repos/Lekcja5/Lekcja5/kosmonauta_negative.pnm";
  pnm::write(output_path, image);
}
