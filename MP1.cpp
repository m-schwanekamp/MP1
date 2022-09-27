// MP1- This program calculates business transactions of Jim's Donut Shop.
// It calculates the amount of money needed for an amount of donuts, and 
// therefore calculates change based on the money given by the customer.

#include <iostream>
#include <iomanip>
using namespace std;
int main (void) {
    double amtDue;
    double amtgiven;
    double changeDue;
    int dollars;
    int quarters;
    int dimes;
    int nickels;
    int pennies;
    int coins;
    
    // Prompt user for the number of regular donuts being bought.
    int regular;
    cout << "How many regular donuts were bought?";
    cin >> regular;
    cout << "Number of regular donuts ordered: " << regular << endl;

    // Cost of regular donuts vs. number of regular donuts.
    double regDoz;
    double regOne;
    double regCost;
    regDoz = (regular / 12) * 7.99;
    regOne = (regular % 12) * 0.75;
    regCost = regDoz + regOne;
    cout << regCost << endl;

    // Prompt user for the number of fancy donuts being bought.
    int fancy;
    cout << "How many fancy donuts were bought?";
    cin >> fancy;
    cout << "Number of fancy donuts ordered: " << fancy << endl;

    // Cost of fancy donuts vs. number of fancy donuts.
    double fancyDoz;
    double fancyOne;
    double fancyCost;
    fancyDoz = (fancy / 12) * 8.49;
    fancyOne = (fancy % 12) * 0.85;
    fancyCost = fancyDoz + fancyOne;
    cout << fancyCost << endl;

    // Prompt user for the number of apple fritters being bought.
    int apple;
    cout << "How many apple fritters were bought?";
    cin >> apple;
    cout << "Number of apple fritters ordered: " << apple << endl;

    // Cost of apple fritters vs. number of apple fritters.
    double appleCost;
    appleCost =  apple * 1.50;
    cout << appleCost << endl;
    
      // Calculate total cost of donuts with sales tax
    amtDue = (regCost + fancyCost + appleCost) * 1.075;
    cout << fixed << setprecision(2);
    cout << " amount due " << amtDue << endl;

    // Prompt the customer for how much they are paying
    cout << "How much money is being given in payment?";
    cin >> amtgiven;
    cout << "Customer pays " << amtgiven << endl;

    // Calculate change for the customer
    changeDue = amtgiven - amtDue;
    cout << "change due is " << changeDue << endl;

    // Calculate number of coins customer is owed
    coins = changeDue * 100;
    dollars = coins / 100;
    cout << "dollars " << dollars << endl;
    coins = coins % 100;
    quarters = coins / 25;
    cout << "quarters " << quarters << endl;
    coins = coins - (quarters * 25);
    dimes = coins / 10;
    cout << "dimes " << dimes << endl;
    coins = coins - (dimes * 10);
    nickels = coins / 5;
    cout << "nickels " << nickels << endl;
    coins = coins - (nickels * 5);
    pennies = coins / 1;
    cout << "pennies " << pennies << endl;

    // Output for sample runs
    cout << "Number of regular donuts ordered: ";
    cout << regular << endl;
    cout << "Number of fancy donuts ordered: ";
    cout << fancy << endl;
    cout << "Number of apple fritters ordered: ";
    cout << apple << endl;
    cout << "Customer owes ";
    cout << amtDue << endl;
    cout << "Customer pays ";
    cout << amtgiven << endl;

    // Determine the correct output of change
    if (changeDue = 0) {
        cout << "Exact payment received - no change owed.\n";
    }
    else if (changeDue > 0) {
        cout << "Change owed is " << changeDue << " - ";
        if (dollars = 1) {
            cout << dollars << " dollars, ";
        }
        else if (dollars > 1) {
            cout << dollars << " dollar, ";
        }
        if (quarters = 1) {
            cout << quarters << " quarter, ";
        }
        else if (quarters > 1) {
            cout << quarters << " quarters, ";
        }
        if (dimes = 1) {
            cout << dimes << " dime, ";
        }
        else if (dimes > 1) {
            cout << dimes << " dimes, ";
        }
        if (nickels = 1) {
            cout << nickels << " nickel, ";
        }
        else if (nickels > 1) {
            cout << nickels << " nickels, ";
        }
        if (pennies = 1) {
            cout << pennies << " penny, ";
        }
        else if (pennies > 1) {
            cout << pennies << " pennies." << endl;
        }
    }
    return 0;
}
