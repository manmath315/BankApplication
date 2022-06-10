#include<bits/stdc++.h>
using namespace std;

class Account{
	int accountNumber;
	string password;
	Person person;
	int balance;
	
	public:
		
		Account(int accountNumber)
        {
			this->accountNumber = accountNumber;
            this->balance = 0;
            this->password = "12345";
		}
		
		Account(int accountNumber, Person person, string password)
        {
			this->accountNumber = accountNumber;
			this->balance = 0;
			this->person = person;
			this->password = password;
		}
		
		int getBalance()
        { 
            return this->balance;
        }
		
		int getAccountNumber()
        { 
            return this->accountNumber;
        }
		
		int getPerson()
        { 
            return this->person; 
        }
		
        void enterAmount( int &dollor, int &cents)
        {
            string amount;
			cout<<"\nEnter Amount: ";
			cin>>amount;

            cout<<amount<<"\n";

            string x,y;

            int len = amount.size(), i = 0;
            while(i < len && amount[i] != 'D')
            {
                x += amount[i];
                i++;
            }
            i++;
            while(i<len && amount[i] != 'C')
            {
                y += amount[i];
                i++;
            }

            dollor = stoi(x);
            cents = stoi(y);

        }
		void credit()
        {
			
            int dollar, cents;
            enterAmount(dollar, cents);
            this->amount += (dollar*100 + cents);

            cout<<"\nSuccessfully credited amount to the account "<<this->accountNumber;

            return;
		}

        void debit()
        {
            int dollar, cents;
            enterAmount(dollar, cents);
            if(this->amount < dollar*100+cents){
                cout<<"\nInsufficient Balance";
                return;
            }

            this->amount -= (dollar*100+cents);
            cout<<"\nSuccessfully debited the amount from the account "<<this->accountNumber;
        }
};

int main(){
    Account a;
    return 0;
}