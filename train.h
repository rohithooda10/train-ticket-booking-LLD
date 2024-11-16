#pragma once
#include "header.h"
#include "seat.h"

class Train {
    int trainNumber;
    map<SeatType, vector<Seat*> > seats;
public:
    Train(int trainNumber);
    int getTrainID();
    vector<Seat*> getAvailableSeats(SeatType seatType);
    void addSeat(Seat* seat);
};