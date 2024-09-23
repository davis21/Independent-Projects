#pragma once
#include <iostream>
#include "Library_bookshelf.h"

class Library
{
private:
    int num_shelves;
    Bookshelf* shelves;

public:
    // Constructor proper
    Library(int n)
    {
        num_shelves = n;

        shelves = new Bookshelf[num_shelves];
    }
    // Get the number of shelves
    int get_shelves() const
    {
        return num_shelves;
    }
    // Creates the bookshelves
    void make_shelves()
    {
        int r, c;
        for (int i = 0; i < num_shelves; i++)
        {
            std::cout << "Rows and Columns: ";
            std::cin >> r >> c;

            shelves[i].set_shelf(i, r, c);
        }
    }
    // Print the bookshelves
    void print_shelves()
    {
        for (int i = 0; i < num_shelves; i++)
        {
            std::cout << "Code for Shelf " << i + 1 << " is " << shelves[i].get_code() << std::endl;
        }
    }
    // Get book from specific shelf
    Book get_book(int x, int y)
    {
        // First find the book [going to use recursion to achieve this (not most efficient but good practice)]
    }
};