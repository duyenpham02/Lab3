# Lab3

1. n = 5, sum = 15
   n = 50, sum = 1275
   n = 100, sum = 5050
   n = 255, sum = 32640
   
2. n = 260, sum = -31606
   n = 300, sum = - 20386
   It is an overflow because it exceed the maximum number that the variable can store, an overflow occurs, which cause the sign bit to become negative.
 
 
3. n = 100, sum = 5050
   n = 500, sum = 125250
   n = 1000, sum = 500500
   n = 10000, sum = 50005000
   n = 9000000, sum = -1537101280 -> overflow
   
  
  4.  n = 35, product = inf
      n = 100, product = inf -> overflow
  The factorial function returns infinity, which in this case indicate an overflow.
  
  5.  n = 171, product = inf -> overflow
  
  6. When the function has float as a data type for both the ratio and the result:
  n = 5, f(n) = 0
  n = 15, f(n) = 0
  n = 20, f(n) = 1.19209e-07
  The results are like this because the floating point data type can only store to a certain decimal places and 1 divided by a very large number would result to overflow, therefore, there are some outputs that has certain answers and some is equal to 0.
  
  7. The numeric error happened in this problem is when the output "i = " has 4.4 as its output, which is not correct at all since the variable i must be less than 4.4. However, if we use double, the outputs of the variable i don't have 4.4 as its output. This happened because floating-point numbers can be mistakenly assumed that they can represent any simple fraction exactly.
  
 
  
    
  
   
   
   
