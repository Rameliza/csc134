// CSC 134
// M7T1
// Abreanna Ramelize
// 5/3/2025

#include <iostream>
using namespace std;

class Restaurant {
  private:
    string name;    
    double rating;  // 0 to 5 for the rating

  public:
	// constructor 
	Restaurant(string n, double r) {
		name = n;
		rating = r;
	}
    // empty constructor
    Restaurant() {
        
    }
	// getters and setters
    void setName(string n) {
        name = n; 
    }
    void setRating(double r) {
        rating = r;
    }
    string getName() const {
        return name;
    }
    double getRating() const {
        return rating;
    }
    // Display the information
    void showInfo() {
        cout << name << "-------" << rating << " stars" << endl;
        
    }
};

int main() {
    cout << "M7T1 - Restaurant Reviews" << endl;

    // First restaurant
    Restaurant dinner_place("Smash Burgers" , 5);

    // Second Restaurant
    Restaurant breakfast_place("Pancake House", 3.5); 

    // Third Restaurant
    Restaurant lunch_place("Tacos El Papi", 4);

    

    // Finally, show all the data.
    cout << "----------" << endl;
    dinner_place.showInfo();
    breakfast_place.showInfo();
    lunch_place.showInfo();


    return 0;

}