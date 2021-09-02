#include<iostream>
#include "Videogame.hh"
#include "Stack.hh"

int main()
{
  VideoGame* videoGame1{new VideoGame("Risk of Rain 2", "Hopoo Games", 235.38)};
  VideoGame* videoGame2{new VideoGame("Phasmophobia", "Trello", 149.99)};
  VideoGame* videoGame3{new VideoGame("Stardew Valley", "ConcernedApe", 149.99)};
  VideoGame* videoGame4{new VideoGame("Sekiro™:Shadows Die Twice", "FromSoftware", 1299.99)};

  Stack* stack{new Stack()};
  stack->Push(videoGame1);
  stack->Push(videoGame2);
  stack->Push(videoGame3);
  stack->Push(videoGame4);
  stack->Print();

  stack->Pop();
  stack->Pop();
  stack->Pop();

  stack->Print();

  std::cin.get();

  delete stack;
  return 0;
}

