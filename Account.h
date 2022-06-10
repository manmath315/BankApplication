class Account{
	
	int accountNumber;
	string password;
	Person person;
	int balance;
	
	public:
		
		Acount(){
			this->accountNumber = accountIdCounter++;
		}
		
		Account(Person person, string password){
			this->accountNumber = accountIdcounter++;
			this->balance = 0;
			this->person = person;
			this->password = password;
		}
		
		int getBalance(){ return this->balance; }
		
		int getAccountNumber(){ return this->accountNumber; }
		
		int getPerson(){ return this->person; }
		
		int deposit(){
			string amount;
			cout<<"\n Enter Amount to Deposite: ";
			cin>>amount;
		}
		
};