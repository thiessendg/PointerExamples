// PointerExamples.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

void f(const int *);

int main()
{
    //create a pointer to an int an initialize it to nullptr
    int *pMyInt = nullptr;
    int y = 5;
    //set the ptr to the address of y
    pMyInt = &y;

    //print out pMyInt by indirection
    std::cout << y << " " << *pMyInt << std::endl;

    //change the value of pMyInt
    *pMyInt = 10;
    //print out pMyInt by indirection
    std::cout << y << " " << *pMyInt << std::endl;

    //prompt for a new value
    std::cout << "Please input a new value: " << std::endl;
    std::cin >> *pMyInt;
    //print out pMyInt by indirection
    std::cout << y << " " << *pMyInt << std::endl;

    //The precedeing examples were non constant ptrs to non constant data

    //here is an an example of a non constant ptr to constant data
    int x = 0;
    f(&x);// constant variable cannot be modified


    //here is an example of a constant ptr to non const data
    int xxx = 0, yyy = 0;
    // ptr is a constant pointer to an integer that can
    // be modified through ptr, but ptr always points to the
    // same memory location.
    int * const ptr = &xxx; // const pointer must be initialized
    *ptr = 7; // allowed: *ptr is not const

    //ptr = &yyy; // error: ptr is const; cannot assign to it a new address

        return 0;
    }

    void f(const int *ptr)
    {
        //*ptr += 100; //error
        return;
    }