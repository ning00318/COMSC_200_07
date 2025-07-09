#include <iostream>
#include "IntegerSet.h"
using namespace std;

// Comment: The constructor initializes each elements to false
//          in the set vector that hold integers in the range 0 - 100.
IntegerSet::IntegerSet()
    : set(101, false)
{
}

// Comment: Create a new set "result" as the third set and return its
//          consequence without modifying either of them.
IntegerSet IntegerSet::unionOfSets(const IntegerSet &set2) const
{
    IntegerSet result;
    for (int i = 0; i < set.size(); i++)
    {
        // Comment: If the element is true in either set, set it
        //          to true in the result, otherwise, set it to false.
        if (this->set[i] || set2.set[i])
            result.set[i] = true;
        else
            result.set[i] = false;
    }
    return result;
}

IntegerSet IntegerSet::intersectionOfSets(const IntegerSet &set2) const
{
    IntegerSet result;
    for (int i = 0; i < set.size(); i++)
    {
        // Comment: If the element is true in both sets, set it
        //          to true in the result, otherwise, set it to false.
        if (this->set[i] && set2.set[i])
            result.set[i] = true;
        else
            result.set[i] = false;
    }
    return result;
}

void IntegerSet::insertElement(int k)
{

}

void IntegerSet::deleteElement(int m)
{

}

void IntegerSet::printSet() const
{

}

bool IntegerSet::isEqualTo(const IntegerSet &set2) const
{

}

void IntegerSet::inputSet()
{

}

IntegerSet::IntegerSet(const int array[], int arraySize)
{

}