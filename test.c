#include <stdio.h>
#include <limits.h> //we implement header for limits of integral type
#include <float.h>  //we implement header for floating point types

// this main function will declare and print the minimum and maximum values of different data types
int main() {

    //states what type of integer we will be using 
    printf("Integer Types:\n");

    printf("  Int:              Min = %d,   Max = %d\n", INT_MIN, INT_MAX);         //int type , INT_MIN = minimum value for int and vice versa
    printf("  Unsigned Int:     Min = %d,   Max = %u\n", 0, UINT_MAX);              //unsigned int type
    printf("  Long:             Min = %ld,  Max = %ld\n", LONG_MIN, LONG_MAX);      //Long type
    printf("  Unsigned Long:    Min = %ld,  Max = %lu\n", 0L, ULONG_MAX);            //unsigned long type 

    printf("  Char:             Min = %d,   Max = %d\n", CHAR_MIN, CHAR_MAX);
    printf("  Unsigned Char:    Min = %d,   Max = %u\n", 0, UCHAR_MAX);
    printf("  Short:            Min = %d,   Max = %d\n", SHRT_MIN, SHRT_MAX);
    printf("  Unsigned short:   Min = %d,   Max = %u\n", 0 , USHRT_MAX);

    //Floating Point Types
    printf("\nFloating Types:\n");

    printf("  Float:         Min = %e, Max = %e\n", FLT_MIN, FLT_MAX);
    printf("  Double:        Min = %e, Max = %e\n", DBL_MIN, DBL_MAX);
    printf("  Long Double:   Min = %Le, Max = %Le\n", LDBL_MIN, LDBL_MAX);

    //Showing overflow issues
    printf("\nDemonstrate Overflow:\n");

  int i = 0;                                //initalizing i to zero as our candiadte integer
  int j = (int)(float)i;                    //j initalized to (int)(float)i : here i is converted to a floating point number (float) and then to an integer(int). This means j will always be the integer part of i. Since i is initially 0, j will also be 0.

    while(i==j) {                      //create and enter the while loop. The loop condition is i == j, meaning the loop will continue as long as i and j are equal.
        i++;                           //we increment by 1
        j = (int)(float)i;             //here we recalculate and update j with the same intalized expression. Since i has been incremented, j now holds the integer value of i. when i and j are no longer equal the loop will terminate 
    }

  printf("i=%d\nj=%d\n", i, j);         //call and print i and j

}
