#include<vector>
#include<iomanip>
#include<iostream>
#include <algorithm>
#include <fstream>
using namespace std;

int main()
{ int sum,size;
 ifstream inFile("file.in", ios::in);

vector<int> weight;

inFile >> size;
for (int i = 0; i < size; i++)
{
        int temp;
        inFile >> temp;
        weight.push_back(temp);
}



sort(weight.begin(), weight.end());
sum =weight[size-1]+weight[size-2]+weight[size-3]+weight[size-4]+weight[size-5];
cout<< sum << endl;
return 0;
}


