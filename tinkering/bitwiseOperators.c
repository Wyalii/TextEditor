#include <stdio.h>
void bitwiseAnd()
{
    // bitwise AND (&)
    int a = 7; // in binary = 111
    int b = 4; // in binary = 100
    printf("%d\n", a & b);
    // & opeartor compares each bit and only keeps 1 if both bit on same index is 1 else it sets it to 0
    // 111
    // &  = 100 = 4 as integer
    // 100
}

void bitwiseOr()
{
    // bitwise OR(|)
    int a = 7;
    int b = 4;
    printf("%d\n", a | b);
    // | operator compares each bit and prints 1 if any bit is 1 if none are 1 then it sets to 0.
    // 111
    // | = 111 = 7 as integer
    // 100
}
void bitwiseXor()
{
    // ^ bitwise XOR (^)
    int a = 7;
    int b = 4;
    printf("%d\n", a ^ b);
    // ^ operator comapres each int and sets 1 if both bits are different else sets to 0.
    // 111
    // ^ = 011 = 3 as integer
    // 100
}
void bitwiseNot()
{
    // ^ bitwise NOT (~)
    int a = 7; // = 111
    int b = 4; // = 100
    printf("%d\n", ~a);
    printf("%d\n", ~b);
    // operator flips every bit of integer to its reciprocal, 1 becomes 0 and 0 becomes 1.
    // ~111 = 000
    // ~100 = 011
}
void bitwiseLeftShift()
{
    // bitwise left shift (<<)
    int a = 7;
    int b = 4;
    printf("%d\n", a << b);
    // basically shifts bites of integer a by b amount of places
    // 7 = 00000111
    // after a << b, 7 = 01110000 as integer is 112
}
int main()
{
    bitwiseLeftShift();
    return 0;
}
