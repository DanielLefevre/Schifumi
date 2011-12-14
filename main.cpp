#include <iostream>
#include "Coup.h"
#include "Ciseaux.h"

using namespace std;

int main()
{
    Ciseaux c = Ciseaux();
    std::cout << c.type() << std::endl;
    return 0;
}
