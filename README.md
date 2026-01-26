# Job Simulator (WIP)

**Description**  
Job Simulator is a C++ game-based simulation inspired by Roblox simulators. Players act as a cashier at a fast-food store, taking orders and handling payments. This project demonstrates **object-oriented programming, modular design, and basic data structures**. It is a work-in-progress, with future expansions planned for multiple stores and more advanced gameplay.

---

## Current Features
- Single store: **Poke Bowl**
- Players take customer orders
- Calculate total price and input cash or card payments
- Register system verifies payment correctness

---

## Classes & Data Structures
- `pokeBowl` — Represents menu items and store-specific data
- `registerSys` — Handles monetary input and checks correctness
- **Data Structures:**
  - Menu & customer orders: **Vectors** (currently)
  - Coins/Bills: constants
  - Future stores planned to use **HashMaps** for scalability

---

## Game Flow
1. Player selects the Poke Bowl store
2. Customer places an order
3. Store calculates total price
4. Player inputs payment (cash or card)
5. Register system checks correctness and confirms transaction

---

## Future Work
- Add additional stores (RickRonalds, Outandin)
- Implement customer satisfaction / happy points system
- Expand modular architecture for multiple stores
- Add manager and kitchen roles
- Incorporate RNG customer orders and dialogue logic

---

## Tech Stack
- **Language:** C++
- **Concepts:** OOP, modular design, vectors, constants
- **Tools:** VS Code, Git/GitHub

---

## Why This Project Matters
Even in its current state, Job Simulator demonstrates:
- Designing modular systems in C++
- Using classes to structure gameplay logic
- Handling user input and validating transactions
- Planning for scalable data structures in future expansions
