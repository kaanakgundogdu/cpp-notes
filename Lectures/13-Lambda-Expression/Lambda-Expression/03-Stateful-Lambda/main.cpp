#include <iostream>
#include <vector>
#include <algorithm>

int global_x {1000};
//The global variable global_x cannot be captured because it is not within the reaching scope of the lambda. 

void test1()
{
   	std::cout << "\n--------- Capture by value (It's the default capture mode)---------" << std::endl;
	
	int local_x {100};
	
	auto l = [local_x] () {
		std::cout << "local_x "<<local_x << std::endl;
		std::cout << "global_x "<< global_x << std::endl;
	};
	l();
}

void test2()
{
   	std::cout << "\n--------- Capture by value - mutable ---------" << std::endl;
	
	int x {100};
	
	auto l = [x] () mutable {
		x += 100;
        //if allready has x adds 100 again not instantiate new x
		std::cout <<"x in lambda "<< x << std::endl;
	};
        
	l();
	std::cout <<"x out lambda "<< x << std::endl;
    
    l();
    std::cout <<"x out lambda "<<  x << std::endl;
}

void test3()
{
   	std::cout << "\n--------- Capture by reference ---------" << std::endl;
	
	int x {100};
	
	auto l = [&x] () mutable {
		x += 100;
		std::cout <<"x in lambda "<<  x << std::endl;
	};
    
    std::cout <<"x out lambda "<<  x << std::endl;

	l();
	std::cout <<"x out lambda "<<  x << std::endl;
}

void test4()
{
   	std::cout << "\n--------- Default capture(capture eerything) by value-mutable ---------" << std::endl;
	
	int x {100};
	int y {200};
	//int z {300};  // Note that z is not captured in the lambda since it is not used.
                      // This should produce an 'unused variable' warning when compiling.
	
	auto l = [=] () mutable {
		x += 999;
		y += 444;
		std::cout<<"x in lambda " << x << std::endl;
		std::cout <<"y in lambda "<< y << std::endl;
	};
	l();
	
	std::cout << "\n";
	std::cout <<"x out lambda "<< x << std::endl;
	std::cout <<"y out lambda "<< y << std::endl;
}

void test5()
{
   	std::cout << "\n--------- Default capture(capture eerything) by reference ---------" << std::endl;
	
	int x {100};
	int y {200};
	int z {300};
	
	auto l = [&] () {
		x += 5000;
		y += 1000;
		z += 2000;
		std::cout <<"x in lambda "<< x << std::endl;
		std::cout <<"y in lambda "<< y << std::endl;
		std::cout <<"z in lambda "<< z << std::endl;
	};
	l();
	
	std::cout << "\n";
	std::cout <<"x out lambda "<< x << std::endl;
	std::cout <<"y out lambda "<< y << std::endl;
	std::cout <<"z out lambda "<< z << std::endl;
}

void test6()
{
   	std::cout << "\n--------- capture everything by value except y is by reference ---------" << std::endl;
	
	int x {100};
	int y {200};
	int z {300};
	
	std::cout <<"x out lambda "<< x << std::endl;
	std::cout <<"y out lambda "<< y << std::endl;
	std::cout <<"z out lambda "<< z <<"\n"<< std::endl;
    
	auto l = [=, &y] () mutable {
		x += 100;
		y += 100;
		z += 100;
		std::cout <<"x in lambda " <<x << std::endl;
		std::cout <<"y in lambda " <<y << std::endl;
		std::cout <<"z in lambda " <<z << std::endl;
	};
	l();
	
	std::cout << "\n";
	std::cout <<"x out lambda "<< x << std::endl;
	std::cout <<"y out lambda "<< y << std::endl;
	std::cout <<"z out lambda "<< z << std::endl;
}


void test7()
{
   	std::cout << "\n--------- Capture everything by ref except x and z. x and z are value ---------" << std::endl;
	
	int x {50};
	int y {90};
	int z {70};
	
	std::cout <<"x out lambda "<< x << std::endl;
	std::cout <<"y out lambda "<< y << std::endl;
	std::cout <<"z out lambda "<< z << std::endl;
    std::cout << "\n";
    
	auto l = [&, x, z] () mutable {
		x += 100;
		y += 100;
		z += 100;
		std::cout <<"x in lambda " <<x << std::endl;
		std::cout <<"y in lambda " <<y << std::endl;
		std::cout <<"z in lambda " <<z << std::endl;
	};
	l();
	
	std::cout << "\n";
	std::cout <<"x out lambda "<< x << std::endl;
	std::cout <<"y out lambda "<< y << std::endl;
	std::cout <<"z out lambda "<< z << std::endl;
}

