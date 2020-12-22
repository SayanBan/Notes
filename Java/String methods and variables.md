In the Java language, a static keyword is implemented to make a class-level variable. 
Hence variables and methods having the static keyword act as part of the class and not as the class instance.

**VARIABLE**

A static variable is common to all the instances (or objects) of the class because it is a class level variable. 
In other words you can say that only a single copy of static variable is created and shared among all the instances of the class. 
Memory allocation for such variables only happens once when the class is loaded in the memory.

class JavaExample3{
  static int var1;
  static String var2;
  //This is a Static Method
  static void disp(){
      System.out.println("Var1 is: "+var1);
      System.out.println("Var2 is: "+var2);
  }
  public static void main(String args[]) 
  {
      disp();
  }
}

Output:

Var1 is: 0
Var2 is: null

**Method**

Static Methods can access class variables(static variables) without using object(instance) of the class, 
however non-static methods and non-static variables can only be accessed using objects.
Static methods can be accessed directly in static and non-static methods.

Syntax:
Static keyword followed by return type, followed by method name.

static return_type method_name();

Example 1: static method main is accessing static variables without object
class JavaExample{
   static int i = 10;
   static String s = "Sayan";
   //This is a static method
   public static void main(String args[]) 
   {
       System.out.println("i:"+i);
       System.out.println("s:"+s);
   }
}
Output:

i:10
s:Sayan


**Static Block** 

Static block is used for initializing the static variables.This block gets executed when the class is loaded in the memory. A class can have multiple Static blocks, which will execute in the same sequence in which they have been written into the program.

Example 1: Single static block
As you can see that both the static variables were intialized before we accessed them in the main method.

class JavaExample{
   static int num;
   static String mystr;
   static{
      num = 97;
      mystr = "Static keyword in Java";
   }
   public static void main(String args[])
   {
      System.out.println("Value of num: "+num);
      System.out.println("Value of mystr: "+mystr);
   }
}
Output:

Value of num: 97
Value of mystr: Static keyword in Java
