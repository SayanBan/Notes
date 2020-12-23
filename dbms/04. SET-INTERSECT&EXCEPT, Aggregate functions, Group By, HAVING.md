***SET*** - Returns distinct rows by comparing the results of two queries

***INTERSECT*** - The intersect clause is used to provide the result of the intersection of two select statements. 
                  This implies the result contains all the rows which are common to both the SELECT statements.
                  
***EXCEPT*** - This works exactly opposite to the INTERSECT clause. 
               The result, in this case, contains all the rows except the common rows of the two SELECT statements.
               
***UNION*** - The UNION operator is used to combine the result-set of two or more SELECT statements.
              
              SELECT column_name(s) FROM table1
              UNION
              SELECT column_name(s) FROM table2; 
              
*UNION Excludes Duplicates while UNION ALL includes duplicates.*

***Agregate Function*** - In database management an aggregate function is a function where the values of multiple rows are 
                          grouped together as input on certain criteria to form a single value of more significant meaning.
                          
                          1) Count()
                          2) Sum()
                          3) Avg()
                          4) Min()
                          5) Max()
                          
***GROUP BY*** - The GROUP BY statement groups rows that have the same values into summary rows. 

***HAVING*** - The HAVING clause was added to SQL because the WHERE keyword could not be used with aggregate functions.
               
               SELECT COUNT(CustomerID), Country
               FROM Customers
               GROUP BY Country
               HAVING COUNT(CustomerID) > 5;
               
