# import the random library (native to python)
import random

# 1D array (list) of answers
answerList = ["yes.", 
              "no.", 
              "probably.", 
              "not likely.",
              "[REDACTED]"]

# list of numbers that the dice roll response can be
diceNumbers = [1, 2, 3, 4, 5, 6]

# get number at random index in the list diceNumbers
diceResult = random.choice(diceNumbers)

# list of prefixes to the potential answers
prefixList = ["my pet hampster says ", 
              "I rolled a dice and it said " + str(diceResult) + " so im taking that as a ", 
              "taking a random guess here but ", 
              "according to the birds outside my window the answer is ", 
              "uhhhh... ", 
              "word through the grapevine is "]

# start non-terminating loop
while True:
    
    # prompt the user with a question (simmilar to cout and cin where the cin variable is 'prompt')
    prompt = input("what is your question? : ")
    
    # get a string from a random index in the list answerList
    answer = random.choice(answerList)

    # get a string from a random index in the list prefixList
    prefix = random.choice(prefixList)

    # print the chosen prefix and answer as one line, creating the response.
    print(str(prefix) + str(answer))