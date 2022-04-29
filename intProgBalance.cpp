#include <iostream>

using namespace std;

int main ()
{
    double balance;
    int response;
    int year =1;
    const double INT_RATE = 0.03;

    //get bank balance
    cout<<"Enter initial bank balance: ";
    cin >> balance;

    do 
    {
        balance = balance + balance * INT_RATE;
        cout <<"\nAfter year " << year << " at " <<INT_RATE
            <<" interest rate, balance is $" << balance;

        year = year + 1; //update counter

        cout << "\nDo you want to see the balance "
            <<"at the end of another year?" <<endl;

            cout << "Enter 1 for yes"
            << "or any other number for no: ";

            cin >> response;
    }while (response == 1);

    return 0;
    
}