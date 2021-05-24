#include <iostream>
#include <vector>

// std::vector<int> merge(const std::vector<int>& a, const std::vector<int>& b) {
//   std::vector<int> result;
//   result.reserve(a.size()+b.size());
  
//   int i = 0, j = 0;

//   while(i < a.size() && j < b.size()) {
//     if(a[i] < b[j]) {
//       result.push_back(a[i++]);
//     } else {
//       result.push_back(b[j++]);
//     }
//   }
  
//   while(i < a.size()) {
//       result.push_back(a[i++]);
//   }
  
//   while(j < b.size()) {
//       result.push_back(b[j++]);
//   }

//   return result;
// }


void merge(std::vector<int>& a, std::vector<int>& b)
{
    int m = a.size(), n = b.size();
    for (int i = n - 1; i >= 0; i--)
    {
        int j, last = a[m - 1];
        for (j = m - 2; j >= 0
             && a[j] > b[i]; j--)
            a[j + 1] = a[j];
 
        if (j != m - 2 || last > b[i])
        {
            a[j + 1] = b[i];
            b[i] = last;
        }
    }
}


int main() {
  int n, m;
  std::cin >> n >> m;
  std::vector<int> a(n);
  for (int i = 0; i < n; ++i) {
    std::cin >> a[i];
  }
  std::vector<int> b(m);
  for (int i = 0; i < m; ++i) {
    std::cin >> b[i];
  }
  merge(a, b);

  for(int i : a) {
    std::cout << i << '\n';
  }
  for(int i : b) {
    std::cout << i << '\n';
  }
  
  return 0;
}