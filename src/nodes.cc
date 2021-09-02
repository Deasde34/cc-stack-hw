#include "Node.hh"

Node::Node(VideoGame*& videogame){
  this->videoGame = videogame;
}

Node::~Node(){
}

VideoGame* Node::GetGame() const{
  return videoGame;
}