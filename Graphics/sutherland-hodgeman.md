***Sutherland-Hodgeman Polygon Clipping***

It is performed by processing the boundary of polygon against each window corner or edge. 
First of all entire polygon is clipped against one edge, then resulting polygon is considered, 
then the polygon is considered against the second edge, so on for all four edges.

Four possible situations while processing

   * If the first vertex is an outside the window, the second vertex is inside the window. Then second vertex is added to the output list. 
    The point of intersection of window boundary and polygon side (edge) is also added to the output line.
    
   * If both vertexes are inside window boundary. Then only second vertex is added to the output list.
    
   * If the first vertex is inside the window and second is an outside window. The edge which intersects with window is added to output list.

   * If both vertices are the outside window, then nothing is added to output list.

***Disadvantages***

This method requires a considerable amount of memory. The first of all polygons are stored in original form. Then clipping against left edge done and output is stored. Then clipping against right edge done, then top edge. Finally, the bottom edge is clipped. Results of all these operations are stored in memory. So wastage of memory for storing intermediate polygons.
