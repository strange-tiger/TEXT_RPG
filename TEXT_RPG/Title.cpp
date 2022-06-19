#include "Title.h"
#include "Input.h"

void printTitle()
{
	string title[13] =
	{
		"- ±ÍÂú¾Æ¼­ ´ëÃæ ¸¸µç -",
		"",
		"*********       ********            *****",
		"***********     ***********      ***********",
		"***      ***    ***      ***    ****     ****",
		"***      ***    ***      ***    ***       ***",
		"***********     ***********     ***",
		"**********      *********       ***     *****",
		"***     ***     ***             ***     *****",
		"***     ***     ***             ***       ***",
		"***     ***     ***             ***       ***",
		"***     ***     ***              ***********",
		"***     ***     ***                *******"
	};
	cout << endl;
	cout << endl;
	cout << setw(31);
	cout << std::right;
	cout << title[0] << endl;
	cout << endl;
	Sleep(500);
	for (int i = 1; i < 13; i++)
	{
		cout << title[i] << endl;
		Sleep(50);
	}
	Sleep(300);
	cout << endl; cout << endl;
	cout << setw(33);
	cout << "- Press Enter to start -" << endl;

	while (!IS_KEY_DOWN(VK_RETURN));
}