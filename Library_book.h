#pragma once
#include <iostream>

class Book
{
private:
    std::string title;
    std::string code;
    int genre;
    int column;
    int row;
    int page_count;
    unsigned int f_or_nf : 1;
    unsigned int checked_out : 1;

public:
    // Default Constructor
    Book()
    {
        title = "N/A";
        code = "N/A";
        genre = 0;
        column = 0;
        row = 0;
        page_count = 0;
        f_or_nf = 0;
        checked_out = 0;
    }
    // Constructor Proper
    Book(std::string t, std::string c, int g, int x, int y, int p, int f, int o)
    {
        title = t;
        code = c;
        genre = g;
        column = x;
        row = y;
        page_count = p;
        f_or_nf = f;
        checked_out = o;
    }

    // Title setter/getter
    std::string get_title() const
    {
        return title;
    }
    void set_title(std::string t)
    {
        title = t;
    }
    // Code setter/getter
    std::string get_code() const
    {
        return code;
    }
    void set_code(std::string c)
    {
        code = c;
    }
    // Genre setter/getter
    int get_genre() const
    {
        return genre;
    }
    void set_genre(int g)
    {
        genre = g;
    }
    // Page count setter/getter
    int get_page_count() const
    {
        return page_count;
    }
    void set_page_count(int p)
    {
        page_count = p;
    }
    // Fiction or Non-Fiction setter/getter
    bool get_f_or_nf() const
    {
        if (f_or_nf == 0)
        {
            std::cout << "False";
            //return false;
        }
        else
        {
            std::cout << "True";
            //return true;
        }
        return f_or_nf;
    }
    void set_f_or_nf(int f)
    {
        f_or_nf = f;
    }
    // Checked out setter/getter
    int get_checked_out() const
    {
        return checked_out;
    }
    void set_checked_out(int o)
    {
        checked_out = o;
    }

};