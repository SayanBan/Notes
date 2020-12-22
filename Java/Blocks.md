**BLOCK**

Instance Initializer block is used to initialize the instance data member. It run each time when object of the class is created.

EXample

class Bike7{  
    int speed;  
      
    Bike7(){System.out.println("speed is "+speed);}  
   
    {speed=100;}  
       
    public static void main(String args[]){  
    Bike7 b1=new Bike7();  
    Bike7 b2=new Bike7();  
    }      
}  

**STATIC BLOCK**

Java programming language offers a block known as static that runs before the execution of the main method. 
Below is an example to understand its functioning. Later, we see its practical use.

class StaticBlock {
  public static void main(String[] args) {
    System.out.println("Main method is executed.");
  }
 
  static {
    System.out.println("Static block is executed before main method.");
  }
}
