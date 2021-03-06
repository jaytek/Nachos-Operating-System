/* halt.c
 *	Simple program to test whether running a user program works.
 *
 *	Just do a "syscall" that shuts down the OS.
 *
 * 	NOTE: for some reason, user programs with global data structures
 *	sometimes haven't worked in the Nachos environment.  So be careful
 *	out there!  One option is to allocate data structures as
 * 	automatics within a procedure, but if you do this, you have to
 *	be careful to allocate a big enough stack to hold the automatics!
 */

#include "syscall.h"

int main(int argc, char *argv[])
{
	int i,number,sum;
	sum=0;
	for (i=0;i<argc;i++){
		//assuming the arguments are one-digit numbers
		number = (int)argv[i][0] - 48;
		sum += number;
	}
	//Exit(argc);
	//Exit((int)argv[0][0] - 48);
	Exit(sum);
}
