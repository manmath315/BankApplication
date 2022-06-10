#include<iostream>
#include<bits/stdc++.h>
using namespace std;

#define MAX_NAME_LEN 60  // Maximum len of your name can't be more than 60
#define MAX_ADDRESS_LEN 120 // Maximum len of your address can't be more than 120

int accountIdCounter = 1;
int transactionIdCounter = 1;

int main(){
	Person p;
	p.setName();
	p.setAddress();
	p.setPhoneNumber();
	p.setDateOfBirth();
	p.displayPerson();
}