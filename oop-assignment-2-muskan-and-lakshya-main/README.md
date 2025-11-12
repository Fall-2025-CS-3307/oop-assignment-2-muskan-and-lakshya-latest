# E-Commerce Marketplace System  
### CS 3307 – Assignment 2 (Low-Fidelity Prototype)

**Team Members:**  
- Muskan Bhatia   
- Lakshaya Sabharwal 

---

## 🧩 Project Overview
This project implements a **Low-Fidelity Prototype** for an online marketplace developed in **C++ and Qt**.  
The goal is to demonstrate system architecture, core object-oriented design, and one working design pattern before full implementation in Assignment 3.

The prototype includes:
- Basic login screen (mock authentication)  
- Product browsing and simple cart flow  
- Core classes for `User`, `Buyer`, `Seller`, `Product`, `Cart`, and `Order`  
- A **Singleton Database Manager (DB)** to store shared data  
- Responsive Qt UI pages (`Login → Catalog → Cart → Checkout`)  

---

## ⚙️ Build & Run Instructions

### Requirements
- Qt 5.15 + or Qt 6.x  
- C++ 17 or newer  
- CMake 3.16 + or qmake  

### Build (CMake)
```bash
cd code/
mkdir build && cd build
cmake ..
make
./ecommerce_marketplace
