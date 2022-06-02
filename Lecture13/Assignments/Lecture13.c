#include <stdio.h>
#include <math.h>
//structure for line
struct line{
    struct point{
        float x;
        float y;
    }point1, point2;
    float midpoint;
    float slope;
    float distance;
};
//structure for midpoint(can't return multiple values for midpoint so...)
struct midpoint{
    float x;
    float y;
    };
//functions for solving
float solveSlope(struct line line1);
struct midpoint solveMidpoint(struct line line1);
float solveDistance(struct line line1);
float getSlopeInterceptForm(struct line line1);

int main()
{   //create structure variable for user input
    struct line lineInfo;
    printf("Enter coordinates for point 1 (comma-seperated): ");
    scanf("%f,%f", &lineInfo.point1.x, &lineInfo.point1.y);
    printf("Enter coordinates for point 2 (comma-seperated): ");
    scanf("%f,%f", &lineInfo.point2.x, &lineInfo.point2.y);
    //solve the line
    printf("Slope: %.2f\n", solveSlope(lineInfo));
    struct midpoint x_y = solveMidpoint(lineInfo); //returns a structure
    printf("Midpoint: (%.2f,%.2f)\n", x_y.x, x_y.y);
    printf("Distance between two points: %.2f\n", solveDistance(lineInfo));
    printf("Slope-intercept form: y = %.2f x + (%.2f)", solveSlope(lineInfo), getSlopeInterceptForm(lineInfo));
}

float solveSlope(struct line line1)
{
    float m;
    m = (line1.point2.y - line1.point1.y)/(line1.point2.x - line1.point1.x); //corresponds to the slope formula
    return m;
}

struct midpoint solveMidpoint(struct line line1)
{
    struct midpoint x_y;
    x_y.x = (line1.point1.x + line1.point2.x)/2; //solve x-coordinate of midpoint
    x_y.y = (line1.point1.y + line1.point2.y)/2; //solve y-coordinate of midpoint
    return x_y;
}

float solveDistance(struct line line1)
{
    float d;
    d = pow((line1.point2.x - line1.point1.x), 2) + pow((line1.point2.y - line1.point1.y), 2); //solve distance using distance formula
    return sqrt(d);
}

float getSlopeInterceptForm(struct line line1)
{
    float b;
    b = (-solveSlope(line1)*line1.point1.x) + line1.point1.y; // y = mx + b or b = -mx + y
    return b;
}
