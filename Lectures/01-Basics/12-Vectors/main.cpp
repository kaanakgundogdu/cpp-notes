#include <iostream>
#include <vector>


int main()
{
    std::vector <char> emptyVector; //empty
    std::vector <char> names(5); //5 initialized to zero
    std::vector <char> vowels{'a','e','i','o','u'};
    
    std::cout<<vowels[0]<<std::endl;
    std::cout<<vowels[4]<<std::endl;

    std::vector <int> scores(3);// 3 elements all init. to zero
    std::vector <int> scores_another_one(3,100);// 3 elements all init. to 100
    std::vector <int> test_scores{100,98,89};

    std::cout<<"\nTest scores using array syntax."<<std::endl;
    std::cout<<test_scores[0]<<std::endl;
    std::cout<<test_scores[1]<<std::endl;
    std::cout<<test_scores[2]<<std::endl;

    std::cout<<"\nTest scores using VECTOR syntax."<<std::endl;
    
    std::cout<<test_scores.at(0)<<std::endl;
    std::cout<<test_scores.at(1)<<std::endl;
    std::cout<<test_scores.at(2)<<std::endl;
    std::cout<<"\nThere are "<<test_scores.size()<<" scores in the vector."<<std::endl;

    std::cout<<"\nEnter 3 test scores: ";
    std::cin>>test_scores.at(0);
    std::cin>>test_scores.at(1);
    std::cin>>test_scores.at(2);
    
    std::cout<<"\nUpdated test scores."<<std::endl;

    std::cout<<test_scores.at(0)<<std::endl;
    std::cout<<test_scores.at(1)<<std::endl;
    std::cout<<test_scores.at(2)<<std::endl;
    
    std::cout<<"\nEnter a test score to add to the vector. ";
    
    int score_to_add{0};
    std::cin>>score_to_add;
    
    test_scores.push_back(score_to_add);

    std::cout<<"\nEnter a one more test score to add to the vector. ";

    std::cin>>score_to_add;
    
    test_scores.push_back(score_to_add);
    
    std::cout<<"\nTest scores are now:"<<std::endl;

    std::cout<<test_scores.at(0)<<std::endl;
    std::cout<<test_scores.at(1)<<std::endl;
    std::cout<<test_scores.at(2)<<std::endl;
    std::cout<<test_scores.at(3)<<std::endl;
    std::cout<<test_scores.at(4)<<std::endl;
    std::cout<<"\nThere are "<<test_scores.size()<<" scores in the vector."<<std::endl;


    // 2d vectors
    std::vector<std::vector<int>> movie_ratings
    {
        {1,2,3,4},
        {1,3,4,1},
        {1,1,3,5}
    };
    
    std::cout<<"\nMovie rating for review #1 using array syntax."<<std::endl;
    std::cout<<movie_ratings[0][0]<<std::endl;
    std::cout<<movie_ratings[0][1]<<std::endl;
    std::cout<<movie_ratings[0][2]<<std::endl;
    std::cout<<movie_ratings[0][3]<<std::endl;

    std::cout<<"\nMovie rating for review #1 using vector syntax."<<std::endl;
    std::cout<<movie_ratings.at(0).at(0)<<std::endl;
    std::cout<<movie_ratings.at(0).at(1)<<std::endl;
    std::cout<<movie_ratings.at(0).at(2)<<std::endl;
    std::cout<<movie_ratings.at(0).at(3)<<std::endl;
	return 0;
}
