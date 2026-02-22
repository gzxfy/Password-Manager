#ifndef LOGIN_HPP
#define LOGIN_HPP
#include <string>   
#include <iostream>
using namespace std;
class Login
{
    public:
        void login();
        void createAccount();
        void exitProgram();
        void displayMenu();
        void setUserId(string id) {
            userId = id;
        }
        void setUserPassword(string password) {
            userPassword = password;
        }
        string getUserId() {
            return userId;
        }
        string getUserPassword() {
            return userPassword;
        }
    private:
        string userId;
        string userPassword;
};
#endif // LOGIN_HPP