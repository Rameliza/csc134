// CSC 134
// M5LAB1
// Abreanna Ramelize
// 4/15/2025



#include <iostream>
using namespace std;

// Function Prototypes
void main_menu();
void choice_spooky_wood();
void choice_flower_garden();
void choice_call_mom_and_go_home();
void choice_lost_in_the_forest();

// Choose from the choices
void choice_fearless_granddaughter();
void choice_friendly_grandaughter();
void choice_nothing();


int main() {
    cout << "Choose Your Path To Deliver Cookies To Grandma" << endl;
    // load up the main menu
    main_menu();
    // when we return here, we're done
    cout << "Thanks for delivering the cookies for grandma!" << endl;
    return 0; // finished with no errors
}

void main_menu() {
    // Write a simple menu that lets the user choose 1, 2, 3, or 4 to quit.
    cout << "Main Menu" << endl;
    cout << "You're at the beginning of the woods..." << endl;
    cout << "Do you:" << endl;
    cout << "1. Go down the spooky woods path" << endl;
    cout << "2. Take the flower garden path" << endl;
    cout << "3. Call mom to see if she needs help and go home" << endl;
    cout << "4. Wander deeper into the forest and risk getting lost" << endl; // New branch added
    cout << "Choose: ";
    int choice;
    cin >> choice;
    if (1 == choice) {
        choice_spooky_wood();
    } else if (2 == choice) {
        choice_flower_garden();
    } else if (3 == choice) {
        choice_call_mom_and_go_home();
    } else if (4 == choice) { 
        choice_lost_in_the_forest();
    } else {
        cout << "That's not a valid choice, please try again." << endl;
        cin.ignore(); // clear the user input
        main_menu();  // try again
    }
}

// FUNCTION DEFINITIONS
void choice_spooky_wood() {
    cout << "Try walking through the spooky woods and watch out for the spiders!" << endl;
    cout << "The branch is blocking the road. " << endl;
    cout << "Do you:" << endl;
    cout << "1. Try to pick it up and move it?" << endl;
    cout << "2. Call a friend to help?" << endl;
    int choice;
    cout << "Choose: ";
    cin >> choice;
    if (1 == choice) {
        choice_flower_garden();
    } else if (2 == choice) {
        choice_call_mom_and_go_home();
    }
}

void choice_flower_garden() { 
    cout << "Try walking through the garden and collect flowers for grandma" << endl; 
    cout << "You found a basket for your flowers." << endl;
    cout << "Do you:" << endl;
    cout << "Take it to collect the flowers?" << endl;
    cout << "Hold the flowers in your hand until it's filled with beautiful flowers." << endl;
}

void choice_call_mom_and_go_home() { 
    cout << "On the way home mom..." << endl;
    cout << "🚚 ... 💥" << endl;
    cout << "You wake up on a third path across the lake from both the spooky woods and flower garden." << endl;
    cout << "Do you:" << endl;
    cout << "1. Use the map mom gave you to find a way around the lake" << endl;
    cout << "2. Swim across the lake" << endl;
    cout << "3. Decide it's all just a dream, and wait to wake up" << endl;
    int choice;
    cin >> choice;
    if (choice == 1) {
        choice_fearless_granddaughter();
    }
    else if (choice == 2) {
        choice_friendly_grandaughter();
    }
    else if (choice == 3) {
        choice_nothing();
    }
}
void choice_lost_in_the_forest() {
  cout << "As you wander deeper into the forest, the trees grow thicker and the path disappears." << endl;
  cout << "You find yourself completely lost, with only the sound of rustling leaves around you." << endl;
  cout << "Do you:" << endl;
  cout << "1. Try to climb a tree to get a better view?" << endl;
  cout << "2. Start marking trees to find your way back?" << endl;

  int choice;
  cin >> choice;

  if (1 == choice) {
      cout << "You climb a tall tree and see the way back to grandma's house. You make it safely!" << endl;
      cout << "***GOOD END***" << endl;
  } else if (2 == choice) {
      cout << "You mark trees as you go, but the forest seems endless. You eventually find help from a passing hiker." << endl;
      cout << "***NEUTRAL END***" << endl;
  } else {
      cout << "Lost and confused, you wander aimlessly until night falls. Unfortunately, you never find your way back." << endl;
      cout << "***BAD END***" << endl;
  }
}

// Choices
void choice_fearless_granddaughter() {
    cout << "You never gave up and delivered the cookies" << endl;
    cout << "***GOOD END***" << endl;
}

void choice_friendly_grandaughter() {
    cout << "You delivered the goods to grandma" << endl;
    cout << "***GOOD END***" << endl;
}

void choice_nothing() {
    cout << "Unfortunately, the spiders attacked you while waiting to decide" << endl;
    cout << "***BAD END -- you have died ***" << endl;
}
