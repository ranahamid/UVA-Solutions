// 11875 - Brick Game
// Time limit: 1.000 seconds

#include <iostream>
#include<stdio.h>

using namespace std;

int  FindCaption(int case_no)
{
        // Read number of team members.
        int team_member_no = 0;
        cin >> team_member_no;

        // Read the age of team members.
        int team_member_age[10];
        for ( int i = 0; i < team_member_no; i++ )
                cin >> team_member_age[i];

        // Caption is middle of team members.
        int caption = (team_member_no+1)/2 - 1;

        printf("Case %d: %d\n", case_no, team_member_age[caption]);
        return 0;
}

int main()
{
        int test_no = 0;

        while ( cin >> test_no )
        {
                for ( int i = 0 ; i < test_no; i++ )
                        FindCaption(i+1);
        }

        return 0;
}

