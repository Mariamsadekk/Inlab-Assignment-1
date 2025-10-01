# Inlab-Assignment-1
The German International University
Faculty of Informatics and Computer Science
[Instructor Name]

Programming III, Winter Semester 2024/2025
Milestone 01

Deadline: [Insert Date & Time]

---

## General Description:

In this project, you are tasked with implementing a simple **Zoo Management System** as a console application. The system simulates animals in a zoo, their enclosures, and visitor details. The purpose of this milestone is to practice **Object-Oriented Programming (OOP)** concepts such as **classes, inheritance, encapsulation, constructors, destructors, dynamic memory allocation, and separation of interface/implementation using header and source files**.

This milestone focuses on the **structure of the system**. Full functionality (feeding schedules, visitor-animal interactions, and ticketing system) will be implemented in **Milestone 02**.

---

## Milestone 01: Required Classes and Methods

### a) **Animal Class**

Represents a generic animal in the zoo. This class will serve as the **base class** for specific animal types.

* **Attributes** (all private):

  * `string name`
  * `int age`
  * `bool isHungry`

* **Methods**:

  * `display()`: Displays the animal’s name, age, and hunger status ("Hungry"/"Not Hungry").
  * `feed()`: Sets `isHungry` to `false`.

* **Subclasses** (inherit from `Animal`):

  * **Mammal**: Adds `string furColor`.
  * **Bird**: Adds `float wingSpan`.
  * **Reptile**: Adds `bool isVenomous`.

---

### b) **Enclosure Class**

Represents an enclosure that contains multiple animals.

* **Attributes** (all private):

  * Dynamic array of `Animal*` (supporting polymorphism).
  * `int capacity`
  * `int currentCount`

* **Methods**:

  * `addAnimal(Animal* a)`: Adds an animal dynamically to the enclosure.
  * `displayAnimals()`: Displays all animals inside the enclosure.

---

### c) **Visitor Class**

Represents a visitor to the zoo.

* **Attributes** (all private):

  * `string visitorName`
  * `int ticketsBought`

* **Methods**:

  * `displayInfo()`: Displays visitor details.

---

### d) **Zoo Class**

Manages the overall system of enclosures and visitors.

* **Methods**:

  * `initializeZoo()`: Creates enclosures and populates them with animals dynamically.
  * `showZooStatus()`: Displays all enclosures and their animals.

---

## Deliverables

* A **header file** for each of the above classes.

* A single **source file (.cpp)** containing the implementations.

* A `main()` function that:

  * Initializes the zoo.
  * Adds animals to at least one enclosure.
  * Displays the enclosures and their animals.

* Submit all files compressed into a **.zip file** with the following format:
  `TeamNumber_StudentName_StudentID.zip`

---

## Important Notes

* **Cheating = 0 in the project.**
* **Fully AI-generated code = 0 in the project.**
* All attributes in classes must be **private** with **setters and getters**.
* Each class must have:

  * A **default constructor**
  * A **parameterized constructor**
  * A **destructor** (even if empty)
* Arrays and objects must be **dynamically allocated**.
* Additional functionality (feeding schedule, interactions, ticketing) will be introduced in **Milestone 02**.

---

## Example Console Output (for Milestone 01 testing)

```
Zoo initialized successfully.

Enclosure 1 Animals:
- Lion (Age: 5, Hungry)
- Parrot (Age: 2, Not Hungry)
- Snake (Age: 3, Venomous, Hungry)

Visitor Info:
Name: Sarah Ali
Tickets Bought: 3
```

---

**End of Milestone 01 Document**
