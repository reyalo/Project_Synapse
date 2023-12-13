import requests

def get_solved_problems(username):
    url = f"https://codeforces.com/api/user.status?handle={username}&from=1&count=10000"
    response = requests.get(url)

    if response.status_code == 200:
        data = response.json()
        if data['status'] == 'OK':
            submissions = data['result']
            solved_problems = set()
            for submission in submissions:
                if submission['verdict'] == 'OK':
                    contest_id=0
                    problem = submission['problem']
                    if(problem['contestId']):
                      contest_id = problem['contestId']
                    else:
                      continue
                    problem_index = problem['index']
                    difficulty = problem.get("rating", None)
                    name = problem['name']
          
                    solved_problems.add((contest_id, problem_index, difficulty, name))

            return sorted(solved_problems, key=lambda x: (x[0], x[1]))
    
    return None

def save_to_txt(solved_problems, username):
    with open(f"{username}_solved_problems.txt", "w") as file:
        for problem in solved_problems:
            contest_id, problem_index, difficulty, name = problem
            codeforces_url = f"https://codeforces.com/problemset/problem/{contest_id}/{problem_index}"
            file.write(f"Contest: {contest_id}, Problem: {problem_index}, Difficulty: {difficulty}, Name: {name}\n")
            file.write(f"Codeforces URL: {codeforces_url}\n\n")

if __name__ == "__main__":
    username = input("Enter a Codeforces username: ")
    solved_problems = get_solved_problems(username)
    
    if solved_problems:
        save_to_txt(solved_problems, username)
        print(f"Solved problems for {username} saved to {username}_solved_problems.txt")
    else:
        print(f"Failed to retrieve data for {username}")
