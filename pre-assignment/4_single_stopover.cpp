#include <stdlib.h>

#include <algorithm>
#include <iostream>
#include <map>
#include <set>
#include <string>
#include <vector>


int main(int argc, char** argv) {
  (void)argc; (void)argv;
  size_t flight_count;
  std::map<std::string, std::vector<std::string>> connections;
  if (!(std::cin >> flight_count)) abort();
  for (size_t i = 0; i < flight_count; ++i) {
    std::string from, to;
    if (!(std::cin >> from >> to)) abort();
    connections[from].push_back(to);
  }
  
    // for (const auto & connection : connections) {
    //     std::cout << connection.first << ": \n";
    //     for(const auto& airport : connection.second) {
    //         std::cout << airport << ' ';
    //     } std::cout << "\n" ;
    // }

  size_t trip_count;
  if (!(std::cin >> trip_count)) abort();
  for (size_t i = 0; i < trip_count; ++i) {
    std::string from, to;
    if (!(std::cin >> from >> to)) abort();
    std::set<std::string> result;
    auto fromAiport = connections.find(from);
    if(fromAiport != connections.end()){
        for (const auto& airport : fromAiport->second) {
            auto secondAirport = connections.find(airport);
            if(secondAirport != connections.end()) {
                if(std::find(secondAirport->second.begin(), secondAirport->second.end(), to) != secondAirport->second.end()){
                    result.insert(secondAirport->first);
                }
            }
        } 
    }
    for(auto i : result) {
        std::cout << i << ' ';
    }
    std::cout << std::endl;
  }

  return 0;
}
