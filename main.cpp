#include <iostream> 

using namespace std;

int main() {
    cout << "Hello, Welcome Frank's carpet cleaning" << endl;
    cout << "\nHow many small rooms do you want to clean?"<<endl;
    int number_of_small_rooms {0};
    cin >> number_of_small_rooms;
    cout <<"\nHow many large rooms do you want to clean?"<<endl;
    int number_of_large_rooms {0};
    cin >> number_of_large_rooms; 
    
    const double price_per_small_room {25};
    const double price_per_large_room {35};
    const double sales_tax {0.06};
    int estimate_expire {30};
    double total_cost = (price_per_large_room * number_of_large_rooms) + (price_per_small_room * number_of_small_rooms);
    
    cout << "\nEstimate for carpet cleaning service" << endl;
    cout << "\nNumber of small rooms: " << number_of_small_rooms<<endl;
    cout << "Number of large rooms: " << number_of_large_rooms<<endl;
    
    cout << "Price per small room: $"<<price_per_small_room<<" ==> $" << price_per_small_room * number_of_small_rooms<<  endl;
    cout << "Price per large room: $"<<price_per_large_room<<" ==> $" << price_per_large_room * number_of_large_rooms<<  endl;
    
    cout << "Cost: $" << total_cost <<endl;
    cout << "Tax: $" << total_cost * sales_tax << endl;
    
    cout << "=============================================="<<endl;
    cout << "Total estimate: $" <<(total_cost * sales_tax)+total_cost<< endl;
    cout << "This extimate is valid for " << estimate_expire<< " days" <<endl;
    
    
    
    
    
    return 0;
    }