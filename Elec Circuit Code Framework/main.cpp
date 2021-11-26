
#include <iostream>
#include <sstream>
#include <cmath>

#include "ApplicationManager.h"

int main()
{

	ActionType ActType;
	//Create an object of ApplicationManager
	ApplicationManager AppManager;

	do
	{		
		//Read user action
		ActType = AppManager.GetUserAction();

		//Exexute the action
		AppManager.ExecuteAction(ActType);

		//Update the drawing window
		AppManager.UpdateInterface();
<<<<<<< HEAD
		wrong this makes sense
=======
		actullay this code makes no sense
		welll test tttttttt
			
			
	
>>>>>>> 9c8c62d28e0d33fc3323fc1162768fc183e44b60

	}while(ActType != EXIT);
		
	return 0;
}

