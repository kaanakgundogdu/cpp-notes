#include <iostream>

int main()
{
    
    char vowels[] {'a','e','i','o','u'};
    std::cout<<"\nThe first vowel is "<<vowels[0]<<std::endl;
    std::cout<<"\nThe last vowel is "<<vowels[4]<<std::endl;

    double hi_temps[] {90.1,89.8,77.5,81.6};
    std::cout<<"\nThe first high temperature is "<<hi_temps[0]<<std::endl;

    hi_temps[0]=100.7;

    std::cout<<"\nThe first high temperature is now "<<hi_temps[0]<<std::endl;

    int test_scores[5];
    std::cout<<"\nFirst test score is "<<test_scores[0]<<std::endl;
    std::cout<<"Second test score is "<<test_scores[1]<<std::endl;
    std::cout<<"Third test score is "<<test_scores[2]<<std::endl;
    std::cout<<"Fourth test score is "<<test_scores[3]<<std::endl;
    std::cout<<"Fifth test score is "<<test_scores[4]<<std::endl;

    std::cout<<"\nEnter 5 test scores: ";
    std::cin>>test_scores[0];
    std::cin>>test_scores[1];
    std::cin>>test_scores[2];
    std::cin>>test_scores[3];
    std::cin>>test_scores[4];
    
    std::cout<<"\nUpdated array is:"<<std::endl;

    std::cout<<"\nFirst test score is "<<test_scores[0]<<std::endl;
    std::cout<<"Second test score is "<<test_scores[1]<<std::endl;
    std::cout<<"Third test score is "<<test_scores[2]<<std::endl;
    std::cout<<"Fourth test score is "<<test_scores[3]<<std::endl;
    std::cout<<"Fifth test score is "<<test_scores[4]<<std::endl;
    
    
    std::cout<<"\nOnly write array:"<<std::endl;
    std::cout<<"Array is: "<<test_scores<<std::endl;//this writes address

    
    
	return 0;
}
