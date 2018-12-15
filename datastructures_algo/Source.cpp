#include <iostream>
#include <stack>
#include <queue>

using namespace std;


void main()
{
	//stack
	stack <int> userIntegers;

	int userInput;
	int inputInt;
	stack <int> stackOfNum;
	queue<int> queueOfNum;

	do
	{
		cout << "which do you want to do?\n1) add to stack \n2) remove from stack \n3) display stack info \n4) add to queue \n5) remove from queue\n6) display queue info\n";
		cin >> userInput;
		while (userInput != 1 || userInput != 2 || userInput != 3 || userInput != 4 || userInput != 5 || userInput != 6)
		{
			cout << "which do you want to do?\n1) add to stack \n2) remove from stack \n3) display stack info \n4) add to queue \n5) remove from queue\n6) display queue info\n";
			cin >> userInput;
		}

		if (userInput == 1)
		{
			cout << "\nEnter a number to add to the stack: ";
			cin >> inputInt;
			userIntegers.push(inputInt);
		}

		else if (userInput == 2)
		{
			if (userIntegers.size() != 0 && userIntegers.empty == false)
			{
				userIntegers.pop();
			}
		}
	} while (userInput != 99);
}