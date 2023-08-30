#include <limits.h>
#include "Graph.h"

int main() {


    vector<vector<int>> adjacencyMatrix = {
        {0, 1, 1, 0, 0, 0, 0, 0},
        {1, 0, 0, 1, 1, 0, 0, 0},
        {1, 0, 0, 0, 0, 1, 1, 0},
		{0, 1, 0, 0, 0, 0, 0, 0},
		{0, 1, 0, 0, 0, 0, 0, 0},
		{0, 0, 1, 0, 0, 0, 0, 1},
		{0, 0, 1, 0, 0, 0, 0, 1},
		{0, 0, 0, 0, 0, 1, 1, 0}
    };

    vector<bool> visitedNodes = { false, false, false, false, false, false, false, false };

    int hopCount = -1;

    pair<int,vector<vector<int>>> globalPathList;

    vector<int> currentPath;

    //Graph(int vertices, const vector<vector<int>>& matrix, const pair<int,vector<vector<int>>>& globalPath)
    //void ShortestPaths(vector<bool> visitedNodes, int hopCount, vector<int> currentPath, int currentNode, int finalNode);
    Graph g(adjacencyMatrix.size(), adjacencyMatrix, globalPathList);
    g.ShortestPaths(visitedNodes, hopCount, currentPath, 0, 7);

    globalPathList = g.getGlobalPath();



//    Graph graph(adjacencyMatrix.size(), adjacencyMatrix);
//    graph.PrintGraph();

    return 0;
}

