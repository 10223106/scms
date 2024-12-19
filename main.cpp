#include <iostream>
#include "CircuitCore.h"
#include "CircuitGui.h"
#include "Menu.h" 
#include "CircuitSimulator.h" 


int main()
{
	//CircuitGui gui;

	//gui.Start();
	CircuitSimulator demo; 
	if (demo.Construct(256, 240, 4, 4)) {
		demo.Start();
	} 
	return 0;
}