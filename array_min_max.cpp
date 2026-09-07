#include<iostream>
#include<limits.h>
using namespace std;
int main(){
    int age[] = {52, 48, 34, 21, 18, 14, 3, 2};
    int size = 8;
     int smallest = INT_MAX;
      int largest = INT_MIN;
    cout<<sizeof(age)/sizeof(int)<<endl;
     for(int i = 0; i < size; i++)
     {
        cout<<age[i]<<endl;

     }
      for(int j = 0; j < size; j++)
      {   
          if(age[j]<smallest){
            smallest =age [j];
            largest = max(age[j] , largest);
          }}

          cout<<"smallest = "<<smallest<<endl;
          cout<<"largest = "<<largest<<endl;

    
    //cout<<"the ages of our family are = "<<age[0]<<endl;
    return 0;
}
