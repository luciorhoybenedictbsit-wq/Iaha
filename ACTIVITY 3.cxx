#include <iostream>
using namespace std;

int main () {
    
    int hours, minutes, total;
    
    cout<<" Input hours: ";
    cin>> hours;
    
    cout<<" Input minutes: ";
    cin>> minutes;
    
    total =(hours * 60) + minutes;
    
    cout << " Total:  " << total << " minutes "<< endl;
    return 0;
    
    
    
}