#include<iostream>
#include<unordered_map>
#include<string>

using namespace std;

int main(){

 
 unordered_map<string,int> ourMap;
 ///inserting 

 pair<string , int> p("saksham",1);
 ourMap.insert(p);
 ourMap["vasundhara"] = 19;
 cout<<ourMap["vasundhara"]<<endl; 
//  cout<<ourMap.at("sa");///when nt present in the map and you try to access it then it will give you an error 
 cout<<ourMap["sa"]<<endl;//but when we access it to the bracket it assign it the value 0 too and print it too

 ///check presence of a function

 ///count

 if(ourMap.count("gho")>0){
     cout<<"Not found"<<endl;
 }
else{
    cout<<ourMap.at("sa")<<endl;
}

        cout<<"size :: "<<ourMap.size()<<endl;
        ourMap.erase("sa");
        cout<<"size :: "<<ourMap.size()<<endl;

}
