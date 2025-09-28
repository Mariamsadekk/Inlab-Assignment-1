// Animal.h - STARTER CODE
#ifndef ANIMAL_H
#define ANIMAL_H

#include <string>
#include <iostream>
using namespace std;

class Animal {
private:
    // TODO: Add private attributes
    // - string name
    // - int age  
    // - bool isHungry

public:
    // TODO: Implement constructors
    Animal();
    Animal(string name, int age, bool isHungry);
    
    // TODO: Implement destructor
    virtual ~Animal();
    
    // TODO: Implement methods
    virtual void display() const;
    void feed();
    
    // TODO: Implement getters and setters
    string getName() const;
    void setName(const string& name);
    int getAge() const;
    void setAge(int age);
    bool getIsHungry() const;
    void setIsHungry(bool hungry);
};

// Mammal Class - inherits from Animal
class Mammal : public Animal {
private:
    // TODO: Add private attribute
    // - string furColor

public:
    // TODO: Implement constructors
    Mammal();
    Mammal(string name, int age, bool isHungry, string furColor);
    
    // TODO: Implement destructor
    ~Mammal();
    
    // TODO: Override display method to show fur color
    void display() const override;
    
    // TODO: Implement getters and setters for furColor
    string getFurColor() const;
    void setFurColor(const string& furColor);
};

// Bird Class - inherits from Animal
class Bird : public Animal {
private:
    // TODO: Add private attribute
    // - float wingSpan

public:
    // TODO: Implement constructors
    Bird();
    Bird(string name, int age, bool isHungry, float wingSpan);
    
    // TODO: Implement destructor
    ~Bird();
    
    // TODO: Override display method to show wing span
    void display() const override;
    
    // TODO: Implement getters and setters for wingSpan
    float getWingSpan() const;
    void setWingSpan(float wingSpan);
};

// Reptile Class - inherits from Animal
class Reptile : public Animal {
private:
    // TODO: Add private attribute
    // - bool isVenomous

public:
    // TODO: Implement constructors
    Reptile();
    Reptile(string name, int age, bool isHungry, bool isVenomous);
    
    // TODO: Implement destructor
    ~Reptile();
    
    // TODO: Override display method to show venomous status
    void display() const override;
    
    // TODO: Implement getters and setters for isVenomous
    bool getIsVenomous() const;
    void setIsVenomous(bool venomous);
};

#endif

// Enclosure.h - STARTER CODE
#ifndef ENCLOSURE_H
#define ENCLOSURE_H

#include "Animal.h"

class Enclosure {
private:
    // TODO: Add private attributes
    // - Animal** animals (dynamic array of Animal pointers)
    // - int capacity
    // - int currentCount

public:
    // TODO: Implement constructors
    Enclosure();
    Enclosure(int capacity);
    
    // TODO: Implement destructor (must delete all animals)
    ~Enclosure();
    
    // TODO: Implement methods
    bool addAnimal(Animal* animal);
    void displayAnimals() const;
    
    // TODO: Implement getters and setters
    int getCapacity() const;
    void setCapacity(int capacity);
    int getCurrentCount() const;
    Animal* getAnimal(int index) const;
};

#endif

// Visitor.h - STARTER CODE
#ifndef VISITOR_H
#define VISITOR_H

#include <string>
using namespace std;

class Visitor {
private:
    // TODO: Add private attributes
    // - string visitorName
    // - int ticketsBought

public:
    // TODO: Implement constructors
    Visitor();
    Visitor(string visitorName, int ticketsBought);
    
    // TODO: Implement destructor
    ~Visitor();
    
    // TODO: Implement methods
    void displayInfo() const;
    
    // TODO: Implement getters and setters
    string getVisitorName() const;
    void setVisitorName(const string& name);
    int getTicketsBought() const;
    void setTicketsBought(int tickets);
};

#endif

// Zoo.h - STARTER CODE
#ifndef ZOO_H
#define ZOO_H

#include "Enclosure.h"
#include "Visitor.h"

class Zoo {
private:
    // TODO: Add private attributes
    // - Enclosure** enclosures (dynamic array)
    // - int numberOfEnclosures
    // - Visitor** visitors (dynamic array)  
    // - int numberOfVisitors

public:
    // TODO: Implement constructors
    Zoo();
    Zoo(int numEnclosures, int numVisitors);
    
    // TODO: Implement destructor (must clean up all dynamic memory)
    ~Zoo();
    
    // TODO: Implement methods
    void initializeZoo();
    void showZooStatus() const;
    bool addEnclosure(Enclosure* enclosure);
    bool addVisitor(Visitor* visitor);
    
