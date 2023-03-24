
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

//Inverted half pyramid
 for(int i=0;i<=5;i++)
  {
    for(int k=0;k<=i;k++)
    {
      cout<<"  ";
    }
    for(int j=5;j>=i;j--)
    {
      cout<<"* ";
    }
    cout<<endl;
  }

 //
   for(int i=0;i<=5;i++)
   {
    for(int k=5;k>=i;k--)
    {
      cout<<"  ";
    }
    for(int j=1;j<=i;j++)
    {
      cout<<"* ";
    }
    cout<<endl;
   } 

//Pyramid
 for(int i=0;i<=5;i++)
  {
    for(int k=5;k>i;k--)
    {
      cout<<" ";
    }
    for(int j=1;j<=i;j++)
    {
      cout<<"* ";
    }
    cout<<endl;
  }

  //Inverted pyramid
  for(int i=0;i<=5;i++)
  {
    for(int k=0;k<i;k++)
    {
      cout<<" ";
    }
    for(int j=5;j>=i;j--)
    {
      cout<<"* ";
    }
    cout<<endl;
  }

//Bi Pyramid
for(int i=0;i<=5;i++)
  {
    for(int j=5;j>=i;j--)
    {
      cout<<" ";
    }
    for(int k=0;k<=i;k++)
    {
      cout<<"* ";
    }
    cout<<endl;
  }
   
  for(int a=0;a<=4;a++)
   {
    for(int l=0;l<=a;l++)
    {
      cout<<" ";
    }
    for(int m=4;m>=a;m--)
    {
      cout<<" *";
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
