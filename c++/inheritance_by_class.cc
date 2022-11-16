#include <iostream>
#include <string>
using namespace std;

class Pet {
  protected:
    string name;

  public: 
    Pet(string name) {
      name = name;
    }
    
    virtual void animalSound() {
      cout << "The animal makes a sound" << endl;
    }
};

class Dog : public Pet {
  public: 
    Dog(string nombre): Pet(nombre) {}

    void animalSound() {
      cout << "Guau" << endl;
    }
};

class Cat : public Pet {
  public: 
    Cat(string nombre): Pet(nombre) {}

    void animalSound() {
      cout << "Miau" << endl;
    }
};

int main() {
  Pet *petList[] = {new Dog("Firulais"), new Cat("Michifuz")};
  for (int i = 0; i < 2; i++) 
    petList[i]->animalSound();
  return 0;
}