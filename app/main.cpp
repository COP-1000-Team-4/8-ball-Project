#include <iostream>
#include <cstdlib>
#include <string>

std::string userInp;
std::string chosenPrefix;
std::string chosenAnswer;
const int answerNum = 6;
const int prefixNum = 8;

std::string answer[answerNum] = {"yes ", 
                        "no ",
                        "probably ", 
                        "probably not ",
                        "[REDACTED] ",
                        "yo mama "};

std::string prefix[prefixNum] = {"my pet hampster says ", 
                        //"I rolled a dice and it said " + str(diceResult) + " so im taking that as a ", 
                        "taking a random guess here but ", 
                        "according to the birds outside my window the answer is ", 
                        "*shuffling papers* uhhhh... ", 
                        "word through the grapevine is ",
                        "Simulating the entire universe to find the answer... ", 
                        "I think you already know the answer, but ", 
                        "That's your question? You have acess to the most accurate predictor mankind has ever produced and you asked that? Fine. The answer is "};

std::string createResponse();


int main() {

    while (true)
    {  
        std::cout << "what is your question? : ";
        std::cin >> userInp;
        std::string response = createResponse();
        std::cout << response << std::endl;
    }
}

std::string createResponse()
{
    int randPreChoice = (rand() % prefixNum);
    int randAnsChoice = (rand() % answerNum);


    chosenPrefix = prefix[randPreChoice];
    chosenAnswer = answer[randAnsChoice];
    std::string response = chosenPrefix + chosenAnswer;
    return response;
}