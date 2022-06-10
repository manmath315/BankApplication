/*
 Person class is used to store details about a person
*/
class Person{
	string name;
	string address;
	string phoneNumber;
	string dateOfBirth;
	
	public:
		Person(){}
		
		Person(string name, string address, string phoneNumber, string dateOfBirth){
			this->name = name;
			this->address = address;
			this->phoneNumber = phoneNumber;
			this->dateOfBirth = dateOfBirth;
		}
		
		void setName(){ 
			string name;
			cout<<"\n Enter Name: ";
			getline(cin, name);
			this->name = name;
		}
		
		void setAddress(){ 
			string address;
			cout<<"\nEnter Address: ";
			getline(cin, address);
			this->address = address; 
		}
		
		void setPhoneNumber(){
			string phoneNumber;
			cout<<"\nEnter Phone Number: ";
			cin>>phoneNumber;
			if(validateNumber(phoneNumber))
				this->phoneNumber = phoneNumber;
			else
				cout<<"\nIncorrect Number is entered.";	 
		}
		
		bool validateNumber(string phoneNumber){
			if(phoneNumber.length() != 10) return false;
			for(int i=0;i<10;i++){
				if(phoneNumber[i]<48 && phoneNumber[i]>57) return false;
			}
			return true;
		}
		
		void setDateOfBirth(){
			string dob;
			cout<<"\nEnter DOB in DD/MM/YYYY format: ";
			cin>>dob;
			if(validateDOB(dob))
				this->dateOfBirth = dob;
			else
				cout<<"\nIncorrect DOB is entered.";
		}
		
		bool validateDOB(string dob){
			if(dob.length() != 10) return false;
			for(int i=0;i<10;i++){
				if(i == 2 || i== 5){
					if(dob[i]!= '/') return false;
				}
				else if(dob[i]<48 && dob[i]>57) return false;
			}
			int date = (dob[0]-48)*10+dob[1]-48, month = (dob[3]-48)*10+dob[4]-48, year = (dob[6]-49)*1000+(dob[7]-48)*100+(dob[8]-48)*10+dob[9]-48;
			if( date < 1 || date > 31 || month < 1 || month > 12 || year < 1 || year > 2022 ) return false;
			return true;
		}
		
		string getName(){ return name; }
		string getAddress() {return address;}
		string getPhoneNumber(){return phoneNumber;}
		string getDateOfBirth(){return dateOfBirth;}
		
		void displayPerson(){
			cout<<"\n========Person Details=======";
			cout<<"\nName: "<<name;
			cout<<"\nAddress: "<<address;
			cout<<"\nPhone Number: "<<phoneNumber;
			cout<<"\nDate of Birth: "<<dateOfBirth;
		}
};