/* -- EIGHT BALL --

    COP-1000 2023-2024 project by: 

    Michael Frank 
    Michael Grigsby 
    Aidan McAteer
    Amaris McCalla
    Kaylee Swain

    Created by Team 3
*/

//import libraries
#include <iostream>
#include <cstdlib>
#include <string>
#include <time.h> 

// set up base varables
std::string userInp;
std::string chosenPrefix;
std::string chosenAnswer;
const int answerNum = 6;
const int prefixNum = 8;

// array of all possible answers
std::string answer[answerNum] = {"yes ", 
                        "no ",
                        "probably ", 
                        "probably not ",
                        "[REDACTED] ",
                        "yo mama "};

// array of all possible prefixes
std::string prefix[prefixNum] = {"my pet hampster says ", 
                        //"I rolled a dice and it said " + str(diceResult) + " so im taking that as a ", 
                        "taking a random guess here but ", 
                        "according to the birds outside my window the answer is ", 
                        "*shuffling papers* uhhhh... ", 
                        "word through the grapevine is ",
                        "Simulating the entire universe to find the answer... ", 
                        "I think you already know the answer, but ", 
                        "That's your question? You have acess to the most accurate predictor mankind has ever produced and you asked that? Fine. The answer is "};

// declare the create response function
std::string createResponse();

// MAIN
int main() {

    // start question prompt loop
    while (true)
    {  
        // set the rand seed to be based on Unix time (helps make the randomness more random)
        srand(time(0));

        // prompt and response system
        std::cout << "what is your question? : ";
        std::cin >> userInp;
        std::string response = createResponse();
        std::cout << response << std::endl;
    }
}

// function to generte a unique response to the quesiton
std::string createResponse()
{
    // generate a random number based on the number of elements in both answer and prefix arrays. Used as the index for getting a string.
    int randPreChoice = (rand() % prefixNum);
    int randAnsChoice = (rand() % answerNum);

    // get a random string from both the prefix array and the answer array, used to create the final response
    chosenPrefix = prefix[randPreChoice];
    chosenAnswer = answer[randAnsChoice];

    // create response by combining the profix and suffix strings
    std::string response = chosenPrefix + chosenAnswer;

    // return the final response so it can be outputted in MAIN
    return response;
}