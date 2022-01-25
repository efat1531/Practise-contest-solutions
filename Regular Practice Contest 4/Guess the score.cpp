#include<bits/stdc++.h>
using namespace std;
int main()
{
    map<string, int>track_score;
    map<string, bool>track_ac;
    int sub_time, total_time = 0;
    string result, problem_no;
    while (true)
    {
        cin >> sub_time;
        if (sub_time == -1)
        {
            break;
        } else
        {
            cin >> problem_no >> result;
            if (result == "right" and track_ac[problem_no] == false)
            {
                total_time = total_time + (track_score[problem_no] * 20) + sub_time;
                track_ac[problem_no] = true;
            } else
            {
                track_score[problem_no]++;
            }
        }

    }
    cout << track_ac.size() << " " << total_time << endl;
}