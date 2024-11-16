#include "paymentService.h"

bool PaymentService::process(Payment* payment)
{
    cout<<"Paid "<<payment->getCost()<<endl;
    return true;
}