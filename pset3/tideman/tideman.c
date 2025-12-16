#include <cs50.h>
#include <stdio.h>
#include <string.h>
// Max number of candidates
#define MAX 9

// preferences[i][j] is number of voters who prefer i over j
int preferences[MAX][MAX];

// int preferences[MAX][MAX] = {
//     {0, 5, 3}, // Alice over (Alice, Bob, Charlie)
//     {4, 0, 6}, // Bob   over (Alice, Bob, Charlie)
//     {7, 1, 0}  // Charlie over (Alice, Bob, Charlie)
// };

// locked[i][j] means i is locked in over j
bool locked[MAX][MAX];

// Each pair has a winner, loser
typedef struct
{
    int winner;
    int loser;
} pair;

// Array of candidates
string candidates[MAX];
pair pairs[MAX * (MAX - 1) / 2];

int pair_count;
int candidate_count;

// Function prototypes
bool vote(int rank, string name, int ranks[]);
void record_preferences(int ranks[]);
void add_pairs(void);
void sort_pairs(void);
void lock_pairs(void);
void print_winner(void);
void dfs(int visited[], int size[], int loser);
bool alreadyVisited(int visited[], int size[], int value);
int main(int argc, string argv[])
// int main(void)
{
    // Check for invalid usage
    if (argc < 2)
    {
        printf("Usage: tideman [candidate ...]\n");
        return 1;
    }

    // Populate array of candidates
    candidate_count = argc - 1;
    if (candidate_count > MAX)
    {
        printf("Maximum number of candidates is %i\n", MAX);
        return 2;
    }
    for (int i = 0; i < candidate_count; i++)
    {
        candidates[i] = argv[i + 1];
    }

    // Clear graph of locked in pairs
    for (int i = 0; i < candidate_count; i++)
    {
        for (int j = 0; j < candidate_count; j++)
        {
            locked[i][j] = false;
        }
    }

    pair_count = 0;
    int voter_count = get_int("Number of voters: ");

    // Query for votes
    for (int i = 0; i < voter_count; i++)
    {
        // ranks[i] is voter's ith preference
        int ranks[candidate_count];

        // Query for each rank
        for (int j = 0; j < candidate_count; j++)
        {
            string name = get_string("Rank %i: ", j + 1);

            if (!vote(j, name, ranks))
            {
                printf("Invalid vote.\n");
                return 3;
            }
        }

        record_preferences(ranks);

        printf("\n");
    }

    add_pairs();
    sort_pairs();
    lock_pairs();
    print_winner();
    return 0;
}

// Update ranks given a new vote
bool vote(int rank, string name, int ranks[])
{
    // TODO
    for (int i = 0; i < candidate_count; i++)
    {
        if (strcmp(name, candidates[i]) == 0)
        {
            ranks[rank] = i;
            return true;
        }
    }
    return false;
}

// Update preferences given one voter's ranks
void record_preferences(int ranks[])
{
    // TODO
    for (int i = 0; i < candidate_count; i++)
    {
        for (int j = i + 1; j < candidate_count; j++)
        {
            preferences[ranks[i]][ranks[j]]++;
        }
    }
}

// Record pairs of candidates where one is preferred over the other
void add_pairs(void)
{
    // TODO
    for (int i = 0; i < candidate_count; i++)
    {
        for (int j = i + 1; j < candidate_count; j++)
        {
            if (preferences[i][j] > preferences[j][i])
            {
                pairs[pair_count].winner = i;
                pairs[pair_count].loser = j;
                pair_count++;
            }
            else if (preferences[i][j] < preferences[j][i])
            {
                pairs[pair_count].winner = j;
                pairs[pair_count].loser = i;
                pair_count++;
            }
        }
    }
    return;
}

// void add_pairs(void)
// {
//     // TODO
//     for (int i = 0; i < candidate_count; i++)
//     {
//         for (int j = i + 1; j < candidate_count; j++)
//         {
//             if (preferences[i][j] > preferences[j][i])
//             {
//                 pairs[pair_count].winner = i;
//                 pairs[pair_count].loser = j;
//                 pair_count++;
//             }
//             else
//             {
//                 pairs[pair_count].winner = j;
//                 pairs[pair_count].loser = i;
//                 pair_count++;
//             }
//         }
//     }
//     return;
// }

// Sort pairs in decreasing order by strength of victory
void sort_pairs(void)
{
    // TODO
    // bubble sort

    for (int i = 0; i < pair_count; i++)
    {
        for (int j = 0; j < pair_count- i - 1; j++)
        {
            if ((preferences[pairs[j].winner][pairs[j].loser] -
                 preferences[pairs[j].loser][pairs[j].winner]) <
                (preferences[pairs[j + 1].winner][pairs[j + 1].loser] -
                 preferences[pairs[j + 1].loser][pairs[j + 1].winner]))
            {
                pair temp = pairs[j];
                pairs[j] = pairs[j + 1];
                pairs[j + 1] = temp;
            }
        }
    }
    return;
}

bool alreadyVisited(int visited[], int size[], int value)
{
    for (int i = 0; i < size[0]; i++)
    {
        if (visited[i] == value)
        {
            return true;
        }
    }
    return false;
}

void dfs(int visited[], int size[], int loser)
{
    // TODO

    for (int j = 0; j < candidate_count; j++)
    {
        if (locked[loser][j] == true && !alreadyVisited(visited, size,j))
        {
            visited[size[0]] = j;
            size[0]++;
        dfs(visited, size, j);
        }
    }

    return;
}

// Lock pairs into the candidate graph in order, without creating cycles
void lock_pairs(void)
{
    // TODO
    // DFS
    for (int i = 0; i < pair_count; i++)
    {

        int visited[candidate_count];
        int winner = pairs[i].winner;
        int loser = pairs[i].loser;
        visited[0] = loser;
        int size[1] = {1};

        dfs(visited, size, loser);
            bool addPair = true;
        for (int j = 0; j < size[0]; j++)
        {
            if (visited[j] == winner)
            {
                addPair = false;
                break;
            }
        }
        if(addPair){
            locked[pairs[i].winner][pairs[i].loser] = true;
        }
    }
    return;
}

// Print the winner of the election
void print_winner(void)
{
    // TODO
    for(int i = 0;i< candidate_count;i++){
        bool winner = true;
        for(int j = 0; j <candidate_count;j++){
            if(locked[j][i]== true){
                winner = false;
                break;
            }
        }
        if(winner){
            printf("%s\n", candidates[i]);
            break;
        }

    }
    return;
}
