#include <iostream>
using namespace std;

int main() {
  int array[5]={1,2,3,4,5};
  int x;
  bool temp=false;
  cout<<"inserisci elemento da ricercare"<<endl;
  cin>>x;
  for(int i=0;i<5;i++)
    {
      if(array[i]==x){
        cout<<"elemento trovato in posizione "<<i<<endl;
        temp=true;
      }
     
    }
  if(temp==false)
    cout<<"elemento non trovato";
  
}

 
