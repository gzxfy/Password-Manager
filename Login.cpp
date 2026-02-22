#include <iostream> 
#include "Login.hpp"
using namespace std;
void Login::login()
{
    // login logic here
    cout << "===Login Menu===" << endl;
    cout << "Enter the username: ";
    string username;
    cin >> username;
    cout << "Enter the password: ";
    string password;
    cin >> password;

    if (username == getUserId() && password == getUserPassword()) {
        cout << "Login successful!" << endl;
    } else {
        cout << "Invalid username or password." << endl;
    }
    displayMenu();
}

void Login::createAccount()
{
    cout << "===Create Account Menu===" << endl;
    cout << "Enter a username: ";
    string userId;
    cin >> userId;
    setUserId(userId);
    cout << "Enter a password: ";
    string userPassword;
    cin >> userPassword;
    setUserPassword(userPassword);

    cout << "Account created successfully!" << endl;
    displayMenu();

}

void Login::displayMenu()
{
  int choice;

    cout << "===Login Menu===" << endl;
    cout << "1. Login" << endl;
    cout << "2. Create Account" << endl;
    cout << "3. Exit" << endl;

    cin >> choice;
    switch (choice) {
        case 1:
            login();
            break;
        case 2:
            createAccount();
            break;
        case 3:
            exitProgram();
            break;
        default:
            cout << "Invalid choice. Please try again." << endl;
            break;
    }
    
}


void Login::exitProgram()
{
    //maybe sign out????
    cout<<"Exiting program..."<<endl;
    exit(0);
}

