#include <iostream>
#include <filesystem>


namespace fs = std::filesystem;

void receive_path() {
  fs::path p("/home/benedek-kaibas/Desktop");

  std::cout << p.parent_path();
}

int main() {
  receive_path();
}
