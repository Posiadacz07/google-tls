#include <stdlib.h>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

void Solve(const vector <string>&dict, const vector <string>&queries)
{
  // Write your code here
}

int main(int argc, char **argv) {
  (void)argc; (void)argv;  
  size_t dict_size;
  vector < string > dict;
  if (!(cin >> dict_size)) abort(); 
  for (size_t i = 0; i < dict_size; ++i) {
    string dict_word;
    if (!(cin >> dict_word)) abort();
    dict.push_back(dict_word);
  }
  size_t query_size;
  vector < string > queries;
  if (!(cin >> query_size)) abort();
  for (size_t i = 0; i < query_size; ++i) {
    string query;
    if (!(cin >> query)) abort();
    queries.push_back(query);
  }
  Solve(dict, queries);
  return 0;
}