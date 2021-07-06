#include <iostream>
#include <list>
#include <queue>
#include <string>

#include "2_googlw_flighst.h"

using elevate::Edge;
using elevate::Node;

using namespace std;

class Flight {
 public:
  string departs;
  string arrives;
  int price;

  Flight(string departs_, string arrives_, int price_) {
    departs = departs_;
    arrives = arrives_;
    price = price_;
  }
};

class Route {
 public:
  std::list<string> airports;
  int price;

  Route(list<string> airports_, int price_) {
    airports = airports_;
    price = price_;
  }

  bool operator<(const Route& other){
    return this.price < other.price;
  }
  // Write your code here.
};
std::list<Route> find_connections(std::list<Flight> flights, string start,
                                  string end, int limit) {
  if(!(flighst.begin() || flights.end())){
    return {};
  }
  // Write your code
  // Priority queue for the resulting connections by price.
  std::priority_queue<Route> result;
  
  while(! {
    
  }
  
  return routes;
}

int main(int argc, char **argv) {
  (void)argc;
  (void)argv;

  int number_of_flights;
  int limit;
  string departs;
  string arrives;
  int price;
  string source;
  string destination;

  list<Flight> flights;
  std::cin >> number_of_flights;
  for (int i = 0; i < number_of_flights; i++) {
    std::cin >> departs;
    std::cin >> arrives;
    std::cin >> price;
    Flight f = Flight(departs, arrives, price);
    flights.push_back(f);
  }
  std::cin >> limit;
  std::cin >> source;
  std::cin >> destination;

  std::list<Route> connections =
      find_connections(flights, source, destination, limit);
  // Write your code here.
  return 0;
};