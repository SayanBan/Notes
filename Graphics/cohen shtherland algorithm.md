Step1:Calculate positions of both endpoints of the line

Step2:Perform OR operation on both of these end-points

Step3:If the OR operation gives 0000
       Then
                line is considered to be visible
       else
          Perform AND operation on both endpoints
      If And ≠ 0000
          then the line is invisible
        else
      And=0000
    Line is considered the clipped case.

Step4:If a line is clipped case, find an intersection with boundaries of the window
                m=(y2-y1 )(x2-x1)

(a) If bit 1 is "1" line intersects with left boundary of rectangle window
                y3=y1+m(x-X1)
                where X = Xwmin
                where Xwminis the minimum value of X co-ordinate of window

(b) If bit 2 is "1" line intersect with right boundary
                y3=y1+m(X-X1)
                where X = Xwmax
                where X more is maximum value of X co-ordinate of the window

(c) If bit 3 is "1" line intersects with bottom boundary
                X3=X1+(y-y1)/m
                      where y = ywmin
                ywmin is the minimum value of Y co-ordinate of the window

(d) If bit 4 is "1" line intersects with the top boundary
                X3=X1+(y-y1)/m
                      where y = ywmax
                ywmax is the maximum value of Y co-ordinate of the window
