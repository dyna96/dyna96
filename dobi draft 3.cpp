#include<iostream>
#include<iomanip>
#include<cstring>
#include<stdlib.h>
using namespace std;

const int SIZE = 2;
const int CAPACITY_SIZE = 2;

int calcLaundry (char service, char capacity, char mode);
void calclaundry1();
void calclaundry2();
void displaySales(int sales[SIZE][CAPACITY_SIZE]);

int main ()
{
	int size = 50;
	int totalCustomers = 0, totalWashingCustomers = 0, totalDryingCustomers = 0;
	int totalSales = 0, totalWashingSales = 0, totalDryingSales = 0;
	int totalProfit = 0, totalWashingProfit = 0, totalDryingProfit = 0;
	int utilities = 0, rent = 0;
	char service, capacity, mode, repeat;
	char name[size];
	
	int sales[SIZE][CAPACITY_SIZE] = {0};
	
	cout<<"ENTER USERNAME: ";
	cin.getline(name,size);
	cout<<"-----------------------------------------------------------------------------"<<endl;
	
	do
	{
		cout<<"HELLO!! "<<name<<endl;
		cout<<"WELCOME TO LAUNDRY";	
		cout<<"PICK A SERVICE:(W-WASHING)/(D-DRYING):";
		cin>>service;
		
		int printProfit = calcLaundry (service,capacity,mode);
		
		if(service=='w'||service=='W')
		{
			cout<<"YOU HAVE CHOSE WASHING SERVICE"<<endl;
			cout<<"PICK LOAD'S CAPACITY:(S-10KG)/(M-15KG) :";
			cin>>capacity;
			
			if(capacity=='s'||capacity=='S')
			{
				cout<<"YOU HAVE CHOSE SMALL WASHING (10KG)"<<endl;
				cout<<"ENTER MODE:(W-WARM)/(C-COLD) :";
				cin>>mode;
				
				if(mode=='w'||mode=='W')
				{
					cout<<"YOU HAVE CHOSE SMALL WASHING (10KG) ON WARM MODE"<<endl;
					cout<<"ENTER AMOUNT OF CUSTOMERS FOR THIS SERVICE ON THIS WEEK :";
					int customers;
					cin>>customers;
					calclaundry1();
					
					sales[0][0] += customers;
				}
				else if(mode=='c'||mode=='C')
				{
					cout<<"YOU HAVE CHOSE SMALL WASHING (10KG) ON COLD MODE"<<endl;
					cout<<"ENTER AMOUNT OF CUSTOMERS FOR THIS SERVICE ON THIS WEEK :";
					int customers;
					cin>>customers;
					calclaundry1();
					
					sales[0][0] += customers;
				}
				else
				{
					cout<<"INVALID CODE. PLEASE TRY AGAIN."<<endl;
					return(0);
				}	
			}
			else if(capacity=='m'||capacity=='M')
			{
				cout<<"YOU HAVE CHOSE MEDIUM WASHING (15KG)"<<endl;
				cout<<"ENTER MODE:(W-WARM)/(C-COLD) :";
				cin>>mode;
				
				if(mode=='w'||mode=='W')
				{
					cout<<"YOU HAVE CHOSE MEDIUM WASHING (15KG) ON WARM MODE"<<endl;
					cout<<"ENTER AMOUNT OF CUSTOMERS FOR THIS SERVICE ON THIS WEEK :";
					int customers;
					cin>>customers;
					calclaundry2();
					
					sales[0][1] += customers;
				}
				else if(mode=='c'||mode=='C')
				{
					cout<<"YOU HAVE CHOSE MEDIUM WASHING (15KG) ON COLD MODE"<<endl;
					cout<<"ENTER AMOUNT OF CUSTOMERS FOR THIS SERVICE ON THIS WEEK :";
					int customers;
					cin>>customers;
					calclaundry2();
					
					sales[0][1] += customers;
				}
				else
				{
					cout<<"INVALID CODE. PLEASE TRY AGAIN."<<endl;
					return(0);
				}
			}
			else
			{
				cout<<"INVALID CODE. PLEASE TRY AGAIN."<<endl;
				return(0);
			}
		}
		else if(service=='d'||service=='D')
		{
			cout<<"YOU HAVE CHOSE DRYING SERVICE"<<endl;
			cout<<"PICK LOAD'S CAPACITY:(S-10KG)/(M-15KG) :";
			cin>>capacity;
			
			if(capacity=='s'||capacity=='S')
			{
				cout<<"YOU HAVE CHOSE SMALL DRYING (10KG)"<<endl;
				cout<<"ENTER MODE:(W-WARM)/(C-COLD) :";
				cin>>mode;
				
				if(mode=='w'||mode=='W')
				{
					cout<<"YOU HAVE CHOSE SMALL DRYING (10KG) ON WARM MODE"<<endl;
					cout<<"ENTER AMOUNT OF CUSTOMERS FOR THIS SERVICE ON THIS WEEK :";
					int customers;
                    cin >> customers;
                    calclaundry1();
                    
                    sales[1][0] += customers;
				}
				else if(mode=='c'||mode=='C')
				{
					cout<<"YOU HAVE CHOSE SMALL DRYING (10KG) ON COLD MODE"<<endl;
					cout<<"ENTER AMOUNT OF CUSTOMERS FOR THIS SERVICE ON THIS WEEK :";
					int customers;
                    cin >> customers;
                    calclaundry1();
                    
                    sales[1][0] += customers;
				}
				else
				{
					cout<<"INVALID CODE. PLEASE TRY AGAIN."<<endl;
					return(0);
				}	
			}
			else if(capacity=='m'||capacity=='M')
			{
				cout<<"YOU HAVE CHOSE MEDIUM DRYING (15KG)"<<endl;
				cout<<"ENTER MODE:(W-WARM)/(C-COLD) :";
				cin>>mode;
				
				if(mode=='w'||mode=='W')
				{
					cout<<"YOU HAVE CHOSE MEDIUM DRYING (15KG) ON WARM MODE"<<endl;
					cout<<"ENTER AMOUNT OF CUSTOMERS FOR THIS SERVICE ON THIS WEEK :";
					int customers;
                    cin >> customers;
                    calclaundry2();
                    
                    sales[1][1] += customers;
				}
				else if(mode=='c'||mode=='C')
				{
					cout<<"YOU HAVE CHOSE MEDIUM DRYING (15KG) ON COLD MODE"<<endl;
					cout<<"ENTER AMOUNT OF CUSTOMERS FOR THIS SERVICE ON THIS WEEK :";
					int customers;
                    cin >> customers;
                    calclaundry2();
                    
                    sales[1][1] += customers;
				}
				else
				{
					cout<<"INVALID CODE. PLEASE TRY AGAIN."<<endl;
					return(0);
				}
			}
			else
			{
				cout<<"INVALID CODE. PLEASE TRY AGAIN."<<endl;
				return(0);
			}
	    }
	    else
	    {
	    	cout<<"INVALID CODE. PLEASE TRY AGAIN."<<endl;
	    	return(0);
		}
		cout<<"END OF WEEK 4TH? (Y-YES/N-NO):";
		cin>>repeat;
		cin.ignore();
		system("cls");
		}
    	while(repeat=='n'|| repeat == 'N');
    	
    	cout<<"TOTAL UTILITIES THIS MONTH: ";
    	cin>>utilities;
    	cout<<"TOTAL RENT THIS MONTH: ";
    	cin>>rent;
    	totalProfit=totalWashingSales+totalDryingSales-utilities-rent;
    	
		cout<<"-------------------------LAUNDRY SERVICE MONTHLY PROFIT---------------------"<<endl;
		cout << "TOTAL NUMBER OF CUSTOMERS: " << totalCustomers << endl;
		cout << "--------------------------------------------" << endl;
		cout << "WASHING SERVICE" << endl;
		cout << "--------------------------------------------" << endl;
		cout << "TOTAL NUMBER OF CUSTOMERS: " << totalWashingCustomers << endl;
		cout << "TOTAL SALES: RM" << totalWashingSales << endl;
		cout << "--------------------------------------------" << endl;
		cout << "DRYING SERVICE" << endl;
		cout << "--------------------------------------------" << endl;
		cout << "TOTAL NUMBER OF CUSTOMERS: " << totalDryingCustomers << endl;
		cout << "TOTAL SALES: RM" << totalDryingSales << endl;
		cout << "--------------------------------------------" << endl;
		cout << "TOTAL PROFIT THIS MONTH: RM" << totalProfit << endl;
		
		cout << "--------------------------------------------" << endl;
		cout << "SALES ARRAY" << endl;
		cout << "--------------------------------------------" << endl;
		displaySales(sales);
		
		return 0;
}

