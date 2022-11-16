import java.util.ArrayList;

public class Main {
  public static void main(String[] args) {
    ArrayList<Pet> petList = new ArrayList<Pet>();
    Dog dog = new Dog("Firulais");
    Cat cat = new Cat("Michifuz");
    petList.add(dog);
    petList.add(cat);
    for (Pet pet : petList) pet.animalSound();
    
  }
}

class Pet {
  protected String name;

  public Pet(String name) {
    this.name = name;
  }

  public void animalSound() {
    System.out.println("The animal makes a sound");
  }
}

class Dog extends Pet {
  public Dog(String name) {
    super(name);
  }

  public void animalSound() {;
    System.out.println("Guau");
  }
}

class Cat extends Pet {
  public Cat(String name) {
    super(name);
  }

  public void animalSound() {;
    System.out.println("Miau");
  }
}