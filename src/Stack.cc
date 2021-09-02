#include "VideoGame.hh"

VideoGame::VideoGame(std::string videoGame, std::string developer, float price)
{
  this->videoGame = videoGame;
  this->developer = developer;
  this->price = price;
}

VideoGame::~VideoGame(){
}

std::string VideoGame::GetName() const
{
  return videoGame;
}
std::string VideoGame::GetDev() const
{
  return developer;
}
float VideoGame::GetPrice() const
{
  return price;
}