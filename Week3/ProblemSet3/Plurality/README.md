## Task: Implement Plurality Vote Election Simulation

### Task Description

Complete the implementation of `plurality.c` to simulate a plurality vote election.

1. **Complete the `vote` function:**

    - The `vote` function takes a single argument, a string called `name`, representing the name of the candidate who was voted for.
    - If `name` matches one of the names of the candidates in the election, update that candidate’s vote total to account for the new vote. The `vote` function in this case should return `true` to indicate a successful ballot.
    - If `name` does not match the name of any of the candidates in the election, no vote totals should change, and the `vote` function should return `false` to indicate an invalid ballot.

2. **Complete the `print_winner` function:**

    - The `print_winner` function should print out the name of the candidate who received the most votes in the election, and then print a newline.
    - It is possible that the election could end in a tie if multiple candidates each have the maximum number of votes. In that case, you should output the names of each of the winning candidates, each on a separate line.
