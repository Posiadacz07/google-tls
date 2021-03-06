#include <stdlib.h>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

void Solve(const vector <string>&titles, const vector <string>&queries)
{
  // Write your code here
}

int main(int argc, char **argv) {
  (void)argc; (void)argv;
  size_t titles_count;
  if (!(std::cin >> titles_count)) abort();
  cin.ignore();
  vector <string> titles;
  for (size_t i = 0; i < titles_count; ++i) {
    std::string title;
    if (!(std::getline(std::cin, title))) abort();
    titles.push_back(title);
  }
  size_t query_size;
  if (!(std::cin >> query_size)) abort();
  cin.ignore();
  vector <string> queries;
  for (size_t i = 0; i < query_size; ++i) {
    std::string query;
    if (!(std::getline(std::cin, query))) abort();
    queries.push_back(query);
  }
  Solve(titles, queries);
  return 0;
}