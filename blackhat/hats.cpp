
//
//https://www.youtube.com/watch?v=N5vJSNXPEwA
//

#include <cmath>
#include <iostream>
#include <map>
#include <chrono>
#include <thread>

    // conditions: 1 mistake at guessing will be tolerated.

    // person i counts number of black hats
    // odd number of black hats implies phrase "black"
    // even number of black hats implies phrase "white"

    //next person after i knows based on doing the same whether
    // the amount of black hats has changed

    // hasn't changed -> own hat is white
    // has changed -> own hat is black
    
    
    int main(int argc, char *argv[]){

	int people = 0;
	int hatcolor = 0;
	std::map<int, std::string> h;
	
	std::cout << "------------------------" << std::endl;
	std::cout << "------------------------" << std::endl;
	std::cout << "----------Hats----------" << std::endl;
	std::cout << "------------------------" << std::endl;
	std::cout << "------------------------" << std::endl;
	std::cout << "------------------------" << std::endl;

	
	std::cout << "A crowd of humans is captured by aliens." << std::endl;
	std::cout << "The humans have to solve a problem otherwise they will die." << std::endl;
	std::cout << "Standing in a row from the tallest to the smallest human..." << std::endl;
	std::cout << "they have to figure out their own hat color." << std::endl;
	std::cout << "They are not facing each other!" << std::endl;
	std::cout << "-------------------------" << std::endl;
        std::cout << "-------------------------" << std::endl;
	std::cout << std::endl;
	
        std::cout << "Number of people: ";
	std::cin >> people;
	std::cout << std::endl;
        std::cout << "People in the row (tallest first) with their hat color: " << std::endl;
	std::cout << std::endl;

	for(int i = 0; i < people; i++){
	  
            hatcolor = arc4random_uniform(1);
	    
	    std::cout << hatcolor << std::endl;
	    
	    // 0 means white hat
	    // 1 means black hat
	    
	    switch(hatcolor){
			case 0:
			  std::cout << "Person " << (i+1) << ": white hat" << std::endl;
	                  h.insert(std::pair<int, std::string>(i, "white"));
				break;
			default:
			  std::cout << "Person " << (i+1) << ": black hat" << std::endl;
	                  h.insert(std::pair<int, std::string>(i, "black"));
				break;
	    };
	}

        std::cout << std::endl;
        std::cout << "Humans are trying to figure out a solution to the problem based on the rules..." << std::endl;
        std::cout << std::endl;
	
        std::this_thread::sleep_for(std::chrono::milliseconds(2000));

        std::cout << "Solution: " << std::endl;
        std::cout << std::endl;

	for(int i = 0; i < people; i++){
		int sum = 0;
		std::string call = "";
		for(int j = i+1; j < people-1; j++){
			// just counting the black hats

		  auto it = h.find(j);
		  if(it != h.end()){
		    if(it->second == "black"){
		      ++sum;
		    }
		  }
		}
		if((sum % 2) == 0){
			call = "white";
		}
		else{
			call = "black";
		}

		std::cout << "Person " << (i+1) << ": \"I have a " << call << " hat.\"" << std::endl;
	}
	std::cout  << std::endl;
    }


