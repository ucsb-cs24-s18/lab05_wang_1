// usestack.cpp - for CS 24 lab practice using stacks
// NAME(S), DATE

#include "intstack.h"
#include <iostream>
using namespace std;

int main() {
  // Stack s;

  //s.push(10);
  //   s.push(20);
  //
  //while (!s.empty()) {
  //    cout << s.top() << endl;
  //    s.pop();
  //}

  //evaluating "2 8 8 + * 2  - "

  //first three tokens all numbers to push"2 8 9"
  
  Stack numbers;
  numbers.push(2);
  numbers.push(8);
  numbers.push(8);

  int right = numbers.top();
  numbers.pop();
  int left = numbers.top();
  numbers.pop();
  numbers.push(right+left);

  right = numbers.top();
  numbers.pop();
  left = numbers.top();
  numbers.pop();
  numbers.push(right*left);

  right = numbers.top();
  numbers.pop();
  left = numbers.top();
  numbers.pop();
  numbers.push(right-left);

  cout<<numbers.top()<<endl;

    return 0;
}
