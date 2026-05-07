
#-------------------------
def new_game():
    
    guesses = []
    correct_guesses = 0
    question_num=1

    for key in questions:
        print ("-------------------------")
        print (key)
        for i in options [question_num-1]:
            print (i)
        guess = input ("Enter (A,B,C or D): ")
        guess = guess.upper()
        guesses.append(guess)


        (correct_guesses) += check_answer(questions.get(key), guess) 
        question_num += 1 
    
    display_score(correct_guesses,guesses)

#-------------------------
def check_answer(answer,guess):

    if answer == guess:
        print ("CORRECT!")
        return 1
    else:
        print("WRONG!")
        return 0
#-------------------------
def display_score(correct_guesses,guesses):
    print ("-------------------------")
    print ("Results")
    print ("-------------------------")
    
    print ("Answers: ", end="")
    for i in questions:
        print(questions.get(i), end=" ")
    print()

    print ("Guessses: ", end="")
    for i in guesses:
        print(i, end=" ")
    print()

    score = int((correct_guesses/len(questions))*100)
    print ("Your score is: " +str(score)+"%")

#-------------------------
def play_again():
    
    response = input("Do you want to play again? (yes o no): ")
    response = response.upper()

    if response == "YES":
        return True
    else:
        return False



questions = {
    "Every number divided by 0 is?: " : "B",
    "The independence of Paraguay was?: " : "C",
    "Xxxtentacion passed away on: " : "B",
    "The best color is?" : "A"
}

options = [["A. Zero", "B. Undefined", "C. Infinite","D. None of the above"],
           ["A. On October 14, 2004", "B. June 14, 1811", "C. May 14 and 15, 1811","D. None of the above"],
           ["A february 24, 2019","B. June 18, 2018", "C. May 15, 2018","D. None of the above"],
           ["A. All","B. All except black","C. Green","D. None of the above"]]

new_game()

while play_again():
    new_game()


print ("Byeee")