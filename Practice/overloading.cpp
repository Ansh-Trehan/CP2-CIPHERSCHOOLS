#include <bits/stdc++.h>
using namespace std;
float area(float radius)
{
  return 3.14*radius*radius;
}

float area(float side, string shape)
{
   cout << shape << "\n";
   return side * side;
}

float area(int length, int breadth)
{
  return 1.0 * length * breadth;
}

float volume(int length, int height, int breadth = 12, string shape = "Cubiod")
{
  return area(length, breadth) * height;
}

float area(int length, int breadth) {
  return length * breadth * 2;
}

int main()
{
  cout << area (10) << "\n";
  cout << area(10.1234, 12) << "\n";
  cout << volume (10, 10, 10, "Cube") << "\n";
}

