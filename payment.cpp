#include "payment.h"

Payment::Payment(double cost)
{
    this->cost = cost;
}

double Payment::getCost()
{
    return this->cost;
}