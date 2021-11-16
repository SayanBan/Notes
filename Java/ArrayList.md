Java ArrayList class uses a dynamic array for storing the elements. It is like an array, but there is no size limit. We can add or remove elements anytime. 
So, it is much more flexible than the traditional array. It is found in the java.util package.

The important points about Java ArrayList class are:

Java ArrayList class can contain duplicate elements.
Java ArrayList class maintains insertion order.
Java ArrayList class is non synchronized.
Java ArrayList allows random access because array works at the index basis.
In ArrayList, manipulation is little bit slower than the LinkedList in Java because a lot of shifting needs to occur if any element is removed from the array list.

      import java.util.*;  
       public class ArrayListExample1{  
       public static void main(String args[]){  
       ArrayList<String> list=new ArrayList<String>();//Creating arraylist    
       list.add("Mango");//Adding object in arraylist    
       list.add("Apple");    
       list.add("Banana");    
        list.add("Grapes");    
        //Printing the arraylist object   
        System.out.println(list);  
     }  
    }  
    
