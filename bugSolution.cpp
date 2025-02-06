#include <vector>
#include <iostream>

int main() {
  std::vector<bool> vec(10);
  vec[3] = true;
  // Incorrect way to access element.  May not directly return a bool.
  //bool value = vec[3];

  // Correct way to access element using at() for bounds checking and getting a copy of the element as a bool.
  bool value = vec.at(3);
  std::cout << "Value at index 3: " << value << std::endl;

  // Or use operator[] and then test the resulting proxy:
  if(vec[3]) {
    std::cout << "The vector's element at index 3 is true\n";
  }

  return 0;
} 