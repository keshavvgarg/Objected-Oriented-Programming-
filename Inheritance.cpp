/*
    Inheritance: The capability of a class to derive properties and characteristics from another class is called Inheritance. 
                 Inheritance is one of the most important feature of Object Oriented Programming.
                 (helps in avoiding duplication for example if we have to represent 4 different cars)
*/

// Syntax for Inheritance
class subclass_name : access_mode   base_class_name
{
  //body of subclass
};

// Example
class Bird{
   private:
   int legs;
   string color;
   
   public:
   void fly(){
      cout << "The bird is flying\n";
   }
   // getter and setter methods
}


class Pigeon: public Bird{
   public:
   void pigeon_fly(){
   cout<< "Pigeon flies..\n";
   }
}

/* MODES OF INHERITANCE
1. Public mode: 
                If we derive a sub class from a public base class. Then the public member of the base class
                will become public in the derived class and protected members of the base class will become
                protected in derived class.
                
2. Protected mode: 
                  If we derive a sub class from a Protected base class. Then both public member and protected members
                  of the base class will become protected in derived class.
                  
3. Private mode: 
                If we derive a sub class from a Private base class. Then both public member and protected members
                of the base class will become Private in derived class. 
                
(For all three dervied class me base class ke private members access nhi kr skte but public and protected access kr skte hai)
 */

class A
{
public:
    int x;
protected:
    int y;
private:
    int z;
};
 
class B : public A
{
    // x is public
    // y is protected
    // z is not accessible from B
};
 
class C : protected A
{
    // x is protected
    // y is protected
    // z is not accessible from C
};
 
class D : private A    // 'private' is default for classes
{
    // x is private
    // y is private
    // z is not accessible from D
};


/* Types of Inheritance in c++

   1. Single Inheritance: 
                         In single inheritance, a class is allowed to inherit from only one class.
                         
   2. Multiple Inheritance: 
                         Multiple Inheritance is a feature of C++ where a class can inherit from more than one classes.
                         
   3. Multilevel Inheritance: 
                         In this type of inheritance, a derived class is created from another derived class.
                         
   4. Hierarchical Inheritance: 
                               In this type of inheritance, more than one sub class is inherited from a single base class.
                               i.e. more than one derived class is created from a single base class.
                               
   5. Hybrid Inheritance: Hybrid (Virtual) Inheritance: Hybrid Inheritance is implemented by combining more than one type of inheritance.
                          For example: Combining Hierarchical inheritance and Multiple Inheritance. 

*/

// Multiple Inheritance syntax
class subclass_name : access_mode base_class1, access_mode base_class2, ....
{
  //body of subclass
};

// Example
class Car: public Vehicle, public FourWheeler {
 
};

// Phle Vehicle ka constructor call hoga then FourWheeler ka constructor call hoga then Car ka constructor call hoga
// Vehicle waala apni properites set kr dega Car class me and FourWheeler apni
// Destructors reverse order me call hote hai constructors ke

// Multiple inheritance me diamond problem hoti hai, agr time ho toh pdh lena

// Default constructor child class ke, base class ke deafult constructors ko hi call krte hai
// Calling parameterized constructors of base class from derived class

class Child: public Parent
public Child(int x, string str) : Parent(x, str) {
  // constructor of child class
}

// Multilevel inheritance me sbse phle sbse uper vali class ka constructor call hota hai


// Ref: https://www.geeksforgeeks.org/inheritance-in-c/
// Order of Constructor calls: https://www.geeksforgeeks.org/order-constructor-destructor-call-c/
// Destructors: https://www.geeksforgeeks.org/destructors-c/
