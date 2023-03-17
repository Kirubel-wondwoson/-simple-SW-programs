//Exerscise 5c
#include<iostream>
using namespace std;
int main()
{//rectangle
    for(int r=1;r<=4;r++){
        for(int c=1;c<=7;c++){
            cout<<"*"<<" ";
        }
        cout<<endl;
    }

//Hollow rectangle
 for(int r=1;r<=7;r++)
    {
        for(int c=1;c<=8;c++)
        {
            if(c==1||c==8||r==1||r==7)
            {
                cout<<"*"<<" ";
            }
            else{
                cout<<"  ";
            }
        }
     cout<<endl;  
    }
//Inverted half pyramid
for(int r=1;r<=6;r++)
    {
        for(int c=6;c>=r;c--)
        {
            cout<<"*  ";
        }
        cout<<endl;
    }


//half pyramid
 for(int c=1;c<=6;c++)
    {
        for(int r=1;r<=c;r++)
        {
            cout<<"*"<<" ";
        }
     cout<<endl;
    }

//letters
  for(int k=1;k<=4;k++)
   {
        for(char i='A';i<='E';i++)
        {
            cout<<i<<" ";
        }
        cout<<endl;
    }
//Numbers
for(int k=10;k<=40;k+=10){
      for(int i=10;i<20;i++){
        cout<<i<<" ";
      }
    cout<<endl;
    }
}
