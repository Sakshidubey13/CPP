C++ Language - Practical
1. Create a class `Laptop` with private attributes `name`, `price`, `processor`, and a parameterized constructor. Demonstrate the instantiation of objects using this constructor.
 <img width="1178" height="259" alt="image" src="https://github.com/user-attachments/assets/30fc70eb-a0a7-473f-8559-fd3b113df636" />
2. Define a class `BankAccount` with private attributes `accountNumber`, `balance`, and `ownerName`. Encapsulate these attributes using appropriate access specifiers. Implement public member functions to credit, debit, and display the balance. Demonstrate encapsulation by interacting with the class through its member functions.
3. Define a base class `Shape` with private attributes `color` and `area`. Implement public methods for setting and getting these attributes. Derive two classes, `Circle` and `Rectangle`, from the `Shape` class. Implement methods to calculate the area specific to each shape. Demonstrate abstraction by calling the area calculation methods for both `Circle` and `Rectangle`.
4.Extend the `Shape` hierarchy from Question 3 to include a virtual function `displayDetails()`. Implement the `displayDetails()` function in each derived class to print information specific to the shape. Create an array of `Shape` pointers, pointing to objects of different shapes. Demonstrate polymorphism by calling the `displayDetails()` function for each object.
5. Define an abstract class `Vehicle` with pure virtual functions `startEngine()` and `drive()`. Implement concrete classes `Car` and `Bike` that inherit from `Vehicle`. Demonstrate polymorphism by creating an array of `Vehicle` pointers, pointing to objects of both `Car` and `Bike`. Call the `startEngine()` and `drive()` functions for each object.


