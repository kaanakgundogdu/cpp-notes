#include <iostream>
#include <cctype>
#include <vector>
#include <iomanip>

void print_menu();
char get_input();
void print_numbers(const std::vector<int>);
void add_number(std::vector<int> &numbers);
void calculate_mean(const std::vector<int>);
void display_smallest_num(const std::vector<int>);
void display_largest_num(const std::vector<int>);
void quit();

int main()
{
    std::vector <int> numbers;
    char selection{};

    do{
        print_menu();

        selection=get_input();

        if(selection=='P'){
            print_numbers(numbers);
        }
        else if(selection=='A'){
            add_number(numbers);
        }

        else if(selection=='M'){
            calculate_mean(numbers);
        }

        else if(selection=='S'){
            display_smallest_num(numbers);
        }

        else if(selection=='L'){
            display_largest_num(numbers);
        }

        else if(selection=='Q'){
            quit();
        }
        else{
            std::cout<<"Invalid input "<<std::endl;
        }
    }

    while(selection!='Q');


	return 0;
}

void print_menu(){
    std::cout<<"P- Print numbers"<<std::endl;
    std::cout<<"A- Add a number"<<std::endl;
    std::cout<<"M- Mean of numbers"<<std::endl;
    std::cout<<"S- Display smallest num"<<std::endl;
    std::cout<<"L- Display largest num"<<std::endl;
    std::cout<<"Q- Quit"<<std::endl;
}
char get_input(){
    char c {};
    std::cout<<"\nEnter your selection: ";
    std::cin>>c;
    return toupper(c);
}

void print_numbers(const std::vector<int> numbers){
    std::cout<<"\n[ ";
    for(unsigned i{0}; i<numbers.size();++i){
        std::cout<<numbers[i]<<" ";
    }
    std::cout<<"]\n";
}

void add_number(std::vector<int> &numbers){
    int addedNumber{0};
    std::cout<<"\nEnter an integer: ";
    std::cin>>addedNumber;
    numbers.push_back(addedNumber);
}

void calculate_mean(const std::vector<int> numbers){
    if(numbers.size()==0){
        std::cout<<"\nVector is empty\n"<<std::endl;
    }
    else{
        int sum=0;
        double mean;
        for(auto i:numbers){
            sum+=i;
        }
        mean=static_cast<double>(sum)/numbers.size();
        std::cout<<std::fixed<<std::setprecision(1);
        std::cout<<"\nMean is "<<mean<<"\n"<<std::endl;
    }
}

void display_smallest_num(const std::vector<int> numbers){
    if(numbers.size()==0){
        std::cout<<"\nVector is empty\n"<<std::endl;
    }
    else{
        int smallest=numbers[0];
        for(auto i:numbers){
            if(i<smallest)
                smallest=i;
        }
        std::cout<<"\nSmallest number is: "<<smallest<<"\n"<<std::endl;
    }
}

void display_largest_num(const std::vector<int> numbers){
    if(numbers.size()==0){
        std::cout<<"\nVector is empty\n"<<std::endl;
    }
    else{
        int biggest=0;
        for(auto i:numbers){
            if(i>biggest)
                biggest=i;
        }
        std::cout<<"\nLargest number is: "<<biggest<<"\n"<<std::endl;
    }
}

void quit(){
    std::cout<<"Sayanora."<<std::endl;
}