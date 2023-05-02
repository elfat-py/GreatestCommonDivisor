#include <iostream>
int gcd(int firstNum, int secNum)
{
    int temp;
    while (firstNum>0)
    {
        if (firstNum<secNum)
        {
            temp=firstNum;
            firstNum=secNum;
            secNum=temp;
        }
        firstNum=firstNum-secNum;
    }
    return secNum;
}


using namespace std;
int main(){
    int firstNUM, secNUM;
    while (cin>>firstNUM&& cin>>secNUM)
    {
        if (firstNUM>0&&secNUM>0)
        cout<<"The GCD of "<<firstNUM<<" && "<<secNUM<<" is "<<gcd(firstNUM, secNUM);
    }
    return 0;

}
