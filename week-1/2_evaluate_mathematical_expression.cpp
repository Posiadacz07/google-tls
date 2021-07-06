#include <iomanip>
#include <iostream>
#include <math.h>
#include <sstream>
#include <string>

class ExpressionEvaluator {
public:
  ExpressionEvaluator(const std::string &expr) : expr_(expr), position_(-1) {}

  void next() {
    //   std::cout << "next\n";
    // while(expr_.at(position_) == ' '){
    //     ++position_;
    // }
    curr_char_ = ++position_ < expr_.size() ? expr_.at(position_) : -1;
  }

  bool should_apply(char c) {
    //   std::cout << "should_apply\n";

    if (curr_char_ == c) {
      next();
      return true;
    }
    return false;
  }

  double eval() {
    //   std::cout << "eval\n";

    next();
    return eval_expr();
  }

  double eval_term() {
    //   std::cout << "eval_term\n";

    double result = eval_factor();
    while (true) {
      while (curr_char_ == ' ') {
        next();
      }
      if (should_apply('*')) {
        result *= eval_factor();
      } else if (should_apply('/')) {
        result /= eval_factor();
      } else
        return result;
    }
  }

  double eval_expr() {
    // std::cout << "eval_expr\n";

    double result = eval_term();
    while (true) {
      while (curr_char_ == ' ') {
        next();
      }
      if (should_apply('+')) {

        result += eval_term();
      } else if (should_apply('-')) {
        result -= eval_term();
      } else
        return result;
    }
  }

  double eval_factor() {
    //   std::cout << "eval_factor\n";
    double result;
    while (curr_char_ == ' ') {
      next();
    }
    if (should_apply('(')) {
      result = eval_expr();
      should_apply(')');
    } else {
      int index = 1;
      while (curr_char_ == ' ') {
        next();
        index++;
      }
      if (curr_char_ >= '0' && curr_char_ <= '9') {
        int dots = 0;
        next();

        while ((curr_char_ >= '0' && curr_char_ <= '9') || curr_char_ == '.') {
          next();
          index++;
          if (curr_char_ == '.') {
            if (++dots > 1) {
              std::cout << "more than 1 dot\n";
            }
          }
        }
        std::stringstream s;
        s << expr_.substr(position_ - index, position_);
        s >> result;
        //   std::cout << result << "RESULT\n\n\n";
      }
    }
    return result;
  }

private:
  int position_;
  int curr_char_;
  const std::string expr_;
};

int main() {
  std::string expression;
  std::getline(std::cin, expression);
  std::cout << ExpressionEvaluator(expression).eval();
}
