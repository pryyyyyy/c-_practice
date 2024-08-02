#include <iostream>

using namespace std;

int main()
{
    int * pArr = new int[10]{3,5,1,11,99,66,22,2,8,6};
    int t;
    for(int i=0;i<9;i++)
    {
        int min = pArr[i];
        int index = i;
        for(int j = i+1;j<10;j++)
        {
            if(pArr[j]<min)
            {
                min = pArr[j];
                index = j;
            }
        }
        t = pArr[i];
        pArr[i] = min;
        pArr[index] = t;
    }

    cout<<"Êä³öÊý×é";
    for(int i=0;i<10;i++)
    {
        cout<<pArr[i]<<"  ";
    }

    delete[] pArr;
    return 0;
}