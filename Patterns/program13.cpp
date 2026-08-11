/*
Given an integer n. You need to recreate the pattern given below for any value of N.
Let's say for N = 5, the pattern should look like as below:

1 
2 3 
4 5 6 
7 8 9 10 
11 12 13 14 15

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

        void pattern13(int n)
        {
            int iNo = 1;

            for(i = 1; i <= n; i++)
            {  
                for(j = 1; j <= i; j++)
                {
                    cout<<iNo<<" ";
                    iNo++;
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

    lobj.pattern13(iNo);

    return 0;
}