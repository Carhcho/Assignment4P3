// Assignment4.cpp 
//

#include <iostream>
#include "BaseballPlayer.h"
#include "LinkedList.h"
using namespace std;

int main()
{
	LinkedList<BaseballPlayer> pointList;
	BaseballPlayer Player1(55, 12, 5, 26);
	BaseballPlayer Player2(35, 2, 55, 126);
	pointList.insertNode(Player1);
	pointList.insertNode(Player2);
	pointList.displayList();
	
}
