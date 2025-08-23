#include <iostream>
#include <filesystem>
namespace fs = std::filesystem;

/*
   Finding file path with providing only the name of the given file. The code is structured in two categories: find paths in folders
   when we know the location of the folder plus the name of the file we are looking for and find paths systemwide when we only know
   the files name.
*/





void getFileFromFolder() {
  std::string filePath = "/home/benedek-kaibas/Documents/activity11-benedekaibas/src";
  fs::path p(filePath);
  
  for(auto& f: fs::directory_iterator(p)) {
    std::cout << f.path() << "\n";
  }
}











// setup function for user input, function calls based on the category
void setup() {
  std::string user_input;
  std::cout << "Enter the file's name you are looking for: ";
  std::cin >> user_input;
}

int main() {
  getFileFromFolder();
}
