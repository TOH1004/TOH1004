//Name: TOH SHEE THONG
//Matrics number: A24CS0309
//Date: 21.12.2024 

#include <iostream>
#include <string>
#include<iomanip>
using namespace std;
void dispOutput(int);
void getInput(int &, int &, int &, int &);
void dispStatus(int);
int calcAverage(int, int);

int main(){
int cases, newCases, death, recovered, active, total = 0, count = 0, highest = -1;
string name, highestName, temp;
do{
cout<<"<<<<<<<<<<<<<<<<DATA>>>>>>>>>>>>>>"<<endl;
cout<<setw(15)<<left<<"State name"<<": ";
getline(cin, name);
getInput(cases, newCases, death, recovered);
active = cases + newCases - death - recovered;
total += active;
count++;
if (active>highest){
highest = active;
highestName = name;
}dispOutput(active);
cout<<endl;
cout<<"Press <ENTER> to continue...";
getline(cin, temp);


cout<<endl;
}while(temp!="N"&&temp!="n");

cout<<endl<<endl;
cout<<"<<<<<<<<ACTIVE CASES>>>>>>>>"<<endl;
cout<<setw(8)<<left<<"Total"<<": "<<total<<endl;
cout<<setw(8)<<left<<"Highest"<<": "<<highest<<" ("<<highestName<<")"<<endl;
cout<<"Average for "<<count<<" states"<<": "<<calcAverage(count, total)<<endl;
return 0;
}

void dispOutput(int active){
cout<<"<<<<<<<<<<<<<<<<SUMMARY>>>>>>>>>>>>>>"<<endl;
cout<<setw(15)<<left<<"Active cases"<<": "<<active<<endl;
dispStatus(active);
}

void getInput(int &cases, int &newCases, int &death, int &recovered){
cout<<setw(15)<<left<<"Total cases"<<": ";
cin>>cases;
cout<<setw(15)<<left<<"New cases"<<": ";
cin>>newCases;
cout<<setw(15)<<left<<"Total death"<<": ";
cin>>death;
cout<<setw(15)<<left<<"Total recovered"<<": ";
cin>>recovered;
cout<<endl;
cin.ignore();
}

void dispStatus(int active){
cout<<setw(15)<<left<<"Status"<<": ";
if (active > 40){
	cout<<"Red";
}
else if (active>=21&&active<=40){
cout<<"Orange";
}
else if (active>=1&&active<=20){
cout<<"Yellow";
}else{
cout<<"Green";
}
cout<<" zone"<<endl;
}

int calcAverage(int a, int b){
return static_cast<float>(b) / a;
}
