#include "swap.h"

int main(int argc, char const *argv[])
{
    /* code */
    swap myswap(10,20);

    myswap.printInfo();
    myswap.run();
    myswap.printInfo();

    return 0;
}
