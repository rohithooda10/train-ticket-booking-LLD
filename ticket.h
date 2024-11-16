#pragma once
#include "header.h"
#include "train.h"
#include "user.h"

class Ticket {
    Train* train;
    vector<User*> passengers;
    vector<Seat*> seats;
public:
    Ticket(Train* train, vector<User*> passengers, vector<Seat*> seats);
    void getTicket();
};