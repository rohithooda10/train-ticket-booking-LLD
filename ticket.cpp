#include "ticket.h"

Ticket::Ticket(Train* train, vector<User*> passengers, vector<Seat*> seats)
{
    this->train = train;
    this->passengers = passengers;
    this->seats = seats;
}
void Ticket::getTicket()
{
    cout<<"Train number:"<<this->train->getTrainID()<<endl;
    for(int i = 1; i <= seats.size(); i++)
    {
        cout<<"Passenger "<<to_string(i)<<": "<<this->passengers[i - 1]->getID()<<", Seat: "<<this->seats[i - 1]->getSeatNumber()<<endl;
    }
}