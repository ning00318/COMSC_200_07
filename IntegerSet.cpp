#include <iostream>
#include "IntegerSet.h"
using namespace std;

// Comment: The constructor initializes each elements to false
//          in the set vector that hold integers in the range 0 - 100.
IntegerSet::IntegerSet()
    : set(SIZE, false)
{
}

// Comment: Create a new set "result" as the third set and return its
//          consequence without modifying either of them.
IntegerSet IntegerSet::unionOfSets(const IntegerSet &set2) const
{
    IntegerSet result;
    for (int i = 0; i < SIZE; i++)
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
    for (int i = 0; i < SIZE; i++)
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

// Comment: Set set[k] to true if the provided integer, k, is within the range.
void IntegerSet::insertElement(int k)
{
    if (k >= 0 && k < SIZE)
        set[k] = true;
    else
        cout << "Insert element is out of range." << endl;
}

// Comment: Set set[m] to false if the provided integer, m, is within the range.
void IntegerSet::deleteElement(int m)
{
    if (m >= 0 && m < SIZE)
        set[m] = false;
    else
        cout << "Delete element is out of range." << endl;
}

void IntegerSet::printSet() const
{
    bool isEmpty = true;
    cout << "{ ";
    for (int i = 0; i < SIZE; i++)
    {
        if (set[i])
        {
            cout << i << " ";
            isEmpty = false;
        }
    }
    if (isEmpty)
        cout << "--";
    cout << " }";
}

bool IntegerSet::isEqualTo(const IntegerSet &set2) const
{
    for (int i = 0; i < SIZE; i++)
    {
        if (this->set[i] != set2.set[i])
            return false;
    }
    return true;
}

void IntegerSet::inputSet()
{

}

IntegerSet::IntegerSet(const int array[], int arraySize)
{

}