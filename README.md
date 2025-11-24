BANK MANAGEMENT SYSTEM PROJECT IN C – DESCRIPTION

A Bank Management System in C is a menu-driven console project that helps to manage customer accounts. It allows the user to create accounts, deposit money, withdraw money, check balance, and view customer details. It is usually developed using structures, functions, and file handling.

1. Purpose of the Project

The main purpose is to computerize basic banking operations such as:

Creating a new bank account

Storing customer information

Managing deposits and withdrawals

Displaying account details

Providing a simple and user-friendly interface

2. Core Concepts Used

A Bank System project uses the following C programming features:

✔ Structures

To store customer details like:

name, account number, balance, address, mobile number

✔ Functions

Separate functions to perform each operation:

create_account()

deposit()

withdraw()

check_balance()

display_account()

✔ File Handling (optional but common)

Used to store customer data permanently in a text or binary file.

✔ Loops & Switch Case

Used to display the menu and take user choice repeatedly.

3. How the Program Works

When the program runs, it shows a menu like:

1. Create New Account
2. Deposit Money
3. Withdraw Money
4. Check Balance
5. Display Account Details
6. Exit


The user selects an option by entering a number. Based on the choice, the corresponding function runs.

4. Input Process

Examples of user input:

Enter Customer Name:
Enter Account Number:
Enter Opening Balance:
Enter Amount to Deposit:
Enter Amount to Withdraw:


The entered values are stored in variables or structure arrays.

5. Output Process

The program displays messages such as:

Account created successfully!
Amount deposited!
Insufficient balance!
Current balance: 5000


These outputs help the user understand the operation performed.

6. How to Run the Project
Turbo C / CodeBlocks

Go to:

Compile → Run

Using GCC in Terminal
gcc bank.c -o bank
./bank

OUTPUT:
------- BANKING SYSTEM -------
1. Create Account
2. Display All Accounts
3. Deposit Money
4. Withdraw Money
5. Check Balance
6. Exit
Enter your choice: 1

Enter Account Number: 890
Enter Name: Minakshi Kar
Account Created Successfully!

------- BANKING SYSTEM -------
1. Create Account
2. Display All Accounts
3. Deposit Money
4. Withdraw Money
5. Check Balance
6. Exit
Enter your choice:
Enter Account Number: Enter Name: Account Created Successfully!

------- BANKING SYSTEM -------
1. Create Account
2. Display All Accounts
3. Deposit Money
4. Withdraw Money
5. Check Balance
6. Exit
Enter your choice: 2

---- ACCOUNT DETAILS ----
Account No: 890
Name: Minakshi
Balance: 0.00

Account No: 452
Name: Kar
Balance: 0.00


------- BANKING SYSTEM -------
1. Create Account
2. Display All Accounts
3. Deposit Money
4. Withdraw Money
5. Check Balance
6. Exit
Enter your choice: 3

Enter Account Number: 890
Enter amount to deposit: 5000 
Amount Deposited Successfully!

------- BANKING SYSTEM -------
1. Create Account
2. Display All Accounts
3. Deposit Money
4. Withdraw Money
5. Check Balance
6. Exit
Enter your choice: 4

Enter Account Number: 500
Account not found!

------- BANKING SYSTEM -------
1. Create Account
2. Display All Accounts
3. Deposit Money
4. Withdraw Money
5. Check Balance
6. Exit
Enter your choice: 5

Enter Account Number: 890
Current Balance = 5000.00

------- BANKING SYSTEM -------
1. Create Account
2. Display All Accounts
3. Deposit Money
4. Withdraw Money
5. Check Balance
6. Exit
Enter your choice: 6

Thank you for using Banking System!
PS C:\Users\rajal\OneDrive\Desktop\project\output>