    // TODO: Implement getters
    int getNumberOfEnclosures() const;
    int getNumberOfVisitors() const;
    Enclosure* getEnclosure(int index) const;
    Visitor* getVisitor(int index) const;
};

#endif

// main.cpp - STARTER CODE
#include "Animal.h"
#include "Enclosure.h"
#include "Visitor.h"
#include "Zoo.h"
#include <iostream>
using namespace std;

// TODO: Implement all class methods here

// ============== ANIMAL CLASS IMPLEMENTATION ==============
Animal::Animal() {
    // TODO: Initialize attributes with default values
}

Animal::Animal(string name, int age, bool isHungry) {
    // TODO: Initialize attributes with provided values
}

Animal::~Animal() {
    // TODO: Cleanup if needed
}

void Animal::display() const {
    // TODO: Display animal info in format: "- Name (Age: X, Hungry/Not Hungry)"
}

void Animal::feed() {
    // TODO: Set isHungry to false
}

// TODO: Implement all getter and setter methods
string Animal::getName() const {
    // TODO: Return name
    return "";
}

void Animal::setName(const string& name) {
    // TODO: Set name
}

// TODO: Implement remaining Animal getters/setters
// ... (age, isHungry getters/setters)

// ============== MAMMAL CLASS IMPLEMENTATION ==============
Mammal::Mammal() : Animal() {
    // TODO: Initialize furColor with default value
}

Mammal::Mammal(string name, int age, bool isHungry, string furColor)
    : Animal(name, age, isHungry) {
    // TODO: Initialize furColor
}

Mammal::~Mammal() {
    // TODO: Cleanup if needed
}

void Mammal::display() const {
    // TODO: Call parent display() then add fur color info
}

// TODO: Implement Mammal getters/setters for furColor

// ============== BIRD CLASS IMPLEMENTATION ==============
// TODO: Implement all Bird methods similar to Mammal
// Remember to show wing span in display()

// ============== REPTILE CLASS IMPLEMENTATION ==============
// TODO: Implement all Reptile methods similar to Mammal
// Remember to show venomous status in display()

// ============== ENCLOSURE CLASS IMPLEMENTATION ==============
Enclosure::Enclosure() {
    // TODO: Initialize with default capacity (e.g., 5)
    // TODO: Create dynamic array of Animal pointers
    // TODO: Initialize currentCount to 0
}

Enclosure::Enclosure(int capacity) {
    // TODO: Initialize with provided capacity
    // TODO: Create dynamic array of Animal pointers
    // TODO: Initialize currentCount to 0
}

Enclosure::~Enclosure() {
    // TODO: Delete all animals in the array
    // TODO: Delete the array itself
}

bool Enclosure::addAnimal(Animal* animal) {
    // TODO: Check if there's space and animal is not null
    // TODO: Add animal to array if possible
    // TODO: Return true if successful, false otherwise
    return false;
}

void Enclosure::displayAnimals() const {
    // TODO: Loop through all animals and call their display() method
}

// TODO: Implement Enclosure getters/setters

// ============== VISITOR CLASS IMPLEMENTATION ==============
// TODO: Implement all Visitor methods
// displayInfo() should show: "Name: [name]\nTickets Bought: [tickets]"

// ============== ZOO CLASS IMPLEMENTATION ==============
Zoo::Zoo() {
    // TODO: Initialize with default array sizes
    // TODO: Create dynamic arrays for enclosures and visitors
}

Zoo::Zoo(int numEnclosures, int numVisitors) {
    // TODO: Initialize with provided sizes
    // TODO: Create dynamic arrays
}

Zoo::~Zoo() {
    // TODO: Delete all enclosures and visitors
    // TODO: Delete the arrays
}

void Zoo::initializeZoo() {
    // TODO: Print "Zoo initialized successfully."
    // TODO: Create at least one enclosure with animals:
    //       - Lion (Age: 5, Hungry, Golden fur)  
    //       - Parrot (Age: 2, Not Hungry, 0.5m wing span)
    //       - Snake (Age: 3, Hungry, Venomous)
    // TODO: Create at least one visitor: Sarah Ali with 3 tickets
}

void Zoo::showZooStatus() const {
    // TODO: Display all enclosures and their animals
    // TODO: Display all visitors
    // Format should match the expected output in the assignment
}

// TODO: Implement remaining Zoo methods

// ============== MAIN FUNCTION ==============
int main() {
    // TODO: Create a Zoo object
    // TODO: Initialize the zoo
    // TODO: Show the zoo status
    // TODO: Clean up memory
    
    cout << "Zoo Management System - Milestone 01" << endl;
    
    return 0;
}
