#pragma once
#include "header.h"

enum SeatType{
    SLEEPER,
    AC2,
    AC3
};

enum SeatStatus {
    RESERVED,
    CONFIRMED,
    AVAILABLE
};

class Seat {
    int seatNumber;
    SeatStatus status;
    SeatType seatType;
    double price;
public:
    Seat(int num, SeatType seatType, double price);
    int getSeatNumber();
    SeatStatus getStatus();
    void setStatus(SeatStatus status);
    SeatType getSeatType();
    double getPrice();
};