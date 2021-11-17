In Java, a constructor is a block of codes similar to the method. It is called when an instance of the class is created. 
At the time of calling constructor, memory for the object is allocated in the memory.

It is a special type of method which is used to initialize the object.

Every time an object is created using the new() keyword, at least one constructor is called.

There are two types of constructors :-

***Java Default Constructor***

A constructor is called "Default Constructor" when it doesn't have any parameter.
The default constructor is used to provide the default values to the object like 0, null, etc., depending on the type.

    //Let us see another example of default constructor  
    //which displays the default values  
    class Student3{  
    int id;  
    String name;  
    //method to display the value of id and name  
    void display(){System.out.println(id+" "+name);}  
  
    public static void main(String args[]){  
    //creating objects  
    Student3 s1=new Student3();  
    Student3 s2=new Student3();  
    //displaying values of the object  
    s1.display();  
    s2.display();  
    }  
    }
    
***Java Parameterized Constructor***

A constructor which has a specific number of parameters is called a parameterized constructor.
The parameterized constructor is used to provide different values to distinct objects. However, you can provide the same values also.

    //Java Program to demonstrate the use of the parameterized constructor.  
    class Student4{  
    int id;  
    String name;  
    //creating a parameterized constructor  
    Student4(int i,String n){  
    id = i;  
    name = n;  
    }  
    //method to display the values  
    void display(){System.out.println(id+" "+name);}  
   
    public static void main(String args[]){  
    //creating objects and passing values  
    Student4 s1 = new Student4(111,"Karan");  
    Student4 s2 = new Student4(222,"Aryan");  
    //calling method to display the values of object  
    s1.display();  
    s2.display();  
    }  
    }  

**Constructor overloading** in Java is a technique of having more than one constructor with different parameter lists. 
They are arranged in a way that each constructor performs a different task. They are differentiated by the compiler by 
the number of parameters in the list and their types.

    //Java program to overload constructors  
    class Student5{  
    int id;  
    String name;  
    int age;  
    //creating two arg constructor  
    Student5(int i,String n){  
    id = i;  
    name = n;  
    }  
    //creating three arg constructor  
    Student5(int i,String n,int a){  
    id = i;  
    name = n;  
    age=a;  
    }  
    void display(){System.out.println(id+" "+name+" "+age);}  
   
    public static void main(String args[]){  
    Student5 s1 = new Student5(111,"Karan");  
    Student5 s2 = new Student5(222,"Aryan",25);  
    s1.display();  
    s2.display();  
   }  
}  

![image](https://user-images.githubusercontent.com/45221397/142139963-d21b4fc6-910e-46ba-8147-c075f219eae8.png)


There is no copy constructor in Java. However, we can copy the values from one object to another like copy constructor in C++.

There are many ways to copy the values of one object into another in Java. They are:

By constructor
By assigning the values of one object into another
By clone() method of Object class
