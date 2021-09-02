#pragma once
#include "Node.hh"
#include "VideoGame.hh"

class Stack
{
private:
  Node* head{nullptr};
public:
  Stack();
  ~Stack();
  Node* GetTop() const;
  void Pop(); 
  void Push(VideoGame*& VideoGame);
  bool IsEmpty() const;
  void Print();
};
