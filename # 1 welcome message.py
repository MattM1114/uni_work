# 1 welcome message 
# we need the 
sci = ["computer science","biology","chemistry","physics","science","math"]
name = input("Please enter your name ")  # Get user's name
# Get user's name and print welcome message
def get_name_and_welcome_(nline):
    
    print(f"WELCOME to Richfield College {nline}")  # Print welcome message
    

# this will get  your subjects 
def get_sub():
    subjects = []
    ask_sub = "y"
    while ask_sub == "y":
        sub = input("please enter a subject you passed ").lower()
        subjects.append(sub)
        ask_sub = input("do you want to add another subject? (y/n) ")
    return subjects


# this will check for science subjects and if they are eligible for bsc in IT or not
def check_sci_sub(subjects):
    sci_count = 0   # count of science subjects

    for i in (subjects):
        if i in sci:
            sci_count += 1
            if sci_count >= 3:
                print("you are eligible for bsc Information Technology")
            elif sci_count == 2:
                print("you are eligible for  DIT ")
            elif sci_count ==1 :
                    print("You have only one Science Subject,you are only eligible the HCIT")
                
        else:
            print("you are not eligible for anything please try again next year")

# this is the main logic of the  
def main(line):
    get_name_and_welcome_(line)
    get_sub()
    subjects = get_sub()
    check_sci_sub(subjects)
    print(f"farewell {line} I hope you have a good day")

main(name)
