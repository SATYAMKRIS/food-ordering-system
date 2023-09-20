/*FOOD ORDERING SYSTEM USING C++
PROBLEM MAKE A PROGRAM THAT SELECTS AN ORDER FOR THE CUSTOMER 
DISPLAY THE MENU OF EACH ITEM ALONG WITH COLD DRINK FOR PHP 40.00 

MENU                        PRICE
A. BURGER                   PHP 60.00
B. PIZZA LARGE              PHP 150.00
C. PIZZA SMALL              PHP 80.00
D. SANDWICH                 PHP 40.00
E. SAMOSA                   PHP 20.00
F. NOODLES                  PHP 60.00
G. MOMOS SMALL PLATE        PHP 40.00
H. MOMOS LARGE PLATE        PHP 80.00
I. DOSA                     PHP 80.00
J. THALI                    PHP 250.00
K. FRENCH FRIES             PHP 75.00
L. CHILLI POTATO             PHP 80.00


IF CASH LESS THAN ORDER AMOUNT THEN RETURN INSUFFICIENT CASH
IF GREATER THAM RETURN THANK YOU ENJOY YOUR MEAL*/

#include <iostream>
using namespace std;
int main()
{
    float ColdDrink = 40.00;
    float price, money, change;
    char choice;
    cout<<"FAST FOOD CORNER"<<endl<<endl;
    cout<<"YOUR ORDER WILL BE INCLUDING COLDDRINK OF WORTH RS 40.00"<<endl;
    cout<<"\n\n";
     cout<<"MENU \t\t\t\t\tPRICE"<<endl;
    cout<<"[A-BURGER]-BURGER \t\t\tRS 60.00"<<endl;
    cout<<"[B-PIZZA LARGE]-PIZZA LARGE \t\tRS 150.00"<<endl;
    cout<<"[C-PIZZA SMALL]-PIZZA SMALL \t\tRS 80.00"<<endl;
    cout<<"[D-SAMOSA]-SAMOSA \t\t\tRS 40.00"<<endl;
    cout<<"[D-SANDWICH]-SANDWICH \t\t\tRS 20.00"<<endl;
    cout<<"[E-NOODLES]-NOODLES \t\t\tRS 60.00"<<endl;
    cout<<"[F-MOMOS SMALL]-MOMOS SMALL \t\tRS 40.00"<<endl;
    cout<<"[G-MOMOS LARGE]-MOMOS LARGE \t\tRS 80.00"<<endl;
    cout<<"[H-DOSA]-DOSA \t\t\t\tRS 80.00"<<endl;
    cout<<"[I-THALI]-THALI \t\t\tRS 250.00"<<endl;
    cout<<"[J-FRENCH FRIES]-FRENCH FRIES \t\tRS 75.00"<<endl;
    cout<<"[K-CHILLI POTATO]-CHILLI POTATO \tRS 80.00"<<endl;
    cout<<"\n\n";
    cout<<"ENTER YOUR ORDER\n";
    cout<<"\n";
    cin>>choice;

    switch(choice)
    {
        case 'A': price = ColdDrink + 60;
        cout<<"\nTOTAL BILL IS: RS \t"<<price<<".00"<<endl;
        break;
        case 'B': price = ColdDrink + 150;
        cout<<"\nTOTAL BILL IS: RS \t"<<price<<".00"<<endl;
        break;
        case 'C': price = ColdDrink + 80;
        cout<<"\nTOTAL BILL IS: RS \t"<<price<<".00"<<endl;
        break;
        case 'D': price = ColdDrink + 40;
        cout<<"\nTOTAL BILL IS: RS \t"<<price<<".00"<<endl;
        break;
        case 'E': price = ColdDrink + 20;
        cout<<"\nTOTAL BILL IS: RS \t"<<price<<".00"<<endl;
        break;
        case 'F': price = ColdDrink + 60;
        cout<<"\nTOTAL BILL IS: RS \t"<<price<<".00"<<endl;
        break;
        case 'G': price = ColdDrink + 40;
        cout<<"\nTOTAL BILL IS: RS \t"<<price<<".00"<<endl;
        break;
        case 'H': price = ColdDrink + 80;
        cout<<"\nTOTAL BILL IS: RS \t"<<price<<".00"<<endl;
        break;
        case 'I': price = ColdDrink + 80;
        cout<<"\nTOTAL BILL IS: RS \t"<<price<<".00"<<endl;
        break;
        case 'J': price = ColdDrink + 250;
        cout<<"\nTOTAL BILL IS: RS \t"<<price<<".00"<<endl;
        break;
        case 'K': price = ColdDrink + 75;
        cout<<"\nTOTAL BILL IS: RS \t"<<price<<".00"<<endl;
        break;
        default: cout<<"\nSORRY SIR! WE DONT HAVE THAT ITEM IN OUR MENU."<<endl;
        return 0;
        break;
    }
    cout<<"ENTER CASH PAYMENT: RS\t";
    cin>>money;
    change= money-price;
    if (money>price)
    {
        cout<<"YOUR CHANGE:RS\t"<<change<<endl;
        cout<<"THANK YOU! ENJOY YOUR MEAL\n";
    }
    else if(money==price)
    {
        cout<<"YOUR CHANGE: RS\t"<<change<<endl;
        cout<<"THANK YOU! YOU PAID THE EXACT AMOUNT!\n";
    }
    else if(money<price)
    {
        cout<<"INSUFFICIENT CASH IS PAID!, PLEASE PAY THE TOTAL AMOUNT!"<<endl;
    }
system("pause");
return 0;
}


