The Exception Handling in Java is one of the powerful mechanism to handle the runtime errors so that the normal flow of the application can be maintained.

# What is Exception in Java?

In Java, an exception is an event that disrupts the normal flow of the program. It is an object which is thrown at runtime.

Exception Handling is a mechanism to handle runtime errors such as **ClassNotFoundException, IOException, SQLException, RemoteException**, etc.

The core advantage of exception handling is to maintain the normal flow of the application. An exception normally disrupts 
the normal flow of the application; that is why we need to handle exceptions. Let's consider a scenario:

Suppose there are 10 statements in a Java program and an exception occurs at statement 5; the rest of the code will not be executed, i.e., statements 6 to 10 
will not be executed. However, when we perform exception handling, the rest of the statements will be executed. That is why we use exception handling in Java.

# Difference between Checked and Unchecked Exceptions
**1) Checked Exception**
The classes that directly inherit the Throwable class except RuntimeException and Error are known as checked exceptions. For example, IOException, SQLException, etc. Checked exceptions are checked at compile-time.

**2) Unchecked Exception**
The classes that inherit the RuntimeException are known as unchecked exceptions. For example, ArithmeticException, NullPointerException, ArrayIndexOutOfBoundsException, etc. Unchecked exceptions are not checked at compile-time, but they are checked at runtime.

**3) Error**
Error is irrecoverable. Some example of errors are OutOfMemoryError, VirtualMachineError, AssertionError etc.

![lol](https://user-images.githubusercontent.com/45221397/142025019-f00d81fb-ca80-4ae2-bc9a-f32d550248ba.JPG)

    public class JavaExceptionExample{  
    public static void main(String args[]){  
    try{  
        //code that may raise exception  
        int data=100/0;  
     }catch(ArithmeticException e){System.out.println(e);}  
     //rest code of the program   
     System.out.println("rest of the code...");  
    }  
    }  
    
 
