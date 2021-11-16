import java.util.Scanner;
public class Programming
{

 public static void main(String[] args)
 {
  int Number,ReverseNumber=0,Lastdigit,OriginalNumber;
  Boolean Prime=false;
  Scanner input=new Scanner(System.in);
  System.out.print("enter N value:");
  Number=input.nextInt();
  input.close();
  OriginalNumber=Number;
  while(Number!=0)
  {
	Lastdigit=Number%10;
	ReverseNumber=ReverseNumber*10+Lastdigit;
	Number=Number/10;
  }
  if(OriginalNumber==ReverseNumber) 
  {
	  for(int i=2;i<OriginalNumber;i++)
	  {
		if((OriginalNumber%i)==0)
		{
			Prime=true;
			break;
		}
	  }

	  if(Prime==true)
	  {
		System.out.println("Number is not Prime Palindrome");
	  }
	  else
	  {
		System.out.println("Number is Prime Palindrome");
	  }
  }
  else
  {
	  System.out.println("Number is not Prime Palindrome");
  }
	
 }
}
