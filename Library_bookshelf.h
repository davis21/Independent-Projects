#pragma once
#include <iostream>
#include <vector>
#include "Library_book.h"

class Bookshelf
{
private:
    Book** books;
    int rows, col, shelf_code;

public:
    // Default constructor
    Bookshelf()
    {
        shelf_code = rows = col = 0;
    }
    ~Bookshelf()
    {
        for(int i = 0; i < rows; i++)
        {
            delete[] books[i];
        }
        delete[] books;
    }
    // Set size of 2d array
    void set_shelf(int s, int r, int c)
    {
        shelf_code = s;
        rows = r;
        col = c;

        // Dynamically create the 2d array
        books = new Book*[rows];
        for(int i = 0; i < rows; i++)
        {
            books[i] = new Book[col];
        }
    }
    
    // Function that adds a book to a spot in the bookshelf
    void set_Book(int r, int c, Book b)
    {
        books[r][c] = b;
    }
    // Function that returns the book at a user defined spot spot
    Book get_Book(int r, int c)
    {
        return books[r][c];
    }
    // Getter for shelf code
    int get_code() const
    {
        return shelf_code;
    }
};