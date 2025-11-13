AIM: 
To design a C program using recursive functions .

THEME: 
Develop a C program to calculate the sum of all the first ten numbers using recursive function call & pointers.
The program should define a recursive function that takes a pointer to integer as argument & returns sum of all first ten numbers. Within the function, recursion should be used to compute the sum iteratively. Finally, program should display calculated sum.


RESEARCH: 
https://www.w3schools.com/c/

https://www.geeksforgeeks.org/c/c-programming-language/

https://www.tutorialspoint.com/cprogramming/c_structures.htm


HOW IT WORKS:
1. Function Used: decimaltobinary(int n)
This function prints the binary equivalent of a given decimal number.
 It uses recursion, which means the function calls itself repeatedly until a base condition is reached.
Working Step-by-Step:
(a) Base Condition
if(n == 0){
    return;
}

When n becomes 0, the function stops calling itself.


This prevents infinite recursion.



(b) Recursive Call
decimaltobinary(n / 2);

The number n is divided by 2 in each step.


This moves the function toward the base condition.


It also ensures the binary digits appear in the correct order.


Why divide by 2?
 Because binary is base-2, and dividing by 2 helps break the number into bits.

(c) Printing the Bit
printf("%d", n % 2);

n % 2 gives the remainder when n is divided by 2.


This remainder is either 0 or 1, which is exactly what a binary digit is.



2. How Recursion Produces Correct Order
Binary representation is found by repeatedly dividing by 2 and writing the remainders from last to first.
Example:
 If you input 10:
Step
n
n/2
n%2 (bit)
1
10
5
0
2
5
2
1
3
2
1
0
4
1
0
1

Binary (reverse of remainders): 1010
Because recursion prints the remainder after the recursive call, the bits come out in the correct order automatically.

3. main() Function
printf("Enter Your Number:");
scanf("%d", &n1);
printf("Binary is: ");
decimaltobinary(n1);

Takes a number from the user.


Calls the recursive function.


Prints the binary result.



Final Summary (Short and Perfect for Report)
This program converts a decimal number to binary using a recursive approach. The recursive function repeatedly divides the number by 2 until it becomes zero. After each recursive call, it prints the remainder (n % 2), which corresponds to one binary digit. Because the printing happens after the recursive call, the binary digits appear in the correct order. Thus, the program efficiently converts and displays the binary equivalent of any positive decimal number.

AIM: 
To design a C program using recursive functions .

THEME: 
Develop a C program to calculate the sum of all the first ten numbers using recursive function call & pointers.
The program should define a recursive function that takes a pointer to integer as argument & returns sum of all first ten numbers. Within the function, recursion should be used to compute the sum iteratively. Finally, program should display calculated sum.


RESEARCH: 
https://www.w3schools.com/c/

https://www.geeksforgeeks.org/c/c-programming-language/

https://www.tutorialspoint.com/cprogramming/c_structures.htm


HOW IT WORKS:
1. Function Used: decimaltobinary(int n)
This function prints the binary equivalent of a given decimal number.
 It uses recursion, which means the function calls itself repeatedly until a base condition is reached.
Working Step-by-Step:
(a) Base Condition
if(n == 0){
    return;
}

When n becomes 0, the function stops calling itself.


This prevents infinite recursion.



(b) Recursive Call
decimaltobinary(n / 2);

The number n is divided by 2 in each step.


This moves the function toward the base condition.


It also ensures the binary digits appear in the correct order.


Why divide by 2?
 Because binary is base-2, and dividing by 2 helps break the number into bits.

(c) Printing the Bit
printf("%d", n % 2);

n % 2 gives the remainder when n is divided by 2.


This remainder is either 0 or 1, which is exactly what a binary digit is.



2. How Recursion Produces Correct Order
Binary representation is found by repeatedly dividing by 2 and writing the remainders from last to first.
Example:
 If you input 10:
Step
n
n/2
n%2 (bit)
1
10
5
0
2
5
2
1
3
2
1
0
4
1
0
1

Binary (reverse of remainders): 1010
Because recursion prints the remainder after the recursive call, the bits come out in the correct order automatically.

3. main() Function
printf("Enter Your Number:");
scanf("%d", &n1);
printf("Binary is: ");
decimaltobinary(n1);

Takes a number from the user.


Calls the recursive function.


Prints the binary result.



Final Summary (Short and Perfect for Report)
This program converts a decimal number to binary using a recursive approach. The recursive function repeatedly divides the number by 2 until it becomes zero. After each recursive call, it prints the remainder (n % 2), which corresponds to one binary digit. Because the printing happens after the recursive call, the binary digits appear in the correct order. Thus, the program efficiently converts and displays the binary equivalent of any positive decimal number.


AIM: 
To design a C program using recursive functions .

THEME: 
Develop a C program to calculate the sum of all the first ten numbers using recursive function call & pointers.
The program should define a recursive function that takes a pointer to integer as argument & returns sum of all first ten numbers. Within the function, recursion should be used to compute the sum iteratively. Finally, program should display calculated sum.


RESEARCH: 
https://www.w3schools.com/c/

https://www.geeksforgeeks.org/c/c-programming-language/

https://www.tutorialspoint.com/cprogramming/c_structures.htm


HOW IT WORKS:
1. Function Used: decimaltobinary(int n)
This function prints the binary equivalent of a given decimal number.
 It uses recursion, which means the function calls itself repeatedly until a base condition is reached.
Working Step-by-Step:
(a) Base Condition
if(n == 0){
    return;
}

When n becomes 0, the function stops calling itself.


This prevents infinite recursion.



(b) Recursive Call
decimaltobinary(n / 2);

The number n is divided by 2 in each step.


This moves the function toward the base condition.


It also ensures the binary digits appear in the correct order.


Why divide by 2?
 Because binary is base-2, and dividing by 2 helps break the number into bits.

(c) Printing the Bit
printf("%d", n % 2);

n % 2 gives the remainder when n is divided by 2.


This remainder is either 0 or 1, which is exactly what a binary digit is.



2. How Recursion Produces Correct Order
Binary representation is found by repeatedly dividing by 2 and writing the remainders from last to first.
Example:
 If you input 10:
Step
n
n/2
n%2 (bit)
1
10
5
0
2
5
2
1
3
2
1
0
4
1
0
1

Binary (reverse of remainders): 1010
Because recursion prints the remainder after the recursive call, the bits come out in the correct order automatically.

3. main() Function
printf("Enter Your Number:");
scanf("%d", &n1);
printf("Binary is: ");
decimaltobinary(n1);

Takes a number from the user.


Calls the recursive function.


Prints the binary result.



Final Summary (Short and Perfect for Report)
This program converts a decimal number to binary using a recursive approach. The recursive function repeatedly divides the number by 2 until it becomes zero. After each recursive call, it prints the remainder (n % 2), which corresponds to one binary digit. Because the printing happens after the recursive call, the binary digits appear in the correct order. Thus, the program efficiently converts and displays the binary equivalent of any positive decimal number.
