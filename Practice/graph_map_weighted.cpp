#include<iostream>
#include<map>
#include<list>
using namespace std;

class Graph{
	map<string,list<pair<int, string > > > adjList; 

public:
	Graph(){
	}

	void addEdge(string u,string v,int wt=1,bool bidir=true){
		adjList[u].push_back(make_pair(wt,v));
		if(bidir){
			adjList[v].push_back(make_pair(wt,u));
		}
	}
	void print(){

		for(auto p:adjList){
			string keyCity = p.first;
			auto neigbours = p.second; //list of neigbours

			cout<<keyCity<<"->";
			for(auto cityPair:neigbours){
				cout<<"["<<cityPair.second<<","<<cityPair.first<<" ]";
			}
			cout<<endl;
		}
	}
};


int main(){

	Graph g;
	g.addEdge("Delhi","Chandigarh", 5);
	g.addEdge("Mumbai","Chennai",9 , false);
	g.addEdge("Kolkata","Mumbai", 7);
	g.addEdge("Delhi","Kolkata", 11);
	g.addEdge("Mumbai","Delhi", 3);
		
	g.print();
	
	return 0;
}