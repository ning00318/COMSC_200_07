#ifndef INTEGERSET_H
#define INTEGERSET_H

#include <iostream>
#include <vector>

class IntegerSet
{
public:
    IntegerSet();

    // Return an new union (new IntegerSet) of two sets, so the return data type should be IntegerSet.
    // Passing another set (IntegerSet's object) to do a union, and ensure it will not be modified (const).
    // The const at the end ensures the current object (the one calling the function) will not be modified.
    IntegerSet unionOfSets(const IntegerSet &set2) const;
    IntegerSet intersectionOfSets(const IntegerSet &set2) const;
    void insertElement(int k);
    void deleteElement(int m);
    void printSet() const;

    // Check if all elements of two sets are equal to each other, the const at the end
    // ensures the current object (the one calling the function) will not be modified.
    bool isEqualTo(const IntegerSet &set2) const;
    void inputSet();

    // Additional constructor that receives an array of integers and its size.
    IntegerSet(const int array[], int arraySize);
private:
    std::vector<bool> set;
    static const int SIZE = 101;
};

#endif