#include<iostream>
#include<time.h>

using namespace std;

void GenerateRandomNum(int, int, int);

int main(){

   srand(time(NULL));
   int num, lowNum, uppNum;


   cout << "Enter how many random numbers to iterate: " << endl;
   cin >> num;
   cout << "Enter the lower & upper limit of the random number: " << endl;
   cin >> lowNum >> uppNum;


  GenerateRandomNum(num, lowNum, uppNum);


 return 0;
}

void GenerateRandomNum(int num, int lowNum, int uppNum){
   
   int randomNum;
   
   cout << "Here's the list of " << num << " random numbers between " << lowNum << " and " << uppNum << "\n" << endl;

    for (int i=0; i<num; i++){
        randomNum= lowNum + rand() % (uppNum - lowNum +1);
        cout << randomNum << " " ;
    }

}