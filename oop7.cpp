#include<iostream>
#include<map>
#include<string.h>

using namespace std;

int main()
{
    map<string, int>pmap;
    pmap.insert(pair<string, int>("Maharashtra", 120));
    pmap.insert(pair<string, int>("Goa", 20));
    pmap.insert(pair<string, int>("Rajasthan", 40));
    pmap.insert(pair<string, int>("Bengal", 100));

    map<string,int>::iterator iter = pmap.end();

    //print size of map
    cout<<"Size of the population map is: "<<pmap.size()<<endl;

    //print elements in the map
    for(iter=pmap.begin(); iter!=pmap.end(); ++iter)
    {
        cout<<"\t"<<iter->first<<" : "<<iter->second<<" million \n"<<endl;
    }
    string state;
    cout<<"Enter the name of the state to be searched: ";
    cin>>state;

    iter = pmap.find(state);
    if(iter!= pmap.end())
        cout<<"\t"<<state<<" population is: "<<iter->second<<"million";
    else
        cout<<"State not found";

    return 0;
}
