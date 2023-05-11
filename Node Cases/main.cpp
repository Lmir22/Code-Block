#include <iostream>

using namespace std;

struct node
{
	double xnum;
	node *next;
};

int incrmt_node(node **ptrhead)
{
	node *adv_node = NULL;
	double user_num;

	adv_node = new node;
	cout << "Please enter the incremented number: ";
	cin >> user_num;
	adv_node->xnum = user_num;
	adv_node->next = NULL;

	if(*ptrhead == NULL)
	   {
		*ptrhead = adv_node;
	   }
	else
	{
		node *temp = *ptrhead;

		while(temp->next != NULL)
			temp = temp->next;

		temp->next = adv_node;
	}

	return 0;
}


int count_node(node *ptrhead)
{
	int count = 0;

	while(ptrhead != NULL)
	{
		++count;
		ptrhead = ptrhead->next;
	}

	return count;
}


double mean_node(node *ptrhead)
{
	int count = 0;
	double total = 0;

	while(ptrhead != NULL)
	{
		++count;
		total += ptrhead->xnum;
		ptrhead = ptrhead->next;
	}

	double average = (double)total / count;

	return average;
}


int incrmt_nthspot(node **ptrhead)
{
	node *adv_node = NULL;
	double user_num;
	int spot;

	adv_node = new node;
	cout << "Please enter the incremented number: ";
	cin >> user_num;
	adv_node->xnum = user_num;
	adv_node->next = NULL;


	cout << "Please enter the position in which the number will be implemented at: ";
	cin >> spot;

	if(spot > count_node(*ptrhead) + 1)
	{
		cout << "ERROR!!! The position of the node cannot be found." << endl;
		return 0;
	}
	else
	{
		if(spot == 1)
		{
			adv_node->next = *ptrhead;
			*ptrhead = adv_node;
		}
		else
		{
			int marker = 1;
			node *temp = *ptrhead;

			while(temp != NULL && marker < spot-1)
			{
				++marker;
				temp = temp->next;
			}

			adv_node->next = temp->next;
			temp->next = adv_node;
		}
	}
	return 0;
}


int erase_node(node **ptrhead)
{
	int spot;
	cout << "Please enter the position of the node that will be erased: ";
	cin >> spot;

	if(spot > count_node(*ptrhead))
	{
		cout << "ERROR!!! The position of the node cannot be found." << endl;
		return 0;
	}
	else
	{
		node *ers_node = NULL;

		if(spot == 1)
		{
			ers_node = *ptrhead;
			*ptrhead = (*ptrhead)->next;
		}
		else
		{
			int marker = 1;
			node *temp = *ptrhead;

			while(temp != NULL && marker < spot-1)
			{
				++marker;
				temp = temp->next;
			}

			ers_node = temp->next;
			temp->next = temp->next->next;
		}

		free(ers_node);
	}

	return 0;
}


int display_L(node *ptrhead)
{
	cout << "LIST:" << endl;

	while(ptrhead != NULL)
	{
		cout << ptrhead->xnum << " -> ";
		ptrhead = ptrhead->next;
	}
	cout << "NULL" << endl;

	return 0;
}


int main()
{
	node *initial = NULL;
	int option, count;
	double average;

	cout << "THE NODE MENU" << endl;
	cout << "---------------" << endl;
	cout << "1. ADD A NODE:" << endl;
	cout << "2. COUNT ALL NODES:" << endl;
	cout << "3. Average ALL NODES:" << endl;
	cout << "4. ADD A NODE TO A POSITION:" << endl;
	cout << "5. ERASE A NODE:" << endl;
	cout << "6. DISPLAY ALL NODES:" << endl;
	cout << "7. EXIT OUT OF PROGRAM:" << endl;

	do
	{
		cout << "Choose an option from the menu: ";
		cin >> option;

		switch(option)
		{
			case 1:
			incrmt_node(&initial);
			break;

			case 2:
			count = count_node(initial);
			cout << "The amount of nodes in the list: " << count << endl;
			break;

			case 3:
			average = mean_node(initial);
			cout << "The average of nodes in the list: " << average << endl;
			break;

			case 4:
			incrmt_nthspot(&initial);
			break;

			case 5:
			erase_node(&initial);
			break;

			case 6:
			display_L(initial);
			break;

			case 7:
			cout << "Program complete!!!" << endl;
			break;

			default:
			cout << "ERROR!!! There is no option for this. Please try again." << endl;
		}
	}
	while(option != 7);

	return 0;
}
