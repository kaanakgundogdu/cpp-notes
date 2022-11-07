#include <iostream>
#include <vector>
#include <string>

enum Direction {North =1, South=10, East, West };
// enum Street {Main, North, Elm};   // Error, can't use North again

std::string direction_to_string(Direction direction) {
    std::string result;
    switch (direction) {
        case North:
            result = "North";
            break;
        case South:
            result = "South";
            break;
        case East:
            result = "East";
            break;
        case West:
            result = "West";
            break;
        default:
            result = "Unknown direction";
    }
    return result;
}

void test1() {
   	std::cout << "\n------- Direction paramater and returns string representation -------\n" << std::endl;

    Direction direction {North};
    std::cout << "\nDirection " << direction << std::endl; 
    std::cout << direction_to_string(direction) << std::endl;
    
    direction = West;
    std::cout << "\nDirection " << direction << std::endl; 
    std::cout << direction_to_string(direction) << std::endl;

    
    // direction = 5;  // Compiler Error
    

    direction = Direction(100);
    std::cout << "\nDirection " << direction << std::endl; 
    std::cout << direction_to_string(direction) << std::endl;

    
    direction = static_cast<Direction>(100);
    std::cout << "\nDirection " << direction << std::endl; 
    std::cout << direction_to_string(direction) << std::endl;
}

enum Grocery_Item {Milk, Bread, Apple, Orange};

std::ostream &operator<<(std::ostream &os, Grocery_Item grocery_item)
{
	switch (grocery_item) {
	    case Milk:      
            os << "Milk"; 
            break;
		case Bread:     
            os << "Bread"; 
            break;
		case Apple:     
            os << "Apple"; 
            break;
		case Orange:    
            os << "Orange"; 
            break;
		default:        
            os << "Invalid item"; 
	}
	return os;
}

bool is_valid_grocery_item(Grocery_Item grocery_item)
{
	switch (grocery_item) {
	    case Milk:  
        case Bread:
        case Apple:
        case Orange:
            return true;
		default:        
            return false; 
	}
}

void display_grocery_list(const std::vector<Grocery_Item> &grocery_list)
{    
	std::cout << "Grocery List" << "\n-----------------" << std::endl;
    int invalid_item_count{0};
    int valid_item_count {0};
	for (Grocery_Item grocery_item : grocery_list)
	{
		std::cout << grocery_item << std::endl;  		
		if (is_valid_grocery_item(grocery_item))
            valid_item_count++;
        else
			invalid_item_count++;
	}
	
	std::cout << "\n-------------------------" << std::endl;
    std::cout << "Valid items: " <<  valid_item_count << std::endl;
    std::cout << "Invalid items: " <<  invalid_item_count << std::endl;
	std::cout << "Total items: " <<  valid_item_count +invalid_item_count << std::endl;
}

void test2() {
    std::cout << "\n-------give Grocery_Items, this function displays the string by overloaed << operator -------\n" << std::endl;
	
	std::vector<Grocery_Item> shopping_list;
    std::cout << "-------adding valid items -------" << std::endl;
	shopping_list.push_back(Apple);
	shopping_list.push_back(Apple);
	shopping_list.push_back(Milk);
	shopping_list.push_back(Orange);
	
    // Grocery_Item item = 100; // Compiler error
    
    int Helicopter {1000};
    std::cout << "-------adding invalid item -------" << std::endl;
	shopping_list.push_back(Grocery_Item(Helicopter));
    std::cout << "-------add Milk again! Grocery_Item(0) -------" << std::endl;
    shopping_list.push_back(Grocery_Item(0));  
    
	display_grocery_list(shopping_list);
}


enum State {Engine_Failure, Inclement_Weather, Nominal, Unknown};
enum Sequence{Abort, Hold, Launch};

// Used for test3
// Overloading the stream extraction operator to allow a user
// to enter the state of State enumeration.
// Note the use of underlying_type_t.
std::istream &operator>>(std::istream &is, State &state) 
{
    // int user_input;   // Will also work
    std::underlying_type_t<State> user_input;
    is >> user_input;
	
    switch (user_input) {
        case Engine_Failure:       
        case Inclement_Weather:
        case Nominal:
        case Unknown:
            state = State(user_input);
            break;
        default:                   
            std::cout << "User input is not a valid launch state." << std::endl;
            state = Unknown;
    }
	
    return is;
}

std::ostream &operator<<(std::ostream &os, const Sequence &sequence)
{
	switch (sequence) {
	    case Abort:    
            os << "Abort"; 
            break;
		case Hold:      
            os << "Hold"; 
            break;
		case Launch:    
            os << "Launch"; 
            break;
    }
	
	return os;
}

// Used for test3
// Displays an information message given the sequence parameter.
void initiate(Sequence sequence)
{
	std::cout << "Initiate " << sequence << " sequence!" << std::endl;   // Uses overloaded operator<<
}


void test3() {
    std::cout << "\n------- rocket launch -------\n" << std::endl;
	
	State state;
	std::cout << "Launch state: ";
	std::cin >> state;               // users the overloaded operator>>
	
	switch (state) {
		case Engine_Failure:        // Abort if Engine Failure
        case Unknown:               // or Unknown!
            initiate(Abort); 
            break;
		case Inclement_Weather:    
            initiate(Hold); 
            break;
		case Nominal:              
            initiate(Launch); 
            break;
	}    
}

int main()
{
    test1();
    test2();
    test3();
	
	std::cout << "\n";
	return 0;
}