#include <iostream>
#include <map>
#include <cmath>
#include <string>

using namespace std;

double round3(double num){
 return round(num*1000)/1000;
}

int main(int argc, char *argv[])
{
 double H;
 map<double,char> keys;
 map<char,double> cycles;
 double sump = 0;
  for(char a = 65;sump<1;a++){
   cout<<a<<endl;
   double p;
   cin>>p;
   keys[p*-1] = a;
   cycles[a]=p;
   sump+=p;
   H+=p*log2(p);
   }
 if (sump == 1){
  for(const auto& [key , val] : keys){
   cout<<val;
   cout<<" ";
  }
  cout<<""<<endl;
  for(int16_t i = 0; i<2; i++){
   double L = 0;
   if (i==0) cout<<"По Фано";
   else cout<<"По Хаффману";
   cout<<"\n";
   for(const auto& [key, val] : cycles){
    cout<<"Вероятность ";
    cout<<key;
    cout<<": " + to_string(val)<<endl;
    int16_t l;
    cin>>l;
    L+=l*val;
    }
   cout<<"L: " + to_string(round3(L))<<endl;
   cout<<"H: " + to_string(round3(H*-1))<<endl;
   cout<<"K: " + to_string(round3(L+H))<<endl;
   }
  return 0;
 }
 cout<<"Ошибка в вычислениях";
 return 40;
}
