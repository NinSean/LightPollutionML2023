//https://www.lightpollutionmap.info/
//https://www.lightpollutionmap.info/#zoom=4&lat=0&lon=0&layers=B0FFFFFTFFFFFFFFTFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF
//generate random lat long while keeping a zoom of 5.0
//make the layer = layers=0BTFFFFFFFFFFFFFFFFFF
//make the zoom = 5.0

#include <bits/stdc++.h>
using namespace std;

int main(){
  int choice;
  cout << "enter the number of pictures to generate: ";
  cin >> choice;
//generate random lat long while keeping a zoom of 5.0
  for(int i = 0; i < choice; i++){
    double lat = (double) ((rand() % 180) - 90.0) + (1.0/rand());
    double lon = (double) ((rand() % 360) - 180.0) + (1.0/(rand()));
    cout << "https://www.lightpollutionmap.info/#zoom=12.5&lat=" << lat << "&lon=" << lon << "&layers=0BTFFFFFFFFFFFFFFFFFF" << endl;
  }
  return 0;



}