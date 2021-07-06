#include <iostream>
#include <vector>
#include <stdexcept>
#include <cmath>

using namespace std;

int evaluateMathExpression(string s) {
    vector<string> s0(0);
    size_t pos = 0;
    std::string token;
    string delimiter = " ";

    while ((pos = s.find(delimiter)) != std::string::npos) {
        token = s.substr(0, pos);
        s0.push_back(token);
        s.erase(0, pos + delimiter.length());
    }
    s0.push_back(s);

    if (s0.size() != 3) {
        throw invalid_argument("Must have 3 tokens separated by spaces: " + s);
    }
    // s1 is first number.
    string s1 = s0[0];
    // s2 is math operator (e.g. '+').
    string s2 = s0[1];
    // s3 is second number.
    string s3 = s0[2];

    // first number
    int v1 = 0;
    for (int i = 0; i < s1.length(); i++) {
      char c = s1[i];
      if (c < '0' || c > '9') {
    	  throw domain_error("Can't convert character to digit: " + c);
      }
      int digit = c - '0';
      v1 += digit * pow(10, s1.length() - i - 1);
    }
    
    // second number
    int v2 = 0;
    for (int i = 0; i < s3.length(); i++) {
      char c = s3[i];
      if (c < '0' || c > '9') {
    	  throw domain_error("Can't convert character to digit: " + c);
      }
      int digit = c - '0';
      v2 += digit * pow(10, s3.length() - i - 1);
    }

    if (s2 == "+") {
      // Returns first number plus second number.
      return v1 + v2;
    } else if (s2 == "-") {
      // Returns first number minus second number.
      return v1 - v2;
    }
    else {
      throw domain_error("Can't convert character an operator: +, -, /, *");
    }
  }

int main() {
    string s;
    getline(cin, s);
    try {
        int result = evaluateMathExpression(s);
        cout << result;
    }
    catch(domain_error e) {
        cout << "domain_error";
    }
    catch(invalid_argument e) {
        cout << "invalid_argument";
    }
}