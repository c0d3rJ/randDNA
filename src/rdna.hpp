//could have been done without iostrem but i wanted to visually see if it was working correctly

#include <random>
#include <iostream>
using namespace std;

string randDNA (int seed,string bases, int n){
  cout << "\n\nDEBUGGING BEGINS\n";
  cout << "\tSeed is: " << seed << endl;
  mt19937 eng1(seed);
  int min = 0;
  int max = 0;
  //protection from empty strings
  if (bases == ""){
    //do nothing max is already 0
  }
  else {
    max = bases.size()-1;
  }

  cout << "\tMin Index Value = " << min << endl << "\tMax Index Value = " << max << endl;
  uniform_int_distribution<> unifrm(min, max);
  int whichIndex = 0;
  int x = 0;
  string dna = "";

  for ( int i=0; i <= max; i++){
    cout << "\tBases [" << i<< "] = " << bases[i] << endl;
  }

  while (x < n){
    whichIndex = unifrm(eng1);
    cout << "\tUniform Random Output = " << whichIndex << endl;
    dna += bases[whichIndex];
    ++x;
  }
  cout << "DEBUGGING ENDS\n";

  return dna;
}
