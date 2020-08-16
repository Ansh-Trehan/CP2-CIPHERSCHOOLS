#include <bits/stdc++.h>
using namespace std;

class Friend
{
  public:
    string name;
    int age;
    Friend(string initName, int initAge)
    {
      cout << "Constructor Called\n";
      name = initName;
      age = initAge;
    }

    ~Friend()
    {
      cout << "Destructor Called!!\n";
    }

    string getName()
    {
      return name;
    }

    int getAge() {
      return age;
    }

    void setName(string newName)
    {
      name = newName;
    } 

    void setAge(int newAge)
    {
      age = newAge;
    }

};

int main()
{
  Friend ross("Laksh", 27);
  Friend Sachin("Ansh Trehan", 21);
  cout << ross.getName() << " " << ross.getAge() << "\n";
  cout << Sachin.getName() << "\n";
}