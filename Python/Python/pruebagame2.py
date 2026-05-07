
def new_game():
    
    guesses = []
    correct_guesses = 0
    question_num=1

    for key in questions:
        print ("-------------------------")
        print (key)
        for i in options[question_num-1]:
            print (i)

def check_answer(answer,guess):
    pass

def display_score(correct_guesses,guesses):
    pass

def play_again():
    pass

questions = {
    "Every number divided by 0 is?: " : "B",
    "The independence of Paraguay was?: " : "C",
    "Xxxtentacion passed away on: " : "B",
    "The best color is?" : "A"
}

options = [["A. 0", "B. Undefined", "C. Infinite","D. None of the above"],
           ["A. On October 14, 2004", "B. June 14, 1811", "C. May 14 and 15, 1811","D. None of the above"],
           ["A february 24, 2019","B. June 18, 2018", "C. May 15, 2018","D. None of the above"],
           ["A. All","B. All except black","C. Green","D. None of the above"]]

new_game()