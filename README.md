# Train Ticket Booking System (LLD)

This repository showcases a Low-Level Design (LLD) implementation for a train ticket booking system. It is developed to demonstrate modular and scalable design principles using object-oriented programming. Each module is designed to handle specific functionalities such as managing users, trains, tickets, and payments.

## Features

- **User Management**: Handles user information.
- **Train Management**: Manages train availability.
- **Ticket Management**: Facilitates ticket booking, and seat allocation.
- **Payment Processing**: Handles payment-related functionalities.
- **Service-Oriented Design**: Modular services for maintaining and extending system functionalities.

## File Overview

- **`main.cpp`**: Entry point for the application, initializing the system and coordinating workflows.
- **`payment.cpp`**: Implements payment logic and integration with payment gateways.
- **`paymentService.cpp`**: Encapsulates payment services for enhanced modularity.
- **`seat.cpp`**: Manages seat allocation and availability tracking.
- **`ticket.cpp`**: Contains logic for ticket creation, status, and pricing.
- **`ticketService.cpp`**: Provides services for ticket booking and management.
- **`train.cpp`**: Handles train details.
- **`user.cpp`**: Manages user-related functionalities.

## How to Use

1. **Clone the Repository**
2. **Compile the Code:** Use a C++ compiler to compile the project. For example:

```bash
g++ main.cpp payment.cpp paymentService.cpp seat.cpp ticket.cpp ticketService.cpp train.cpp user.cpp -o TrainBookingSystem
```

3. **Run the Application:**

```bash
./TrainBookingSystem
```

## Dependencies

C++17 or later
A C++ compiler (e.g., GCC, Clang)

## Contribution

Contributions are welcome! Feel free to open issues or submit pull requests.
