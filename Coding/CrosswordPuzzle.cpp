#include <bits/stdc++.h>

using namespace std;

vector<string> crosswordPuzzle(vector<string> crossword, string hints)
{
    for (int i = 0; i < crossword.size(); i++)
    {
        for (int j = 0; j < crossword[i].size(); j++)
        {
            if (crossword[i][j] == '-')
            {
                break;
            }
        }
    }
    //found first - in the matrix
    


}

int main()
{
    vector<string> crossword(10);
    for (int crossword_i = 0; crossword_i < 10; crossword_i++)
    {
        cin >> crossword[crossword_i];
    }
    string hints;
    cin >> hints;
    vector<string> result = crosswordPuzzle(crossword, hints);
    for (ssize_t i = 0; i < result.size(); i++)
    {
        cout << result[i] << (i != result.size() - 1 ? "\n" : "");
    }
    cout << endl;

    return 0;
}
