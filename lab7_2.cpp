#include <iostream>
#include <string>
int main() {
    std::string name;
    std::string studentID;
    std::string movie;
    std::string day;
    std::string joke;

    std::cout << "Fahsai: Sawadee ka...Can you tell me your name?\n";
    std::cout << "?????: ";
    std::getline(std::cin, name);
    std::cout << "Fahsai: Wow!!! " << name << " is a really cool name.\n";
    std::cout << "Fahsai: I think you are an Engineering student. What is your student ID?\n";
    std::cout << name << ": ";
    std::getline(std::cin, studentID);
    std::cout << "Fahsai: I think you may be GEAR ";
    int gear = std::stoi(studentID.substr(0, 2)) - 12;
    std::cout << gear;
    std::cout << ". I have a free movie ticket for you.\n";
    std::cout << "Fahsai: Let's go to the cinema together!!!\n";
    std::cout << "Fahsai: What movie do you want to watch?\n";
    std::cout << name << ": ";
    std::getline(std::cin, movie);
    std::cout << "Fahsai: So....which day are you free to go with me?\n";
    std::cout << name << ": ";
    std::getline(std::cin, day);
    std::cout << "Fahsai: " << day << "....that is OK!!! I'm looking forward to watching " << movie << " with you." << "\n";
    std::cout << name << ": ";
    std::getline(std::cin, joke);
    std::cout << "Fahsai: 555+ see you " << day << ". Bye Bye \\(^ ^)/\n";
    return 0;
}
    /*
Fahsai: Sawadee ka...Can you tell me your name?
?????: Luke Skywalker
Fahsai: Wow!!! Luke Skywalker is a really cool name.
Fahsai: I think you are an Engineering student. What is your student ID?
Luke Skywalker: 590610999
Fahsai: I think you may be GEAR 47. I have a free movie ticket for you.
Fahsai: Let's go to the cinema together!!!
Fahsai: What movie do you want to watch?
Luke Skywalker: Star Wars VII
Fahsai: So....which day are you free to go with me?
Luke Skywalker: Next Monday
Fahsai: Next Monday....that is OK!!! I'm looking forward to watching Star Wars VII with you.
Luke Skywalker: May the Force be with you krub
Fahsai: 555+ see you Next Monday. Bye Bye \(^ ^)/
*/

    /*
Fahsai: Sawadee ka...Can you tell me your name?
?????: Luke Skywalker
Fahsai: Wow!!! Luke Skywalker is a really cool name.
Fahsai: I think you are an Engineering student. What is your student ID?
Luke Skywalker: 590610999
Fahsai: I think you may be GEAR 47. I have a free movie ticket for you.
Fahsai: Let's go to the cinema together!!!
Fahsai: What movie do you want to watch?
Luke Skywalker: Star Wars VII
Fahsai: So....which day are you free to go with me?
Luke Skywalker: Next Monday
Fahsai: Next Monday....that is OK!!! I'm looking forward to watching Star Wars VII with you.
Luke Skywalker: May the Force be with you krub
Fahsai: 555+ see you Next Monday. Bye Bye \(^ ^)/
*/
