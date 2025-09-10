//(FOR LOOP)
#include <iostream>
using namespace std;

int main() {
   
    for (int i = 2; i <= 10; i += 2) {
        cout <<": " << i << endl;
    }

}

‎//(WHILE LOOP)
‎#include <iostream>
‎using namespace std;
‎
‎int main() {
‎    int i = 1;
‎
‎    while (i <= 5) {
‎        if (i % 2 == 0) {
‎            cout << i << " is even" << endl;
‎        } else {
‎            cout << i << " is odd" << endl;
‎        }
‎        i++;
‎    }
‎
‎    return 0;
‎}
‎
‎//(DO WHILE LOOP)
‎#include <iostream>
‎using namespace std;
‎
‎int main () {
‎    string name;
‎    
‎    do{ 
‎        cout<< "Entered a username: ";
‎        cin>> name;
‎    }while (name != "lucio");
‎       cout<< "You Entered The Exact Name: " << name << endl;
‎        
‎        
‎    return 0;
‎  
‎}