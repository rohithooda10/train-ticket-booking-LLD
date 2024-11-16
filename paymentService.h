#pragma once
#include "header.h"
#include "payment.h"

class PaymentService {
public:
    bool process(Payment* payment);
};