**An interface in Java is a mechanism that is used to achieve complete abstraction. 
It is basically a kind of class that contains only constants and abstract methods.**

We cannot define private and protected modifiers for variables in interface because **the 
fields (data members) declared in an interface are by default public, static, and final.**

Only **abstract and public modifiers** are allowed for methods in interfaces.

Q> Suppose A is an interface. Can we create an object using new A()?

Ans: No, we cannot create an object of interface using new operator. 
But we can create a reference of interface type and interface reference refers to objects of
its implementation classes.

*Static* - In Java, a static method is a method that belongs to a class rather than an instance of a class. 
The method is accessible to every instance of a class, but methods defined in an instance are only able to be accessed by that object of a class.

from Java 8 onwards, we can define static and default methods in an interface. Prior to Java 8, it was not allowed.

Representations of Interface :-

A)public abstract interface A {
     void m1();
    }
   
B) abstract interface A extends B, C {
     void m1();
   }
   
 C) interface A {
    void m1();
   }
   
D) interface A {
    int m1();
   }
   
E) public interface A {
     void m1();
   }
   Public interface B {
     void m1();
   }
   public interface C extends A, B {
    void m1();
   }
   
   The interface method cannot be declared as final. The modifiers such as public and abstract are only applicable for method declaration in an interface.
   This is because a final method cannot be overridden in java. But an interface method should be implemented by another class.
   
   
