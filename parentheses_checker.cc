#include <iostream>
#include <stack>
#include <string>

//Using Option 3

int main() {
  // Variable to hold user input
  std::string user_input{};
  // Built-in stack library to check for balanced parentheses
  std::stack<char> parentheses{};
  
  // Receives user input by reading entire line
  std::cout << "Please enter an input containing round parentheses - ().\n";
  std::getline(std::cin, user_input);

  // Iterates through string in order to check parentheses balance
  for (int i = 0; i < user_input.length(); i++) {
    // Case 1: if a front parenthesis is detected
    if (user_input.at(i) == '(') {
      // Check for a matching back parenthesis if stack is not empty
      if (!parentheses.empty()) {
        if (parentheses.top() == ')') {
          parentheses.pop();
        } else {
          // Push to stack if no match found
          parentheses.push(user_input.at(i));
        }
      } else {
      // Push to stack if stack is empty
      parentheses.push(user_input.at(i));
      }
    }
    // Case 2: if a back parenthesis is detected
    if (user_input.at(i) == ')') {
      // Check for a matching front parenthesis if stack is not empty
      if (!parentheses.empty()) {
        if (parentheses.top() == '(') {
          parentheses.pop();
        } else {
          // Push to stack if no match found
          parentheses.push(user_input.at(i));
        }
      } else {
      // Push to stack if stack is empty
      parentheses.push(user_input.at(i));
      }
    }
  }

  // Checks if stack is empty to determine balance
  if (parentheses.empty()) {
    std::cout << "Balanced.\n";
  } else {
    std::cout << "Not balanced.\n";
  }

  return 0;
}
