#include <iostream>
using namespace std;

// Containers
/* 1. Sequence containers --> Linear fashion to stores the data
                            //   Example: Vector, List, Dequeue
                              searching, insertion, deletion process is slow

*/
/* 2. Associative containers --> Direct access, stores data like tree structure
                                 Example: set, multiset, map, multimap
                                 Use for fast searching, deletion, accessing
*/

/* 3. Derived containers --> Real world modelling
                             Example: stack, queue, priority queue
*/

// 1. Sequence containers:
/*  1. vector: random access is fast
               insertion and deletion at the middle is slow
               insertion and deletion at the end is fast
*/
/* 2. List: random access is slow
            middle insertion, deletion is fast
            insetion, deletion at the end is also fast
*/

// 2. Associative containers: All operations are fast except random access operation. Because all data arrange in tree forms

// 3. Derive containers: Depends on data structures

int main()
{
    return 0;
}