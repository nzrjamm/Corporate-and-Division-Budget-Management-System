#include <iostream>
#include "Rectangle.h"
#include "Sale.h"
#include "InverntoryItem.h"
#include "Accaount.h"
#include <iomanip>
#include "Budjet.h"

using namespace std;




int main() {
    int count;
    double mainOfficeRequest;
    const int numberOfDivisions=4;


    cout<<" Enter the main office's budget request: ";
    cin>> mainOfficeRequest;
    Budjet::mainOffice(mainOfficeRequest);

    Budjet division[numberOfDivisions];

    for (count = 0; count <numberOfDivisions ; ++count) {
        double budgetAmount;
        cout<<"Enter the Budget request for division "<<(count+1)<<":";
        cin>>budgetAmount;
        division[count].addBudget(budgetAmount);
    }
    cout<<fixed<<showpoint<<setprecision(2);
cout<<"\n Total Budget request: \t $";
    cout<<division[0].getCorpBudget()<<endl;
    return 0;

}
