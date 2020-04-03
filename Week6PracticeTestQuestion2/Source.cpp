/************************************************
** Author: Andrea Hayes
** Date:
** Purpose:
** Input:
** Processing:
** Output:
*************************************************/
#include <iostream>
#include <iomanip>
using namespace std;
int main() {

    double height, weight;
    bool heightOk=false, weightOk=false;
    char gender,m, f;

    cout << "Gender (M/F): ";
    cin >> gender;
    cout << "Height (inches): ";
    cin >> height;
    cout << "Weight (pounds): ";
    cin >> weight;

    
    if ((gender=='m' && height >= 62 && height <= 78) || (gender == 'f' && height >= 60 && height <= 72))
    {
        heightOk = true;
    }
    if ((gender == 'm' && weight >= 130 && weight <= 250) || (gender == 'f' && weight >= 110 && weight <= 185))
    {
        weightOk = true;
    }
    if (!gender == 'm' || !gender == 'f')
    {
        cout << "Please enter M Or F for gender.";
    }
    else if (!heightOk && !weightOk)
    {
        cout << "Candidate rejected due to height and weight requirements.";
    }
    else if (!heightOk) {
        cout << "Candidate rejected due to height requirements.";
    } 
    else if (!weightOk) {
        cout << "Candidate rejected due to weight requirements.";
    }
    else {
        cout << "Candidate is accepted.";
    }
    
    return 0;
}