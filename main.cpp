#include <iostream>

int main()
{

    // Memory leak = create variable on HEAP but don't delete (or loose access to it,
    //   or use ptr to another HEAP variable)

    /*
    // here ptr is on HEAP
    int *p_number {new int{67}}; // Points to some address, let's call that address1

    //Should delete and reset here

    // number is on STACK
    int number{55}; // stack variable

    // changing the ptr from HEAP to STACK will leak the HEAP, because we lost the
    // possibility to delete the HEAP
    p_number = &number; // Now p_number points to address2 , but address1 is still in use by
                        // our program. But our program has lost access to that memory location.
                        //Memory has been leaked.
    */

    // Double allocation
    /*
    // we put value on the HEAP
    int *p_number1 {new int{55}};

    //Use the pointer

    //Should delete and reset here.

    // we lost access to 55 because it is on HEAP
    p_number1 = new int{44}; // memory with int{55} leaked.

    delete p_number1;
    p_number1 = nullptr;
    */

    /*

    //Nested scopes with dynamically allocated memory
    {
        int *p_number2 {new int{57}};

        // the ptr is on local scope, but 57 is on HEAP
        // when scope ends, ptr is going to die but 57 will stay on HEAP

        //Use the dynamic memory

    }
    //Memory with int{57} leaked.

    */

    return 0;
}