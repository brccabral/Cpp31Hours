#include <iostream>
#include "person.h"
#include "player.h"

// if << receives Person, this funtion will be called because
//  Person uses it as "friend"
// Person has first_name and last_name as private in Person itself
std::ostream &operator<<(std::ostream &out, const Person &person)
{
    out << "Person [" << person.first_name << " " << person.last_name << "]";
    return out;
}

// if << receives Player, this funtion will be called
//  Player uses it as "friend"
// Player has first_name and last_name as private in base class Person
std::ostream &operator<<(std::ostream &out, const Player &player)
{

    out << "Player : [ game : " << player.m_game
        << " names : " << player.get_first_name()
        << " " << player.get_last_name() << "]";
    return out;
}