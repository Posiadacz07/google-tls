// DONE

#include <functional>
#include <iostream>
#include <utility>
#include <vector>
#include <queue>

typedef std::pair<int, std::pair<int, int>> ppi;

int main() {
  int n;
  std::cin >> n;
  std::vector<int> array_lengths(n);
  for (int i = 0; i < n; i++) {
    std::cin >> array_lengths[i];
  }
  std::vector<std::vector<int>> arrays(n);
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < array_lengths[i]; j++) {
      int element;
      std::cin >> element;
      arrays[i].push_back(element);
    }
  }
  std::vector<int> merged;

  std::priority_queue<ppi, std::vector<ppi>, std::greater<ppi>> pq;
                      
  
  for(int i = 0; i < arrays.size(); i++) {
    pq.push({arrays[i][0], {i, 0}});
  }
  
  while(!pq.empty()) {
    std::pair<int, std::pair<int, int>> curr = pq.top();
    pq.pop();
    
    int i = curr.second.first;
    int j = curr.second.second;
    
    merged.push_back(curr.first);
    
    if(j+1 < arrays[i].size()){
      pq.push({arrays[i][j+1], {i, j+1}});
    }
  }

  for (int i = 0; i < merged.size(); i++) {
    std::cout << merged[i] << " ";
  }
  std::cout << std::endl;
  return 0;
}