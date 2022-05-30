#include "person.h"
#include "player.h"

Player::Player(std::string_view game_param)
    : m_game(game_param)
{
    // first_name = "John"; Compiler errors
    // last_name = "Snow";
}