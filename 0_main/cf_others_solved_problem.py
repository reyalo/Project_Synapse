import requests

def get_solved_problems(username):
    url = f"https://codeforces.com/api/user.status?handle={username}&from=1&count=10000"
    response = requests.get(url)

    if response.status_code == 200:
        data = response.json()
        if data['status'] == 'OK':
            submissions = data['result']
            solved_problems = []
            for submission in submissions:
                if submission['verdict'] == 'OK':
                    problem = submission['problem']
                    contest_id = problem.get('contestId', 'N/A')
                    problem_index = problem.get('index', 'N/A')
                    difficulty = problem.get('rating', 'N/A')
                    name = problem.get('name', 'N/A')
                    codeforces_url = f"https://codeforces.com/problemset/problem/{contest_id}/{problem_index}"
                    if difficulty != 'N/A':
                        difficulty = int(difficulty)
                    else:
                        difficulty = float('inf')  # Use a large value for 'N/A'
                    solved_problems.append((contest_id, problem_index, difficulty, name, codeforces_url))

            return solved_problems
    
    return None

def save_to_txt(solved_problems, username):
    # Sort by difficulty (an integer or large value for 'N/A')
    sorted_problems = sorted(solved_problems, key=lambda x: (x[2], str(x[0]), x[1]))
    
    with open(f"{username}_solved_problems.txt", "w", encoding="utf-8") as file:
        file.write("Contest,  Problem,  Difficulty,  Name,  Codeforces URL\n\n\n")
        for problem in sorted_problems:
            contest_id, problem_index, difficulty, name, codeforces_url = problem
            file.write(f"{contest_id},  {problem_index},  {difficulty},  {name},  {codeforces_url}\n")

if __name__ == "__main__":
    username = input("Enter a Codeforces username: ")
    solved_problems = get_solved_problems(username)
    
    if solved_problems:
        save_to_txt(solved_problems, username)
        print(f"Solved problems for {username} saved to {username}_solved_problems.txt")
    else:
        print(f"Failed to retrieve data for {username}")
