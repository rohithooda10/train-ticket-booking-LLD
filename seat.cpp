#include "seat.h"

Seat::Seat(int num, SeatType seatType, double price)
{
    this->seatNumber = num;
    this->seatType = seatType;
    this->price = price;
    this->status = AVAILABLE;
}
int Seat::getSeatNumber()
{
    return this->seatNumber;
}
SeatStatus Seat::getStatus()
{
    return this->status;
}
void Seat::setStatus(SeatStatus status)
{
    this->status = status;
}

SeatType Seat::getSeatType()
{
    return this->seatType;
}

double Seat::getPrice()
{
    return this->price;
}