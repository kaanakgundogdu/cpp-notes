#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>  // for std::iota

void test1()
{
	std::cout << "\n---- Displays each element of nums ----" << std::endl;
	
	std::vector<int> nums {10,20,30,40,50};
	
	std::for_each(nums.begin(), nums.end(), [] (int num) {
        std::cout << num << " ";
    });
    std::cout<<std::endl;
}

void test2()
{
	std::cout << "\n---- is_permutation:Non-modifying sequence operation test two triangles are equivalent ----" << std::endl;
	
	struct Point
	{
		int x;
		int y;
	};
	
	Point pt1{1,2};
	Point pt2{4,3};
	Point pt3{3,5};
	Point pt4{3,1};
	
	std::vector<Point> triangle1 {pt1,pt2,pt3};
	std::vector<Point> triangle2 {pt2,pt3,pt1};
	std::vector<Point> triangle3 {pt1,pt2,pt4};
	
	std::cout << "\n---- is triangle1 and triangle2 are equivalent ----" << std::endl;

	if (std::is_permutation(triangle1.begin(), triangle1.end(), triangle2.begin(), [] (Point lhs, Point rhs) {
        return lhs.x == rhs.x && lhs.y == rhs.y;
        })
    )
		std::cout << "Triangle1 and Triangle2 are equivalent!" << std::endl;
	else
		std::cout << "Triangle1 and Triangle2 are not equivalent!" << std::endl;
		
    std::cout << "\n---- is triangle1 and triangle3 are equivalent ----" << std::endl;
	if (std::is_permutation(triangle1.begin(), triangle1.end(), triangle3.begin(), [] (Point lhs, Point rhs) {
        return lhs.x == rhs.x && lhs.y == rhs.y;
        })
    )
		std::cout << "Triangle1 and Triangle3 are equivalent!" << std::endl;
	else
		std::cout << "Triangle1 and Triangle3 are not equivalent!" << std::endl;
}

void test3()
{
	std::cout << "\n---- transform - Modifying sequence operation ----" << std::endl;
	
	std::vector<int> test_scores {93,88,75,68,65};
	
    std::cout << "\n---- Display test_scores ----" << std::endl;

    for (int score : test_scores)
		std::cout << score << " ";
    std::cout<<std::endl;
    int bonus_points {5};
    
	std::transform(test_scores.begin(), test_scores.end(), test_scores.begin(), [bonus_points] (int score) {
        return score += bonus_points;
    });
	
    std::cout << "\n---- Display updated test_scores ----" << std::endl;
	for (int score : test_scores)
		std::cout << score << " ";
}

void test4()
{
	std::cout << "\n\n---- remove_if - Modifying sequence operation ----" << std::endl;
	
	std::vector<int> nums {1,2,3,4,5,6,7,8};

    std::cout << "\n---- Display nums ----" << std::endl;

    for (int num : nums)
		std::cout << num << " ";
    std::cout<<std::endl;
    
	nums.erase(std::remove_if(nums.begin(), nums.end(), [] (int num) {
            return num % 2 == 0;
        }), 
        nums.end());
	
    std::cout << "\n---- Display updated nums. Removed even numbers ----" << std::endl;
	for (int num : nums)
		std::cout << num << " ";
    std::cout<<std::endl;
}

class Person {
	friend std::ostream &operator<<(std::ostream &os, const Person &rhs);
private:
    std::string name;
    int age;
public:
    Person(std::string name, int age) : name{name}, age{age} {};
    Person(const Person &p): name{p.name}, age{p.age} { }
    ~Person() = default;
     std::string get_name() const { return name; }
    void set_name(std::string name) {this->name = name; };
    int get_age() const {return age; }
    void set_age(int age) {this->age = age; }
};

std::ostream &operator<<(std::ostream &os, const Person &rhs) {
    os << "[Person: " <<rhs.name << " : " <<rhs.age << "]";
    return os;
}

