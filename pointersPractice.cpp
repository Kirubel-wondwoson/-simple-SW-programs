#include<iostream>
using namespace std;
int main()
{
int *ptrVar,var=100;
ptrVar=&var;
cout<<"var address: "<<&var<<" "<<ptrVar<<endl;
cout<<"var= "<<var<<"var= "<<*ptrVar<<endl;
//Changing Value Pointed by Pointers
int *PtrVar,Var=20;
PtrVar=&Var;
cout<<"Var = "<<Var<<" "<<"Var ="<<*PtrVar<<endl;
cout<<"Var address: "<<PtrVar<<endl;
Var=30;
cout<<"Var = "<<Var<<" "<<"Var ="<<*PtrVar<<endl;
cout<<"Var address: "<<PtrVar<<endl;
*PtrVar=40;
cout<<"Var = "<<Var<<" "<<"Var ="<<*PtrVar<<endl;
cout<<"Var address: "<<PtrVar<<endl;
//Void Pointer
//As void is an empty type, void pointers cannot be dereferenced however To print the content of a void pointer, we use the static_cast operator.
//void pointers cannot be used to store addresses of variables with const or volatile qualifiers.
void *voidPtr;
float var1=40.7;
voidPtr=&var1;
cout<<"var1= "<<var1<<endl;//but cout<<*voidPtr; is impossible
cout<<"var1= "<<*(static_cast<float*>(voidPtr))<<"var1= "<<*((float*)voidPtr)<<endl;//To print the content of a void pointer, we use the static_cast operator.
cout<<"var1 address: "<<&var1<<endl;
cout<<"var1 address: "<<voidPtr<<endl;
//ptr and Array
//arr==&arr[0] in array of pointers
int arr1[4]={1,2,3,4};
int *arrPtr=arr1;
cout<<arrPtr<<" "<<arrPtr+1<<" "<<arrPtr+2<<" "<<arrPtr+3<<endl;//arrPtr == &arrPtr[0],arrPtr+1== &arrPtr[1],...
cout<<*arrPtr<<" "<<*arrPtr+1<<" "<<*arrPtr+2<<" "<<*arrPtr+3<<endl;//*arrPtr == arr[0],*arePtr+1 == arr[1],...
//ptr and Array in Loop
double arr2[5]={1,2,3,4,5};
double *arrPtr2;
 arrPtr2= arr2;
for(int i=0;i<=5;++i)
{
    cout<<"&arr2["<<i<<"]="<<&arr2[i]<<endl; 
}
for(int i=0;i<=5;++i)
{
   cout<<"arrPtr2 + "<<i<<" = "<<arrPtr2+i<<endl;
}
//ptr operators
int varr[]={10,20,30,40,50};
int *vptr;
vptr=&varr;
cout<<*vptr<<endl;
cout<<(*vptr)++<<endl;
cout<<(*vptr)++<<endl;
cout<<(*vptr)++<<endl;
cout<<(*vptr)++<<endl;

return 0;
}