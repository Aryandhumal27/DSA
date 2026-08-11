/*
Given an integer n. You need to recreate the pattern given below for any value of N.
Let's say for N = 5, the pattern should look like as below:

1        1
12      21
123    321
1234  4321
1234554321

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

        void pattern12(int n)
        {
            for(i = 1; i <= n; i++)
            {
                for(j = 1; j <= i; j++)
                {
                    cout<<j;
                }

                for(j = 1; j <= (2*(n - i)); j++)
                {
                    cout<<" ";
                }

                for(j = i; j <= i, j > 0; j--)
                {
                    cout<<j;
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

    lobj.pattern12(iNo);

    return 0;
}