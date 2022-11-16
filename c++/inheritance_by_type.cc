#include <iostream>
#include <string>
using namespace std;

class Canine {
  public:
    virtual void aullar();
};

class Dog{
  protected:
    string name;

  public: 
    Dog(string name) {
      name = name;
    }

    void aullar() {
      cout << "Auú, auú" << endl;
    }
};

class Wolf{
  protected:
    string name;

  public: 
    Wolf(string name) {
      name = name;
    }

    void aullar() {
      cout << "Auuuuuuuuuú, auuuuuuuuú" << endl;
    }
};

int main() {
  Dog dog = Dog("Firulais");
  Wolf wolf = Wolf("Silver");
  dog.aullar();
  wolf.aullar();
  return 0;
}