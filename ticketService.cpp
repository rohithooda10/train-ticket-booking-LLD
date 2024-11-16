#include "ticketService.h"
TicketService* TicketService::instance = NULL;
mutex TicketService::mutex;
TicketService* TicketService::getInstance()
{
    if(instance == NULL) // double check
    {
        lock_guard<std::mutex> lock(mutex); // lock mutex
        if(instance == NULL)
        {
            instance = new TicketService();
        }
    }
    return instance;
}

void TicketService::addPaymentService(PaymentService* paymentService)
{
    this->paymentService = paymentService;
}
void TicketService::addTrain(Train* train)
{
    this->trains[train->getTrainID()] = train;
}
Ticket* TicketService::bookTicket(int trainID, int passengers, SeatType seatType)
{
    Train* train = this->trains[trainID];
    vector<User*> passengerList = vector<User*>();
    vector<Seat*> seats = train->getAvailableSeats(seatType);
    vector<Seat*> selectedSeats;
    double totalCost = 0;
    if(seats.size() < passengers) return NULL;
    for(int i = 0; i < passengers; i++)
    {
        int id = rand() % 1000;
        passengerList.push_back(new User(id));
        selectedSeats.push_back(seats[i]);
        totalCost += seats[i]->getPrice();
        this->reserveSeat(seats[i]);
    }
    Payment* payment = new Payment(totalCost);
    bool paymentStatus = this->processPayment(payment);
    if(paymentStatus)
    {
        for(int i = 0; i < passengers; i++)
            this->confirmSeat(seats[i]);
    }
    else
    {
        for(int i = 0; i < passengers; i++)
            this->confirmSeat(seats[i]);
    }
    return new Ticket(train, passengerList, selectedSeats);
}
bool TicketService::processPayment(Payment* payment)
{
    return this->paymentService->process(payment);
}
void TicketService::reserveSeat(Seat* seat)
{
    seat->setStatus(RESERVED);
}
void TicketService::freeSeat(Seat* seat)
{
    seat->setStatus(AVAILABLE);
}
void TicketService::confirmSeat(Seat* seat)
{
    seat->setStatus(CONFIRMED);
}