#include "End.h"
#include "Input.h"

void printEnd()
{
	string End[1] =
	{
		"- Game Over -",
	};
	cout << endl;
	cout << endl;
	cout << setw(31);
	cout << std::right;
	cout << End[0] << endl;
	cout << endl;
	
	Sleep(500);
	cout << endl; cout << endl;
	cout << "- Press Enter to start -" << endl;

	while (!Input::GetKeyDown(VK_RETURN));
}