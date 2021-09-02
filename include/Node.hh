#pragma once
#include "VideoGame.hh"

class Node
{
private:
  VideoGame* videoGame{};
public:
  Node* next{};
  Node(VideoGame*& videoGame);
  ~Node();

  VideoGame* GetGame() const;
};
