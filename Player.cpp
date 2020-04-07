#include <iostream>

#include <string>

#include "Player.h"

using namespace std;

Player::Player()
{
    title = "";
    author = "";
}

Book::Book(string new_title, string new_author)
{
    title = new_title;
    author = new_author;
}


string Book::getTitle()
{
    return title;
}
string Book::getAuthor()
{
    return author;
}


void Book :: setTitle(string new_title)
{
    title = new_title;
}
void Book :: setAuthor(string new_author)
{
    author = new_author;
}

