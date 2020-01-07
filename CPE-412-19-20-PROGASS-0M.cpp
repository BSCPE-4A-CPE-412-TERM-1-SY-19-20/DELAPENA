#include <iostream>
using namespace std;
//I.D.#: 620457
int main()
{
    int j=0, state=0;
    int table[7][2]={{0,1},{1,2},{2,3},{3,4},{4,5},{5,6},{6,0}};
    int input;
    int flag=0;
    char st[20];
    cin>>st;
    while(st[j]!='\0')
    {
    // get column for symbol
    switch(st[j])
    {
    case 'a': input=0; break; //column
    case 'b': input=1; break; //column
    }    
    state = table[state][input];
    if (state==6){
        flag=1;
        break;
    }
    j++;
    }
    
    if (flag==0){
        cout<<"ACCEPTED";
    }
    else {
        cout<<"NOT ACCEPTED";
    }

    return 0;
    
}
