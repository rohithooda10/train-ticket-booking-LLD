#pragma once
#include "header.h"
#include "train.h"
#include "payment.h"
#include "ticket.h"
#include "paymentService.h"
#include <mutex>

class TicketService {
    PaymentService* paymentService;
    unordered_map<int, Train*> trains; // (trainID, Train) map
    static TicketService* instance;
    static mutex mutex;
public:
    void addPaymentService(PaymentService* paymentService);
    static TicketService* getInstance();
    void addTrain(Train* train);
    Ticket* bookTicket(int trainID, int passengers, SeatType seatType);
    bool processPayment(Payment* payment);
    void reserveSeat(Seat* seat);
    void freeSeat(Seat* seat);
    void confirmSeat(Seat* seat);
};