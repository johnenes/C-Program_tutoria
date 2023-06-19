#include<stdio.h>
/**
 * main - main block
 * description-"this is the basic block of programming
 * datatype is the most power Reserved keyword or pre-define
 * that help to program.
 * We carry out example of one of the datatype, before then
 * let list the types of dataype used in c
 * 1.int
 * 2.float
 * 3.double
 * 4.char
 * 5.void,this fives types of datatypes are called basic,
 * primary of fundamental.
 * datat type
 * int datatype is divded into short and long
 * the short has a modifier to be signed and unsigned
 * the signed modifier take 2 or 4 depending on your machine
 * the storage space for the signed int ranges from -32768 to
 * 32767. find out her
 * Return:  Alway Success
 */
int main(void)
{
	int a;
	short int sa;
	long int la;
	long long int lla;
	char c;
	float f;

printf("Size of signed int is %d byte()\n", (signed int)sizeof(a));
printf("Size of Unsigned short int is %lu byte(s)\n", (unsigned long)sizeof(a));
printf("Size of Unsigned long int is %lu byte(s)\n", (unsigned long)sizeof(la));
printf("Size of Unsigned long long int is %lu byte(s)\n", (unsigned long)sizeof(lla));
printf("Size of Unsigned char  is %lu \n", (unsigned long)sizeof(c));
printf("Size of unsigned float is %lu \n", (unsigned long)sizeof(f));
return (0);
}

