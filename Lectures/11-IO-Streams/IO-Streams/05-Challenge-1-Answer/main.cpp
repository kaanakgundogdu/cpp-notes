// Section 19
// Challenge 1
// Formatting output
#include <iostream>
#include <iomanip>
#include <vector>
#include <string>

struct City {
    std::string name;
    long population;
    double cost;
};

// Assume each country has at least 1 city
struct Country {
    std::string name;
    std::vector<City> cities;
};

struct Tours {
    std::string title;
    std::vector<Country> countries;
};

void ruler(){
    std::cout<<"\n123456789012345678901234567890123456789012345678901234567890123456789012345678901234567890"<<std::endl;

}

int main()
{
    Tours tours
        { "Tour Ticket Prices from Miami",
            {
                {
                    "Colombia", { 
                        { "Bogota", 8778000, 400.98 },
                        { "Cali", 2401000, 424.12 },
                        { "Medellin", 2464000, 350.98 },
                        { "Cartagena", 972000, 345.34 } 
                    },
                },
                {
                    "Brazil", { 
                        { "Rio De Janiero", 13500000, 567.45 },
                        { "Sao Paulo", 11310000, 975.45 },
                        { "Salvador", 18234000, 855.99 }
                    },
                },
                {
                    "Chile", { 
                        { "Valdivia", 260000, 569.12 }, 
                        { "Santiago", 7040000, 520.00 }
                },
            },
                { "Argentina", { 
                    { "Buenos Aires", 3010000, 723.77 } 
                } 
            },
        }
    };

    // Unformatted display so you can see how to access the vector elements
    ruler();
    const int total_w{70};
    const int field1_w{20};
    const int field2_w{20};
    const int field3_w{15};
    const int field4_w{15};
    
    int title_l=tours.title.length();
    int sp= (total_w-title_l)/2;
    
    std::cout << std::setw(sp) <<""<< tours.title << std::endl;
    std::cout << std::endl;
    
    std::cout<< std::setw(field1_w) << std::left << "Country"
             << std::setw(field2_w) << std::left << "City"
             << std::setw(field3_w) << std::right << "Population"
             << std::setw(field4_w) << std::right << "Cost"
             <<std::endl;
    
    std::cout<<std::setw(total_w)
             << std::setfill('-')
             <<""
             <<std::endl;
             
    std::cout<<std::setfill(' ');
    std::cout<<std::setprecision(2)<<std::fixed;
    
    for(Country country : tours.countries) {
        for (size_t i = 0; i<country.cities.size(); ++i) {
            std::cout << std::setw(field1_w) << std::left <<  ((i == 0) ? country.name : "") // conditional operator
                           << std::setw(field2_w) << std::left << country.cities.at(i).name 
                           << std::setw(field3_w) << std::right<< country.cities.at(i).population 
                           << std::setw(field4_w) << std::right << country.cities.at(i).cost 
                           << std::endl;
        }
    }

    std::cout << std::endl << std::endl;
    return 0;
}