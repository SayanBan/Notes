In DDA, we use Xinc and Y inc

Step = The greater number between mod of Delx and Dely
Xinc = Delx/Step
Yinc = Dely/Step

Disadvantage of bresenham: DDA uses Xinc and Yinc where it calculates the numbers in decimal and then in order to obtain the pixels , it rounds off the decimal numbers.
  now for that, it uses Xinc and Yinc which needs the use of Float data type. This whole process of first dividing and then calculating and then rounding off to get 
  the pixel coordinate takes more time than just using integers.
  So, to avoid this longer processing time, Bresenham algorithm is used.
  
  ![Capture](https://user-images.githubusercontent.com/45221397/102705343-cca36300-42ac-11eb-8aa1-07851e5b24e1.JPG)

We Xk = 1, so (Xk + 1) is the next point, so we think that the line is going between 2 pixels, so according to
Bresenham, we take the nearest pixel. Now , d1 and d2 are the distance of the line from the two pixels respectively.

**Derivation starts from here :)**

At the beginning, we are in the first pixel.
everytime Xk increses by 1, so the next one would be Xk+1 !
Now as the slope(m) < 1, so with increase of x , Y may or may not increase. So the Xnext will always be Xk+1 but 
the Ynext can be either Yk or Y(k+1) .

Now we are in the pixel Xk and we are calculating for the pixel X(k+1)

Now as we have assumed that the point is passing through x=X(k+1), 

For d1, Y=mx+c

For D2, Y = m(Xk+1) +c

Again from the picture, 

d1 = Actual Y - Yk
d2 = Y(k+1) - actual Y

=> d1 = m(Xk+1) -Yk
   d2 = Yk+1 - m(Xk + 1) - c
   
   if d1-d2>0 which means Yk would be same
      d1-d2<0 which means we have to increase yk by 1, i.e., Yk + 1
      
 ![Capture](https://user-images.githubusercontent.com/45221397/102706092-f95b7880-42b4-11eb-8412-2dd1393baee7.JPG)

**Now, Multiplying both sidex with dx to remove denominator in order to remove usage of Float,**

![Capture](https://user-images.githubusercontent.com/45221397/102706605-548f6a00-42b9-11eb-8503-293570e7c209.JPG)


If we calculate Pnext - Pk, we can get the decision

If Pnext - Pk <0 , remain on the same Yk
If Pnext - Pk >0,  Yk+1

![Capture](https://user-images.githubusercontent.com/45221397/102706952-750cf380-42bc-11eb-8b94-48a0ef59ea71.JPG)

![Capture](https://user-images.githubusercontent.com/45221397/102707027-33c91380-42bd-11eb-98d4-de26879e813f.JPG)


 
 
   


