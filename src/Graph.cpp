/*
 * Graph.cpp
 *
 *  Created on: Aug 28, 2023
 *      Author: toni
 */

#include "Graph.h"


void Graph::InsertGlobalList(vector<int> currentPath, int hopCount)
{
	if(m_globalPathList.second.empty() || m_globalPathList.first == hopCount)
	{
		m_globalPathList.second.push_back(currentPath);
		m_globalPathList.first = hopCount;
	}

	else if(m_globalPathList.first > hopCount)
	{
		m_globalPathList.second.clear();
		m_globalPathList.first = hopCount;
		m_globalPathList.second.push_back(currentPath);
	}
	return;
}

void Graph::ShortestPaths(vector<bool> visitedNodes, int hopCount, vector<int> currentPath,
		int currentNode, int finalNode)
{
	visitedNodes[currentNode] = true;
	hopCount++;
	currentPath.push_back(currentNode);

	if(currentNode == finalNode)
		InsertGlobalList(currentPath, hopCount);
	else
	{
		for(int i = 0; i < m_numVertices; i++)
		{
			if(m_adjacencyMatrix[currentNode][i] == 1 && !visitedNodes[i])
				ShortestPaths(visitedNodes, hopCount, currentPath, i, finalNode);

		}
	}
	return;
}




