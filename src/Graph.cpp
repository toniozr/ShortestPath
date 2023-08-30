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




