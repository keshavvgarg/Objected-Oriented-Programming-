/*

Common ways to structure code:

-- Procedural Programming: The program moves through a linear series of instructions.
-- Functional Programming: The program moves from one function to another.
-- Object Oriented Programming: Use of Objects and Classes


What is Object Oriented Programming?

>> OOP is a programming pattern bassed on the concept of objects which can contain data in the form of
   fields/attributes/properties and code in the form of functions/ methods / procedures.
   (Every real life object has some properties and functionalities. We can represent it using OOP)

>> OOP can represent the real world more directly and precisely than previous paradigms, so the program becomes simpler and easier to understand.
>> Object-Oriented-Programing allows programmers to think of software development as if they are working with real-life entities.
   In your everyday life, people have the knowledge and can-do various works/tasks.
   
 What is a class?
  - A class is like a blueprint for creating its objects (A class is an abstract blueprint used to create more specific, concrete objects.)
    Classes often represent broad categories, like Car or Dog that share attributes. These classes define what attributes an instance
    of this type will have, like color, but not the value of those attributes for a specific object.
 
 What is an object?
  - Instance (Single Occurence) of class
 
 Four main benefits of OOP
 1. Inheritance: The capability of a class to derive properties and characteristics from another class is called Inheritance. 
                 Inheritance is one of the most important feature of Object Oriented Programming.
                 (helps in avoiding duplication for example if we have to represent 4 different cars)
                 
 2. Encapsulation:  (ye generally do chize refer krta hai)
                  Encapsulation refers to the bundling of data with the methods that operate on that data, or the restricting of direct access
                  to object's properties.
                  
                  Encapsulation is used to hide the values or state of a structured data object inside a class, preventing direct access to them by clients
                  in a way that could expose hidden implementation details or violate state invariance maintained by the methods. 
                  
                  maan lo setAge() function age ki -ve values nhi set krne deta but agr expose kr diya toh ho jayega ye possible which we don't want
                  
 3. Polymorphism:
                 The ability of an object to take many forms
                 
                  
*/

/* How to encapsulate objects

The process of implementing encapsulation can be sub-divided into two steps:

1. The data members should be labeled as private using the private access specifiers
2. The member function which manipulates the data members should be labeled as public using the public access specifier

*/

// Ref: https://www.geeksforgeeks.org/understanding-encapsulation-inheritance-polymorphism-abstraction-in-oops/
