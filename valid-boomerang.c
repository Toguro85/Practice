/*
A boomerang is a set of 3 points that are all distinct and not in a straight line.

Given a list of three points in the plane, return whether these points are a boomerang.

 

Example 1:

Input: [[1,1],[2,3],[3,2]]
Output: true

Example 2:

Input: [[1,1],[2,2],[3,3]]
Output: false

*/



bool isBoomerang(int** points, int pointsSize, int* pointsColSize){
    int x1=points[0][0],x2=points[1][0],x3=points[2][0],y1=points[0][1],y2=points[1][1],y3=points[2][1];
    return x1*(y2-y3)+x2*(y3-y1)+x3*(y1-y2)!=0;
}

