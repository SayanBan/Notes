String is an object that represents sequence of characters. In Java, String is represented by String class which is located into java.lang package

It is probably the most commonly used class in java library. In java, every string that we create is actually an object of type String. 
One important thing to notice about string object is that string objects are immutable that means once a string object is created it cannot be changed.

What is an Immutable object?
An object whose state cannot be changed after it is created is known as an Immutable object. 
String, Integer, Byte, Short, Float, Double and all other wrapper classes objects are immutable.

Creating a String object
String can be created in number of ways, here are a few ways of creating string object.

String literal is a simple string enclosed in double quotes " ". A string literal is treated as a String object.

public class Demo{    
    public static void main(String[] args) {  
    	String s1 = "Hello Java";
    	System.out.println(s1);
    }  
} 

OUTPUT
Hello Java

String objects are stored in a special memory area known as string constant pool inside the heap memory.
