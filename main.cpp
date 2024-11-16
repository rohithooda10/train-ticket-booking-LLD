#include "header.h"
#include "ticketService.h"

int main()
{
    Seat* seat1 = new Seat(1, SLEEPER, 100.0);
    Seat* seat2 = new Seat(2, SLEEPER, 250.0);
    Seat* seat3 = new Seat(3, AC2, 300.0);

    Train* train = new Train(123);
    train->addSeat(seat1);
    train->addSeat(seat2);
    train->addSeat(seat3);

    PaymentService* paymentService = new PaymentService();
    TicketService* ticketService = new TicketService();
    ticketService->addPaymentService(paymentService);
    ticketService->addTrain(train);

    Ticket* ticket = ticketService->bookTicket(123, 1, AC2);
    if(ticket)
        ticket->getTicket();
    return 0;
}