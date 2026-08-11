/*
Given an integer n. You need to recreate the pattern given below for any value of N. 
Let's say for N = 5, the pattern should look like as below:

ABCDE
ABCD
ABC
AB
A

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

        void pattern15(int n)
        {
            char ch = '\0';

            for(i = 1; i <= n; i++)
            {  
                ch = 'A';
                for(j = 1; j <= ((n - i) + 1); j++)
                {
                    cout<<ch;
                    ch++;
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

    lobj.pattern15(iNo);

    return 0;
}