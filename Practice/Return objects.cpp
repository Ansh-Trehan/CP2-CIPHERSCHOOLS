#include <bits/stdc++.h>
using namespace std;

class CalculatedValues
{
  public:
  int add;
  int sub;
  int multiply;
  float divide;

  CalculatedValues(int first, int second)
  {
    add = first + second;
    sub = first - second;
    multiply = first * second;
    divide = (float (first) / second);
  }
};

// Returning multiple values from our function
CalculatedValues* calculator(int first, int second)
{
  CalculatedValues* result = new CalculatedValues(first, second);
  return result;
}

int main()
{
  CalculatedValues* ro = calculator(10, 12);
  cout << &ro << "\n";
  cout << ro->add << " " << ro->sub << " " << ro->multiply << " " << ro->divide
       << "\n";
}

