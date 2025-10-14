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

void Animal::display(){
    // TODO: Display animal info in format: "- Name (Age: X, Hungry/Not Hungry)"
}

void Animal::feed() {
    // TODO: Set isHungry to false
}

// TODO: Implement all getter and setter methods
string Animal::getName() {
    // TODO: Return name
    return "";
}

void Animal::setName(string name) {
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

void Mammal::display()  {
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

void Enclosure::displayAnimals()   {
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

void Zoo::showZooStatus()   {
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
