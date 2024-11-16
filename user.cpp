#include "user.h"

User::User(int id)
{
    this->id = id;
}

int User::getID()
{
    return this->id;
}