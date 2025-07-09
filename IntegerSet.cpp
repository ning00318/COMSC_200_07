#include <iostream>
#include "IntegerSet.h"
using namespace std;

// Comment 4: The constructor initializes each elements to false
//            in the set vector that hold integers in the range 0 - 100.
IntegerSet::IntegerSet()
    : set(SIZE, false)
{
}

// Comment 5: Create a new set "result" as the third set and return its
//            consequence without modifying either of them.
IntegerSet IntegerSet::unionOfSets(const IntegerSet &set2) const
{
    IntegerSet result;
    for (int i = 0; i < SIZE; i++)
    {
        // Comment 6: If the element is true in either set, set it
        //            to true in the result, otherwise, set it to false.
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
        // Comment 7: If the element is true in both sets, set it
        //            to true in the result, otherwise, set it to false.
        if (this->set[i] && set2.set[i])
            result.set[i] = true;
        else
            result.set[i] = false;
    }
    return result;
}

// Comment 8: Set set[k] to true if the provided integer, k, is within the range.
void IntegerSet::insertElement(int k)
{
    if (k >= 0 && k < SIZE)
        set[k] = true;
    else
        cout << "Insert element is out of range." << endl;
}

// Comment 9: Set set[m] to false if the provided integer, m, is within the range.
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
        cout << "--- ";
    cout << "}" << endl;
}

// Comment 10: Return to false if both sets' elements are not equal, otherwise, return to true.
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
    int element;
    cout << "Enter an element (-1 to end): ";
    cin >> element;
    while (element != -1)
    {
        if (element >= 0 && element < SIZE)
            insertElement(element);
        else
            cout << "Invalid Element\n";
        cout << "Enter an element (-1 to end): ";
        cin >> element;
    }
    cout << "Entry complete\n";    
}

// Comment 11: The constructor initializes all elements in the range 0 - 100 to false.
//             And if any element in the array is within the range, set it to true.
IntegerSet::IntegerSet(const int array[], int arraySize)
    : set(SIZE, false)
{
    for (int i = 0; i < arraySize; i++)
    {
        if (array[i] >= 0 && array[i] < SIZE)
            set[array[i]] = true;
        else
            cout << "Invalid insert attempted!" << endl;
    }
}