#include <iostream>
#include <string>
using namespace std;

int main()
{
    int a;
    string name, y, z, t;
    cout << "Fahsai: Sawadee ka...Can you tell me your name?" << endl;
    cout << "?????: ";
    getline(cin,name);
    cout << "Fahsai: Wow!!! " << name << " is a really cool name." << endl;
    cout << "Fahsai: I think you are an Engineering student. What is your student ID?" << endl;
    cout << name << ": ";
    cin  >> a;
    cout << "Fahsai: I think you may be GEAR "<< a/10000000 - 12 << ". I have a free movie ticket for you." << endl;
    cout << "Fahsai: Let's go to the cinema together!!!" << endl;
    cout << "Fahsai: What movie do you want to watch?" << endl;
    cout << name << ": ";
    cin.ignore();
    getline(cin,y);
    cout << "Fahsai: So....which day are you free to go with me?" << endl;
    cout << name << ": ";
    getline(cin,z);
    cout << "Fahsai: " << z << "....that is OK!!! I'm looking forward to watching " << y << " with you." << endl;
    cout << name << ": ";
    getline(cin,t);
    cout << "Fahsai: 555+ see you " << z << ". Bye Bye \\(^ ^)/";
    return 0;
}