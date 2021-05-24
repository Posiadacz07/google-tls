// Feel free to change anything in this code, e.g.
// add or remove variables and functions. If you don't
// like it, you can delete it and start from scratch.

#include <iostream>
#include <utility>
#include <vector>

std::vector<std::vector<int>> snake_matrix(int n) {
  std::vector<std::vector<int>> result(n, std::vector<int>(n));
  
  for(int i = 0; i < n; i++ ) {
      for(int j = 0; j < n; j++){
          if(i%2 == 1){
              result[i][j] = (i+1)*n - j;
          } else {
              result[i][j] = i*n + j + 1;
          }
      }
  }
  return result;
}

void print(const std::vector<std::vector<int>>& m) {
  for (const auto& row : m) {
    for (int number : row) {
      std::cout << number << ' ';
    }
    std::cout << '\n';
  }
}

int main() {
  int n;
  std::cin >> n;
  std::vector<std::vector<int>> m = snake_matrix(n);
  print(m);
  return 0;
}