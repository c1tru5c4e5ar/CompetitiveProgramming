/*
You are playing a video game in which several stacks of boxes are lined up on the floor, with a crane on top to rearrange the boxes, as shown in the picture below.


The crane supports the following commands:

• Move one position left (does nothing if already at the leftmost position)

• Move one position right (does nothing if already at the rightmost position)

• Pick up a box from the current stack (does nothing if the crane already has a box)

• Drop a box on the current stack (does nothing if the crane doesn't already have a box)

Further, there is a limit H on the number of boxes on each stack. If a 'drop' command would result in a stack having more than H boxes, the crane ignores this drop command.
If the current stack has no boxes, a 'pick up' command is ignored.

You are given the initial number of boxes in each stack and the sequence of operations performed by the crane. You have to compute the final number of boxes in each stack.

For example, suppose the initial configuration of the game is as shown in the figure above, with 7 stacks and H=4. Then, after the following sequence of instructions,

1. Pick up box
2. Move right
3. Move right
4. Move right
5. Move right
6. Drop box
7. Move left
8. Pick up box
9. Move left
10. Drop box


the number of boxes in each stack from left to right would be 2,1,3,1,4,0,1.
*/

#include<iostream>
using namespace std;

int main()
{
    long long int widthOfGame;
    cin>>widthOfGame;

    long long int maxHeight;
    cin>>maxHeight;
    //cin.ignore();

    long long int stacks[widthOfGame];
    long long int input = 0;
    for(long long int i = 0; i<widthOfGame; ++i)
    {
        cin>>stacks[i];
    }

    long long int command = 5;
    long long int state = 0;
    bool boxOnCrane = 0;

    cin>>command;
    while(command != 0)
    {
        //cin>>command;
        //Move left
        if(command == 1 && state > 0)
        {
            state--;
        }

        //Move right
        else if(command == 2 && state < (widthOfGame-1))
        {
            state++;
        }

        //Pickup Box
        else if(command == 3 && boxOnCrane == 0)
        {
            if(stacks[state]!=0)
            {
                boxOnCrane = 1;
                stacks[state]--;
            }
        }

        //Drop Box
        else if(command == 4 && boxOnCrane == 1)
        {
            if(stacks[state]<(maxHeight))
            {
                boxOnCrane = 0;
                stacks[state]++;
            }
        }

        //Quit
        else if(command == 0)
            break;

        //Debug
        //cout<<"command: "<<command<<endl;
        //cout<<"state: "<<state<<endl;
        //cout<<"box on crane: "<<boxOnCrane;
        //cout<<endl;

        cin>>command;

    }

    //Output
    for(long long int i = 0; i<widthOfGame; ++i)
    {
        cout<<stacks[i]<<" ";
    }



    return 0;
}
