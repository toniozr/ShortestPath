/*
 * Graph.h
 *
 *  Created on: Aug 28, 2023
 *      Author: toni
 */

#ifndef GRAPH_H_
#define GRAPH_H_

#include <iostream>
#include <vector>
#include <utility>

using namespace std;

class Graph {

public:
    Graph(int vertices, const vector<vector<int>>& matrix, const pair<int,vector<vector<int>>>& globalPath)
        : m_numVertices(vertices), m_adjacencyMatrix(matrix), m_globalPathList(globalPath) {}

    void PrintGraph() {
    	for(int i = 0; i < m_numVertices; i++)
    	{
    		for(int j = 0; j < m_numVertices; j++)
    		{
    			cout << m_adjacencyMatrix[i][j] << " ";
    		}
    		cout << endl;
    	}
    }



    pair<int,vector<vector<int>>> getGlobalPath() { return m_globalPathList; }

private:
    int m_numVertices;
    vector<vector<int>> m_adjacencyMatrix;
    pair<int,vector<vector<int>>> m_globalPathList;


};

#endif /* GRAPH_H_ */
