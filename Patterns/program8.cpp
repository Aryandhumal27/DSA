/*
Given an integer n. You need to recreate the pattern given below for any value of N.
Let's say for N = 5, the pattern should look like as below:

*********
 *******
  *****
   ***
    *

Print the pattern in the function given to you.

Constraints
1 <= n <= 100
*/

#include<iostream>
using namespace std;

class Logic
{
    public:
        int i;
        int j;

        Logic()
        {
            this->i = 0;
            this->j = 0;
        }

        void pattern8(int n)
        {
            for(i = 1; i <= n; i++)
            {
                
                for(j = 1; j <= (i - 1); j++)
                {
                    cout<<" ";
                }

                for(j = 1; j <= ((2*(n-i))+1); j++)
                {
                    cout<<"*";
                }

                cout<<"\n";
            }
        }
};

int main()
{
    int iNo = 0;
    Logic lobj;

    cout<<"Enter the number : ";
    cin>>iNo;

    lobj.pattern8(iNo);

    return 0;
}