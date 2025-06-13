#include <iostream>
#include <fstream>
#include <string>
using namespace std;

void registeruser ()
{
system("mkdir database");
 string username , password ;
 cout<<"enter a username :";
cin>> username;
cout<< "enter s password :";
cin>> password;

ofstream file;
//create a file with username
file.open("databasee/"+ username + ".text");
file << username << endl;
file << password << endl;
file.close();

cout << "Registration successful " << endl ;

}
void loginuser()
{
    string username,password,u,p;
    cout<< "enter your username:";
    cin>> username;
    cout<< "enter your password :";
    cin>> password;
    
    ifstream file("database/" + username + ".txt");
    if(!file)
    {
        cout<< "user not found! please register first." << endl;
        return;
    }
    getline(file,u);
    getline(file,p);

    if (u == username && p == password )
{
    cout << "login successful. welcome" << username << "!" << endl;
} else {
    cout << "login failed. incorrect username or password." << endl;
    
}
file.close();
}

int main()
{
    int choice;
    cout << "1. register\n2. login\nchoose option: ";
    cin >> choice;
    switch (choice)
    {
        case 1:
        registeruser();
        break;

        case 2:
        loginuser();
        break;

        default:
        cout << "invalid choice." << endl;
    }
    return 0;
}