class Person {
	friend std::ostream &operator<<(std::ostream &os, const Person &rhs);
private:
    std::string name;
    int age;
public:
    Person() = default;
    Person(std::string name, int age) : name{name}, age{age} {}
    Person(const Person &p) = default;
    ~Person() = default;
     std::string get_name() const { return name; }
    void set_name(std::string name) {this->name = name; };
    int get_age() const {return age; }
    void set_age(int age) {this->age = age; }
	
	auto change_person1() {return [this] (std::string new_name, int new_age) {name = new_name; age = new_age;};}
	auto change_person2() {return [=] (std::string new_name, int new_age) {name = new_name; age = new_age;};}
	auto change_person3() {return [&] (std::string new_name, int new_age) {name = new_name; age = new_age;};}
    
};

std::ostream &operator<<(std::ostream &os, const Person &rhs) {
    os << "[Person: " <<rhs.name << " : " <<rhs.age << "]";
    return os;
}

void test8()
{
   	std::cout << "\n--------- Default capture Class. Func. returns lambda ---------" << std::endl;

	Person person("Kaan", 27);
	std::cout << person << std::endl;
	
    std::cout << "\n--------- Change person ->Default capture [this] preferred way ---------" << std::endl;

    //person.change_person1() -> returns lamda 
	auto change_person1 = person.change_person1();
	change_person1("Utada", 30);
	std::cout << person << std::endl;
	
    std::cout << "\n--------- Change person ->Default capture with [=] deprecated after C++20 ---------" << std::endl;

	auto change_person2 = person.change_person2();
	change_person2("Hirose ", 44);
	std::cout << person << std::endl;
	
    std::cout << "\n--------- Change person ->Default capture with [&]---------" << std::endl;
	auto change_person3 = person.change_person3();
	change_person3("Tetsuro ", 69);
	std::cout << person << std::endl;
}

class Lambda {
private:
	int y;
public:
	Lambda(int y) : y{y} {};
	
	void operator() (int x) const {
		std::cout << x + y << std::endl;
	};
};

void test9()
{
   	std::cout << "\n--------- Lambda class equivalence ---------" << std::endl;
	
	int y {100};
	
	Lambda lambda1(y);
    //this code same as in Lambda class. This generete something like that.
	auto lambda2 = [y] (int x) {std::cout << x + y << std::endl;};
	
	lambda1(200);
	lambda2(200);
}

class People {
    std::vector<Person> people;
    int max_people;
public:
    People(int max=10) : max_people(max) { }
    People(const People &p) = default;
    void add(std::string name, int age) {
        people.emplace_back(name, age);
    }
    void set_max_people(int max) {
        max_people = max;
    }
    int get_max_people() const {
        return max_people;
    }
    
    //check for person.age > max_age and ++coun<=max_people 
    //than add vector pf person
    //lambda in this example captures this, by reference, and by value
    std::vector<Person> get_people(int max_age) {
        std::vector<Person> result;
        int count{0};
        std::copy_if(people.begin(), 
                           people.end(), 
                           std::back_inserter(result),
                            [this, &count, max_age](const Person &p){ return p.get_age() > max_age &&  ++count<=max_people;});
        return result;
    }
};


void test10() {
   	std::cout << "\n--------- Call lambda function in vector inside of class ---------" << std::endl;

    People friends;
    friends.add("Larry", 18);
    friends.add("Curly", 25);
    friends.add("Moe", 35);
    friends.add("Frank", 28);
    friends.add("James", 65);
    
    std::cout << std::endl;
    std::cout << "--- get people max age 17 ---" << std::endl;
    auto result = friends.get_people(17);
    
    for (const auto &p: result)
        std::cout << p << std::endl;
    
    std::cout << std::endl;
    std::cout << "--- set_max_people 3 ---" << std::endl;
    friends.set_max_people(3);
    
    result = friends.get_people(17);
    
    for (const auto &p: result)
        std::cout << p << std::endl;
    
    std::cout << std::endl;
    std::cout << "--- get people max age 50 ---" << std::endl;
    result = friends.get_people(50);
    

    for (const auto &p: result)
        std::cout << p << std::endl;
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
	test8();
	test9();
    test10();
	
	std::cout << "\n";
	return 0;
}