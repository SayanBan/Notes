In DDA, we use Xinc and Y inc

Step = The greater number between mod of Delx and Del y
Xinc = Delx/Step
Yinc = Dely/Step

Disadvantage of bresenham: DDA uses Xinc and Yinc where it calculates the numbers in decimal and then in order to obtain the pixels , it rounds off the decimal numbers.
  now for that, it uses Xinc and Yinc which needs the use of Float data type. This whole process of first dividing and then calculating and then rounding off to get 
  the pixel coordinate takes more time than just using integers.
  So, to avoid this longer processing time, Bresenham algorithm is used.
