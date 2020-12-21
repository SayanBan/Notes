Step1: Start Algorithm

Step2: Declare x1,y1,x2,y2,dx,dy,x,y as integer variables.

Step3: Enter value of x1,y1,x2,y2.

Step4: Calculate dx = x2-x1

Step5: Calculate dy = y2-y1

Step6: If ABS (dx) > ABS (dy)
            Then step = abs (dx)
            Else

Step7: xinc=dx/step
            yinc=dy/step
            assign x = x1
            assign y = y1

Step8: Set pixel (x, y)

Step9: x = x + xinc
            y = y + yinc
            Set pixels (Round (x), Round (y))

Step10: Repeat step 9 until x = x2

Step11: End Algorithm