void test5()
{
    std::cout << "\n\n---- sort - Sorting ----" << std::endl;
	
	Person person1("Kaan", 27);
	Person person2("Robinson", 54);
	Person person3("Makoto", 24);
	
	std::vector<Person> people {person1,person2,person3};
	
    std::cout << "---- Sort people by name in ascending order ----" << std::endl;
	std::sort(people.begin(), people.end(), [] (Person lhs, Person rhs) {
        return lhs.get_name() < rhs.get_name();
    });
	
    std::cout << "---- Displays people sorted by name in ascending order ----" << std::endl;
	for (Person person : people)
		std::cout << person << std::endl;
		
	std::cout << "\n";
	std::sort(people.begin(), people.end(), [] (Person lhs, Person rhs) {
        return lhs.get_age() > rhs.get_age();
    });
	
    std::cout << "---- Displays people sorted by age in descending order ----" << std::endl;
	for (Person person : people)
		std::cout << person << std::endl;
}

bool in_between(const std::vector<int> &nums, int start_value, int end_value) {
    bool result {false};
    result = std::all_of(nums.begin(), nums.end(), [start_value, end_value](int value) {
        return value >= start_value && value <= end_value;
    });
    return result;
}

void test6() {
    std::cout << "\n---- std::iota Fills the range, all_of - Non-modifying sequence operation ----" << std::endl;
    std::cout << std::boolalpha;

    std::vector<int> nums(10);
    std::iota(nums.begin(), nums.end(), 1);  
    
    /* std::iota
        *(first)   = value;
        *(first+1) = ++value;
        *(first+2) = ++value;
        *(first+3) = ++value;
        */
    std::cout << "---- Display nums ----" << std::endl;
    for (int num : nums)
        std::cout << num << " ";
        
    std::cout << std::endl;

    std::cout << "---- is all between 50-60 ----" << std::endl;
    std::cout << in_between(nums, 50, 60) << std::endl;
    std::cout << "---- is all between 1-10 ----" << std::endl;
    std::cout << in_between(nums, 1, 10) << std::endl;
    std::cout << "---- is all between 5-7 ----" << std::endl;
    std::cout << in_between(nums, 5, 7) << std::endl;
}

class Password_Validator1 {
private:
	char restricted_symbol {'$'};
public:
	bool is_valid(std::string password) {
		return std::all_of(password.begin(), password.end(), [this] (char character) {
            return character != restricted_symbol;
        });
	}
};

class Password_Validator2 {
private:
	std::vector<char> restricted_symbols {'!','$','+'};
public:
	bool is_valid(std::string password) {
		return std::all_of(password.begin(), password.end(), [this] (char character) {
			return std::none_of(restricted_symbols.begin(), restricted_symbols.end(), [character] (char symbol) {
				return character == symbol;});});
	}
};

void test7()
{
    std::cout << "\n------------- Password_Validator pv1 ----------------" << std::endl;
	
	// Password_Validator1 --------------------------------------------------
	std::string password {"holywood1$"};
	Password_Validator1 pv1;
	
    std::cout << "---- Test whether password is valid ----" << std::endl;
	if (pv1.is_valid(password))
		std::cout << "The password " << password << " is valid!" << std::endl;
	else
		std::cout << "The password " << password << " is not valid!" << std::endl;
		
    std::cout << "---- Test whether new password is valid ----" << std::endl;
	password = "hollywood1";
	if (pv1.is_valid(password))
		std::cout << "The password " << password << " is valid!" << std::endl;
	else
		std::cout << "The password " << password << " is not valid!" << std::endl;
        
    
    std::cout << "\n\n--------------- Password_Validator2 version 2 pv2 -------------------" << std::endl;
	password = "C++Rocks!";
	Password_Validator2 pv2;
	
    std::cout << "---- Test whether password is valid ----" << std::endl;
	if (pv2.is_valid(password))
		std::cout << "The password " << password << " is valid!" << std::endl;
	else
		std::cout << "The password " << password << " is not valid!" << std::endl;
		
    std::cout << "---- Test whether new password is valid ----" << std::endl;
	password = "CPlusPlusRocks!";
	if (pv2.is_valid(password))
		std::cout << "The password " << password << " is valid!" << std::endl;
	else
		std::cout << "The password " << password << " is not valid!" << std::endl;
		
    std::cout << "---- Test whether new password is valid ----" << std::endl;
	password = "CPlusPlusRocks";
	if (pv2.is_valid(password))
		std::cout << "The password " << password << " is valid!" << std::endl;
	else
		std::cout << "The password " << password << " is not valid!" << std::endl;
}

int main()
{
	test1();
	test2();
	test3();
	test4();
	test5();
	test6();
    test7();
	
	std::cout << "\n";
	return 0;
}
