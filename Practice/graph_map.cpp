#include<iostream>
#include<map>
#include<list>
using namespace std;

class Graph{
	map<string,list<string> > adjList; 

public:
	Graph(){
	}

	void addEdge(string u,string v,bool bidir=true){
		adjList[u].push_back(v);
		if(bidir){
			adjList[v].push_back(u);
		}
	}
	void print(){

		for(auto p:adjList){
			string keyCity = p.first;
			auto neigbours = p.second; //list of neigbours

			cout<<keyCity<<"->";
			for(auto city:neigbours){
				cout<<city<<",";
			}
			cout<<endl;
		}
	}
};


int main(){
	Graph g;
	g.addEdge("Delhi","Chandigarh");
	g.addEdge("Mumbai","Chennai",false);
	g.addEdge("Kolkata","Mumbai");
	g.addEdge("Delhi","Kolkata");
	g.addEdge("Mumbai","Delhi");
	
	g.print();
	return 0;
}