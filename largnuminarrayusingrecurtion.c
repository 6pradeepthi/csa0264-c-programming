/*
 * C Program to find the largest number in an array using recursion
 */
 
#include <stdio.h>
#include <math.h>
//Function to find max of two numbers
int max(int a,int b)
{
    if(a>b)
    return a;
    else
    return b;
}
int largest(int arr[],int size,int i)
{
    if(i == size-1)
    return arr[i];
    return max(arr[i], largest(arr,size,i+1));
}
int main()
{
    int size;
    printf("Enter Size of Array: ");
    scanf("%d",&size);
 
    //Declaring array
    int arr[size];
 
    //Input array elements
    printf("Enter Array Elements: ");
    for(int i=0;i<size;i++)
    scanf("%d",&arr[i]);
    printf("Largest Element is: %d",largest(arr,size,0));
 
    return 0;
}
Program Explanation
1. Take the size of the array as input from the user.
2. Using for loop, take array element as input from users and insert them into the array.
3. Declare a function to find the largest element of the array which returns max between the current element and all other elements with base stops when the array is traversed.
4. Print the value returned by the function as the largest element.

Time Complexity: O(n)
As there are n function calls, the time complexity is O(n).

Space Complexity: O(n)
Space is required to store the array, so space complexity is O(n).

Runtime Test Cases
Here is the runtime output of the C program where the user is reading array of 5 elements with values as 7, 2, 4, 1, and 5. Then it finds out the largest element and displays its value.

Enter the size of the array: 5
Enter Array Elements: 7 2 4 1 5
Largest Element is: 7

Method 3: Largest Element of an Array in C using Function
In this approach, we declare a function in which we assume that the first element of an array is the largest. After that we traverse the array and if the current element is greater than the largest element, we update the largest element. At the end of the function, return the largest element.

Example:

Array: [11, 34, 21, 100]

Initially, Largest Element: 11

Now we start traversing the array.

Index: 1
Index element > Largest Element, so updating the largest element with 34.

Index: 2
Index element < Largest Element, so largest element remains the same i.e. 34.

Index: 3
Index element > Largest Element, so updating the largest element with 100

So Largest Element is 100

Program/Source Code
Here is the source code of the C Program to find the largest number in an array using function. The program is successfully compiled and tested using Turbo C compiler in windows environment. The program output is also shown below.

/*
 * C Program to find the largest number in an array using function
 */
 
#include <stdio.h>
#include <math.h>
int largest(int arr[],int size)
{
    //Declaring Largest element as the first element
    int largest=arr[0];
    for(int i=1;i<size;i++)
    {
        //Updating largest element if current element is greater than largest element
        if(arr[i] > largest)
        largest=arr[i];
    }
    return largest;
}
int main()
{
    int size;
    printf("Enter Size of Array: ");
    scanf("%d",&size);
 
    //Declaring array
    int arr[size];
 
    //Input array elements
    printf("Enter Array Elements: ");
    for(int i=0;i<size;i++)
    scanf("%d",&arr[i]);
    printf("Largest Element is: %d",largest(arr,size));
 
    return 0;
}
Program Explanation
1. Take the size of the array as input from the user.
2. Using for loop, take array element as input from users and insert them into the array.
3. Declare the function to find the largest element.
4. Inside the function, initialize the largest element as the first element of the array.
5. Traverse the array and if the current element is greater than largest element, update the largest element.
6. Return and print the largest element.

Time Complexity: O(n)
In the program, we are traversing the array, so the time complexity is O(n).

Space Complexity: O(n)
Space is required to store the array, so space complexity is O(n).

Runtime Test Cases
Here is the runtime output of the C program where the user is reading array of 4 elements with values as 11, 34, 21, and 100. Then it finds out the largest element and displays its value.

Enter the size of the array: 4
Enter Array Elements: 11 34 21 100
Largest Element is: 100

Method 4: Largest Element of an Array in C using Pointers
In this approach, we find the largest element of an array using the pointers. We declare a function to find the largest element which takes the array, its size and pointer to the largest element. We traverse the complete array and if current element is greater than the largest element, we update the largest element pointer. At first we assume that the first element is the largest. After that we traverse the array and if the current element is greater than the largest element, we update the largest element.

Example:

Array: [2, 5, 21, 9]

Initially, Largest Element: 2

Now we start traversing the array.

Index: 1
Index element > Largest Element, so updating the largest element with 5.

Index: 2
Index element > Largest Element, so updating the largest element with 21.

Index: 3
Index element < Largest Element, so Largest element remains the same i.e 21.

So Largest Element is 21

Program/Source Code
Here is the source code of the C Program to find the largest number in an array using pointers. The program is successfully compiled and tested using Turbo C compiler in windows environment. The program output is also shown below.

/*
 * C Program to find the largest number in an array using pointers
 */
 
#include <stdio.h>
#include <math.h>
void largest_elem(int arr[],int size,int *largest)
{
    //Declaring Largest element as the first element
    *largest=arr[0];
    for(int i=1;i<size;i++)
    {
        //Updating largest element if current element is greater than largest element
        if(arr[i] > *largest)
        *largest=arr[i];
    }
}
int main()
{
    int size;
    printf("Enter Size of Array: ");
    scanf("%d",&size);
 
    //Declaring array
    int arr[size],largest;
 
    //Input array elements
    printf("Enter Array Elements: ");
    for(int i=0;i<size;i++)
    scanf("%d",&arr[i]);
    largest_elem(arr,size,&largest);
    printf("Largest Element is: %d",largest);
 
    return 0;
    }
