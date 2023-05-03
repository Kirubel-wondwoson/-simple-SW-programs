#include<iostream>
using namespace std;
int main(){
  
   //one dimentional arrays 
  float total,Average,monthlySalary[6];
   monthlySalary[0]=2000;
   monthlySalary[1]=2500;
   monthlySalary[2]=3000;
   monthlySalary[3]=4500;
   monthlySalary[4]=2000;
   monthlySalary[5]=1000;
   cout<<"Monthly salary from month 1 to 6: "<<monthlySalary[0]<<" "<<monthlySalary[1]<<" "<<monthlySalary[2]<<" "<<monthlySalary[3]<<" "<<monthlySalary[4]<<" "<<monthlySalary[5];
     total=monthlySalary[0]+monthlySalary[1]+monthlySalary[2]+monthlySalary[3]+monthlySalary[4] + monthlySalary[5];
     Average=total/6;                                 
 cout<<"\nMy  total salary in 6 month is: "<<total;
 cout<<"\nMy Average salary in 6 month is: "<<Average;
  return 0;
  //1D with in a Loop
  int i=0;
  float monthlySalarys[6]={2000,2500,3000,4500,2000,1000};
  for(monthlySalarys[i];i<5;i++)
  {
    cout<<monthlySalarys[i]<<" ";
  }
   for(const float &k:monthlySalarys)
   {
    cout<<k;
   }
  //
  float arrRes_2,arrRes[]={10,20,30,40,50};
  float result;
  for(int n=0;n<5;n++)
  {
    result += arrRes[n];
  }
  cout<<result;
  //  
  double arr_Copy[5],arr_Org[5]={10,20,30,40,50};
  for(int p=0;p<5;p++)
  {
    arr_Copy[p]=arr_Org[p];
    cout<<arr_Copy[p];
  }
  
 //Two dimentional arrays
int studentList,subject;
  float mark[5][5]={{98,99,95,85,89},{78,88,99,77,85},{65,45,89,75,100},{78,45,98,65,86},{95,84,54,75,65}};
  for(int m=0;m<5;m++)
  {
    for(int l=0;l<5;l++)
    {
      cout<<mark[m][l]<<" ";
    }
    cout<<endl;
  }  

  
  int st_num,st_crs;
  cout<<"\nEnter student numbers: ";
  cin>>st_num;
  cout<<"\nEnter student courses: ";
  cin>>st_crs;
  
  float mark[st_num][st_crs];
 
  for(int i=1;i<=st_num;i++)
  {  
     cout<<"\nEnter mark of student : ";
    for(int j=1;j<=st_crs;j++)
    {
    cout<<"\n"<<j<<" : ";
    cin>>mark[st_num][st_crs];
    }
  }
  for(int i=0;i<=st_num;i++)
  {
     for(int j=0;j<=st_crs;j++)
     {
      cout<<mark[st_num][st_crs];
     }
  }
  
  return 0;
  }