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
	dispenserType candy(100, 5);
	dispenserType chips(100, 10);
	dispenserType gum(75, 15);
	dispenserType cookies(50, 50);
	int choice;
	showSelection();
	cin>>choice;
	while (choice != 5)
	{
		switch (choice)
		{
			case 1:
			    cout<<"You have Selected Candy   "<<endl;
				sellProduct(candy, counter);
				break;
			case 2:
			    cout<<"You have Selected Chips   "<<endl;
				sellProduct(chips, counter);
				break;
			case 3:
			    cout<<"You have Selected Gum"<<endl;
				sellProduct(gum, counter);
				break;
			case 4:
			    cout<<"You have Selected Cookies     "<<endl;
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
{   cout <<endl<< "Welcome to Candy Shop"<<endl;
    cout <<"Select an item you want from the list."<<endl;
	cout << "1. Candy" << endl;
	cout << "2. Chips" << endl;
	cout << "3. Gum" << endl;
	cout << "4. cookies" << endl;
	cout << "5. Exit" << endl;
}

void sellProduct(dispenserType& product, cashRegister& pCounter)
{
	int amount;
	int amount2;
	if (product.getNoOfItems() > 0) //if the dispenser is not empty
	{
		cout <<"Please deposit " << product.getCost() << " rupees" << endl;
		cin >> amount;
		if (amount < product.getCost())
		{
		    cout <<"Please deposit another " << product.getCost()- amount << " rupees"<< endl;
			cin >> amount2;
			amount = amount + amount2;
		}
		
		if (amount >= product.getCost())
		{
			pCounter.acceptAmount(amount);
			product.makeSale();
			cout << "Collect your item at the bottom and " << "enjoy." << endl;
		}

		else{
		    cout <<"The amount is not enough. " << "Collect  your  cash deposited."<< endl;
	}}
	else
		cout << "Sorry, this item is sold out." << endl;
}