void calclaundry1()
{
		int totalCustomers = 0, totalWashingCustomers = 0, customers = 0;
		int totalSales = 0, totalWashingSales = 0, printProfit = 0;
		int totalProfit = 0, totalWashingProfit = 0;
		int token = 0, stoken = 5;
		totalCustomers += customers;
		totalWashingCustomers += customers;
		totalSales += customers* stoken;
		totalWashingSales += totalSales;
}

void calclaundry2()
{
		int totalCustomers = 0, totalDryingCustomers = 0, customers = 0;
		int totalSales = 0, totalDryingSales = 0, printProfit = 0;
		int totalProfit = 0, totalDryingProfit = 0;
		int token = 0, mtoken = 7;
		totalCustomers += customers;
		totalDryingCustomers += customers;
		totalSales += customers* mtoken;
		totalDryingSales += totalSales;
}

int calcLaundry (char service, char capacity, char mode)
{
   int printProfit;
   if ((service == 'w' || service == 'W') && (capacity == 's' || capacity == 'S') && (mode == 'w' || mode == 'W'))
        printProfit = 3;
    else if ((service == 'w' || service == 'W') && (capacity == 's' || capacity == 'S') && (mode == 'c' || mode == 'C'))
        printProfit = 2;
    else if ((service == 'w' || service == 'W') && (capacity == 'm' || capacity == 'M') && (mode == 'w' || mode == 'W'))
        printProfit = 4;
    else if ((service == 'w' || service == 'W') && (capacity == 'm' || capacity == 'M') && (mode == 'c' || mode == 'C'))
        printProfit = 3;
    else if ((service == 'd' || service == 'D') && (capacity == 's' || capacity == 'S') && (mode == 'w' || mode == 'W'))
        printProfit = 2;
    else if ((service == 'd' || service == 'D') && (capacity == 's' || capacity == 'S') && (mode == 'c' || mode == 'C'))
        printProfit = 1;
    else if ((service == 'd' || service == 'D') && (capacity == 'm' || capacity == 'M') && (mode == 'w' || mode == 'W'))
        printProfit = 3;
    else if ((service == 'd' || service == 'D') && (capacity == 'm' || capacity == 'M') && (mode == 'c' || mode == 'C'))
        printProfit = 2;
    else
        printProfit = 1;

    return printProfit;
}

void displaySales(int sales[SIZE][CAPACITY_SIZE])
{
    cout << "SALES FOR EACH TYPE OF SERVICE AND CAPACITY:" << endl;
    cout << setw(12) << " " << setw(8) << "Small" << setw(8) << "Medium" << endl;
    cout << setw(12) << "Washing" << setw(8) << sales[0][0] << setw(8) << sales[0][1] << endl;
    cout << setw(12) << "Drying" << setw(8) << sales[1][0] << setw(8) << sales[1][1] << endl;
}
