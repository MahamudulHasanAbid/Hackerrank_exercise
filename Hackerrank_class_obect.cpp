#include<iostream>
using namespace std;

class student
{
public:
    int scores[5];
    void input()
    {
        for(int i=0; i<5; i++)
        {
            cin>>scores[i];

        }

    }
    int calculateTotalScore()
    {
        int sum =0;
        for(int i=0; i<5; i++)
        {
            sum+=scores[i];

        }
        return sum;
    }

};
int main()
{
    int n;
    int kris;
    cin>>n;
    student s[n]; // Array as an object of class.
    for(int i=0; i<n; i++)
    {
        s[i].input();
        cout<<s[i].calculateTotalScore()<<endl;
    }
    //kristen_total scores
    cin>>kris;
    int kris_total =s[kris].calculateTotalScore();

    //Count how many of scored higher than kristen.
    int higherThanKris = 0;
    for(int i=0;i<n;i++)
    {
        if(s[i].calculateTotalScore()>kris_total)
            higherThanKris++;
    }

    cout<<higherThanKris<<endl;
    return 0;
}
