// MP1- This program calculates business transactions of Jim's Donut Shop.
// It calculates the amount of money needed for an amount of donuts, and 
// therefore calculates change based on the money given by the customer.

#include <iostream>
#include <iomanip>
using namespace std;
int main(void) {
    double amtDue;
    double amtgiven;
    double changeDue;
    int change_due;
    int dollars;
    int quarters;
    int dimes;
    int nickels;
    int pennies;
    int coins;

    // Prompt user for the number of each type of donut being bought.
    int regular;
    cout << "Number of regular donuts ordered: ";
    cin >> regular;

    int fancy;
    cout << "Number of fancy donuts ordered: ";
    cin >> fancy;

    int apple;
    cout << "Number of apple fritters ordered: ";
    cin >> apple;

    // Cost of regular donuts vs. number of regular donuts.
    double regDoz;
    double regOne;
    double regCost;
    regDoz = (regular / 12) * 7.99;
    regOne = (regular % 12) * 0.75;
    regCost = regDoz + regOne;

    // Cost of fancy donuts vs. number of fancy donuts.
    double fancyDoz;
    double fancyOne;
    double fancyCost;
    fancyDoz = (fancy / 12) * 8.49;
    fancyOne = (fancy % 12) * 0.85;
    fancyCost = fancyDoz + fancyOne;

    // Cost of apple fritters vs. number of apple fritters.
    double appleCost;
    appleCost = apple * 1.50;

    // Calculate total cost of donuts with sales tax.
    amtDue = (regCost + fancyCost + appleCost) * 1.075;
    cout << fixed << setprecision(2);
    cout << "Customer owes $";
    cout << amtDue << endl;

    // Prompt the customer for how much they are paying.
    cout << "Customer pays $";
    cin >> amtgiven;
    cout << endl;

    // Calculate change for the customer.
    changeDue = amtgiven - amtDue;
    coins = changeDue * 100;
    if (coins < 1000) {
        change_due = changeDue * 1000;
        if ((change_due % 10) >= 5) {
            coins = (changeDue * 100) + 1;
        }
    }
    else if (coins >= 1000) {
        change_due = changeDue * 1000;
        if ((change_due % 10) >= 5) {
            coins = (changeDue * 100) + 1;
        }
    }
    coins = coins;
  
    // Calculate number of coins customer is owed.
    dollars = coins / 100;
    coins = coins % 100;
    quarters = coins / 25;
    coins = coins - (quarters * 25);
    dimes = coins / 10;
    coins = coins - (dimes * 10);
    nickels = coins / 5;
    coins = coins - (nickels * 5);
    pennies = coins / 1;

    // Determine the correct output of change in greatest
    // to least coin value. String output after each number
    // are changed based on the number of each coin.
    if (coins == 0) {
        cout << "Exact payment received - no change owed.\n";
        return 0;
    }

    if (coins > 0) {
        cout << fixed << setprecision(2);
        cout << "Change owed is $" << changeDue << " - ";
        if (dollars == 1) {
            cout << dollars << " dollar, ";
        }
        else if (dollars > 1) {
            cout << dollars << " dollars, ";
        }
        if (quarters == 1) {
            cout << quarters << " quarter, ";
        }
        else if (quarters > 1) {
            cout << quarters << " quarters, ";
        }
        if (dimes == 1) {
            cout << dimes << " dime, ";
        }
        else if (dimes > 1) {
            cout << dimes << " dimes, ";
        }
        if (nickels == 1) {
            cout << nickels << " nickel, ";
        }
        else if (nickels > 1) {
            cout << nickels << " nickels, ";
        }
        if (pennies == 1) {
            cout << pennies << " penny. ";
        }
        else if (pennies > 1) {
            cout << pennies << " pennies." << endl;
        }
    }
    return 0;
}
