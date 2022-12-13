#include<iostream>
using namespace std;
int main()
{
float x,s=0,s1=0,s5=0;
int i=0,l,i1=0,i5=0;
cout<<"Ingrese l:"; cin>>l;
do{
cout<<"Ingrese x :"; cin>>x;
i=i+1;
s=s+x;
if(x==1){
i1=i1+1;
s1=s1+x;
}else{
i5=i5+1;
s5=s5+x;
}
}while(i<l);
cout<<"La cantidad de monedas de .5cc fue :"<<i<<endl;
cout<<"El valor fue :"<<s<<endl;
cout<<"La cantidad de monedas .10cc fue :"<<i1<<endl;
cout<<"El valor fue :"<<s1<<endl;
cout<<"La cantidad de monedas .25cc  fue :"<<i5<<endl;
cout<<"El valor fue :"<<s5<<endl;
return 0;
}
