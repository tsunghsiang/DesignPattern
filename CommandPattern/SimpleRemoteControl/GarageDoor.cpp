#include "GarageDoor.hpp"

GarageDoor::GarageDoor(){}

GarageDoor::~GarageDoor(){}

void GarageDoor::Up(){ std::cout << "Garage Door is Open" << std::endl; }

void GarageDoor::Down(){ std::cout << "Garage Door is Closed" << std::endl; }

void GarageDoor::LightOn(){ std::cout << "Garage Door Light is On" << std::endl; }

void GarageDoor::LightOff(){ std::cout << "Garage Door Light is Off" << std::endl; }
