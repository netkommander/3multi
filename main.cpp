#include <iostream>
#include <vector>

// Define first_three_multiples() here:
std::vector<int> first_three_multiples(int num)
{
    std::vector<int> numbers = {num,num+num,num+num+num};
    return numbers;
}

int main() {
  
  for (int element : first_three_multiples(8)) {
    std::cout << element << " ";
  }
  
}
