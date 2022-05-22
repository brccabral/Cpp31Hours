#include <iostream>

int main()
{
    /*
    // may fail because the array is too large for memory to handle
    //int * data = new int[10000000000000000]; //

    for(size_t i{0} ; i < 10000000 ; ++i){
        int * data = new int[100000000];
    }
    */

    // exception
    /*
    // will fail because we are creating too many large arrays
     for(size_t i{0} ; i < 100 ; ++i){
         try{
             int * data = new int[1000000000];
         }catch(std::exception& ex){
             std::cout << "  Something went wrong : " << ex.what() << std::endl;
         }
     }
     */

    // std::nothrow
    // this will not throw exception, but will return a null pointer that needs to be verified
    for (size_t i{0}; i < 100; ++i)
    {

        int *data = new (std::nothrow) int[1000000000];

        if (data != nullptr)
        {
            std::cout << "Data allocated" << std::endl;
        }
        else
        {
            std::cout << "Data allocation failed" << std::endl;
        }
    }

    std::cout << "Program ending well" << std::endl;

    return 0;
}