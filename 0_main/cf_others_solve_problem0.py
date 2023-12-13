import requests

def get_solved_problems_with_difficulty(handle):
    url = f"https://codeforces.com/api/user.status?handle={handle}&from=1&count=10000"
    
    try:
        response = requests.get(url)
        data = response.json()
        
        if data["status"] != "OK":
            print("Error:", data["comment"])
            return
        
        solved_problems = set()
        
        for submission in data["result"]:
            if submission["verdict"] == "OK":
                problem = submission["problem"]
                # contest_id = problem["contestId"]
                # index = problem["index"]
                # problem_id = f"{contest_id}{index}"
                name = problem['name']
                difficulty = problem.get("rating", None)
                
                if(difficulty and difficulty == 1500 ):
                    solved_problems.add((name, difficulty))
        
        return sorted(list(solved_problems), key=lambda x: x[0])
    
    except Exception as e:
        print("An error occurred:", str(e))
        return None


def save_to_txt(solved_problems, username):
    with open(f"{username}_solved_problems.txt", "w") as file:
        for problem in solved_problems:
            name,difficulty = problem
            file.write(f"{name}, {difficulty}\n")



# user_handle = 'thisIsMorningstar'
# user_handle = 'adnan_toky'

if __name__ == "__main__":
    user_handle = input("Enter a Codeforces username: ")
    solved_problems = get_solved_problems_with_difficulty(user_handle)

    if solved_problems:
        save_to_txt(solved_problems, user_handle)
        print(f"Problems solved by {user_handle} along with their difficulties:")
        for name, difficulty in solved_problems:
            print(f"Problem: {name}, Difficulty: {difficulty}")
