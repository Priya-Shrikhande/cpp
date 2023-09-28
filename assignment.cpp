#include<iostream>
using namespace std;
class cashRegister
{   private:
	 int cashOnHand; 
    public:
	 cashRegister(); 
	 cashRegister(int cashIn);
	 int getCurrentBalance();	
	 void acceptAmount(int amountIn);};
	
	
class dispenserType
{  private:
	int numberOfItems;
	int cost;
   public:
	dispenserType();
	dispenserType(int setNoOfItems, int setCost);
	int getNoOfItems();
	int getCost();
	void makeSale();
};
cashRegister::cashRegister()
{
	cashOnHand = 500;
}
cashRegister::cashRegister(int cashIn)
{
	cashOnHand = cashIn;
}
int cashRegister::getCurrentBalance()
{
	return cashOnHand;
}
void cashRegister::acceptAmount(int amountIn)
{

	cashOnHand = cashOnHand + amountIn;
}



dispenserType::dispenserType()
{
	numberOfItems = 50;
	cost = 50;
}
dispenserType::dispenserType(int setNoOfItems, int setCost)
{
	numberOfItems = setNoOfItems;
	cost = setCost;
}
int dispenserType::getNoOfItems()
{
	return numberOfItems;
}
int dispenserType::getCost()
{
	return cost;
}
void dispenserType::makeSale()
{
	numberOfItems--;
}

void showSelection();
void sellProduct(dispenserType& product, cashRegister& pCounter);
int main()
{
	cashRegister counter;
	dispenserType candy(100, 50);
	dispenserType chips(100, 65);
	dispenserType gum(75, 45);
	dispenserType cookies(50, 85);
	int choice;
	showSelection();
	cin>>choice;
	cout <<" ======================================================================================================================================================================" << endl;
	while (choice != 5)
	{
		switch (choice)
		{
			case 1:
			    cout<<"                                                                              You have Selected Candy                                                                             "<<endl;
				cout <<" ======================================================================================================================================================================" << endl;
				sellProduct(candy, counter);
				break;
			case 2:
			    cout<<"                                                                              You have Selected Chips                                                                             "<<endl;
				cout <<" ======================================================================================================================================================================" << endl;
				sellProduct(chips, counter);
				break;
			case 3:
			    cout<<"                                                                              You have Selected Gum                                                                             "<<endl;
				cout <<" ======================================================================================================================================================================" << endl;
				sellProduct(gum, counter);
				break;
			case 4:
			    cout<<"                                                                              You have Selected Cookies                                                                            "<<endl;
				cout <<" ======================================================================================================================================================================" << endl;
				sellProduct(cookies, counter);
				break;
			default:
				cout << "Invalid selection." << endl;
		}
		showSelection();
		cin >> choice;
		
	
	}	
	return 0;
}

void showSelection()
{   system("clear");
    cout <<" ======================================================================================================================================================================"<<endl;
	cout <<endl<< "                                                            *************** Welcome to Candy Shop  ***************                                                                       " << endl;
    cout <<" ======================================================================================================================================================================" << endl;
	cout <<"                                                                      Select an item you want from the list.                                                           " << endl;
	cout <<" ======================================================================================================================================================================" << endl;
	cout << "                                                                                  1. Candy                                                                            " << endl;
	cout << "                                                                                  2. Chips                                                                            " << endl;
	cout << "                                                                                  3. Gum                                                                              " << endl;
	cout << "                                                                                  4. cookies                                                                          " << endl;
	cout << "                                                                                  5. Exit                                                                             " << endl;
	cout <<" ======================================================================================================================================================================" << endl<<"\t\t\t\t\t\t\t\t\t\t   ";
}

void sellProduct(dispenserType& product, cashRegister& pCounter)
{
	int amount;
	int amount2;
	if (product.getNoOfItems() > 0) //if the dispenser is not empty
	{
		cout <<"                                                                             Please deposit " << product.getCost() << " cents                                                  " << endl;
		cout <<" ======================================================================================================================================================================" << endl<<"\t\t\t\t\t\t\t\t\t\t   ";
		cin >> amount;
		if (amount < product.getCost())
		{
		    cout <<" ======================================================================================================================================================================" << endl;
			cout <<"                                                                       Please deposit another " << product.getCost()- amount << " cents                                         " << endl;
			cout <<" ======================================================================================================================================================================" << endl<<"\t\t\t\t\t\t\t\t\t\t   ";
			cin >> amount2;
			amount = amount + amount2;
		}
		
		if (amount >= product.getCost())
		{
			pCounter.acceptAmount(amount);
			product.makeSale();
			cout <<" ======================================================================================================================================================================" << endl;
			cout << "                                                                     Collect your item at the bottom and " << "enjoy.                                                       " << endl;
		}

		else{
		    cout <<" ======================================================================================================================================================================" << endl;
			cout <<"                                                             The amount is not enough. " << "Collect what you deposited.                                                     "<< endl;
	}}
	else
		cout << "Sorry, this item is sold out." << endl;
}
