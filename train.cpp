#include "train.h"

Train::Train(int trainNumber)
{
    this->trainNumber = trainNumber;
}
vector<Seat*> Train::getAvailableSeats(SeatType seatType)
{
    vector<Seat*> availableSeats;
    for(auto &seat: this->seats[seatType])
    {
        if(seat->getStatus() == AVAILABLE)
        {
            availableSeats.push_back(seat);
        }
    }
    return availableSeats;
}
void Train::addSeat(Seat* seat)
{
    if(this->seats.find(seat->getSeatType()) == this->seats.end())
        this->seats[seat->getSeatType()] = vector<Seat*>();
    this->seats[seat->getSeatType()].push_back(seat);
}

int Train::getTrainID()
{
    return this->trainNumber;
}