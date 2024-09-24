#include <iostream>
#include "Library.h"

using namespace std;

int main()
{
    Library b(1);
    
    b.make_shelves();
    b.add_book(0, "Davis", "King", 3, 3, 1, 4114, 0, 0);
    b.print_shelves();
}
