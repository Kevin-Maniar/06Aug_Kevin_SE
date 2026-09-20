/*
	Write two functions: 
	increaseFollowersByValue and increaseFollowersByReference. 
	Each should take a followers count and add 1000 to it, 
	but one should use pass-by-value and the other pass-by-reference. 
	Show how the original followers count changes (or doesn't) after calling each function.
*/

#include <stdio.h>

// Pass-by-value: gets a copy, original is untouched
	void increaseFollowersByValue(int followers) 
	{
    followers += 1000;
//    printf("Inside increaseFollowersByValue: %d\n", followers);
}

// Pass-by-reference (via pointer): gets the address, original is modified
	void increaseFollowersByReference(int *followers) 
	{
    *followers += 1000;   // dereference and modify the original
//    printf("Inside increaseFollowersByReference: %d\n", *followers);
}

int main() {
    int myFollowers = 500;

    increaseFollowersByValue(myFollowers);
    printf("After increaseFollowersByValue, original: %d\n\n", myFollowers);
    // Output: 500 (unchanged)

    increaseFollowersByReference(&myFollowers);   // pass the address with &
    printf("After increaseFollowersByReference, original: %d\n", myFollowers);
    // Output: 1500 (changed)

    return 0;
}
