// Include all header libraries required
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>

/**
 * @brief Function takes in 2 vectors(arrays in C) as parameters 
 *        and returns the Euclidean Distance
 *
 * @param v1 Vector (Array in C) containing coordinates of point one
 * @param v2 Vector (Array in C) containing coordinates of point two
 * @return Returns double of Euclidean Distance between two points
 */
double euclidDistance(int v1[2], int v2[2]) {
  
  // Initialize variables for Euclid Distance (x1, y1) & (x2, y2)
  int x1 = v1[0]; 
  int y1 = v1[1];
  int x2 = v2[0];
  int y2 = v2[1]; 

  // Initiate distance return value for result
  double distance; 

  // Calculate distance between X coordinates
  int xD = x2 - x1; 

  // Calculate distance between Y coordinates 
  int yD = y2 - y1; 

  // Set exponent value for power function 
  int exponent = 2; 

  // Compute Euclidean Distance d = sqrt((x2 - x1)^2 + (y2 - y1)^2)
  // Need to use pow function to perform power operations as needed
  distance = sqrt(pow(xD, exponent) - pow(yD, exponent)); 

  return distance; 
}

/**
 * @brief Function fills in an array with random numbers from 0 to 100
 * 
 * @param arr Array of size 2
 * @param max Provide max value of random number 
 */
void randomArray(int arr[2], int max) {
  // Loop through each value in the array and set a random number
  for (int i = 0; i < 2; i++) {
    arr[i] = rand() % max; 
  }
}

/**
 * @brief Main driver 
 * 
 */

int main() {

  // Seed the random number generator using time(NULL) as time is different each time program runs
  srand(time(NULL)); 

  // Initiate Loop Value 
  int loop = 10; 

  // Initiate Vectors (Arrays in C) for both x and y coordinates
  int v1[2]; 
  int v2[2]; 

  double distance; 

  // Loop through program 10 times 
  while (loop > 0) {

    // Call the random array function to generate and fill both coordinates with random numbers
    randomArray(v1, 101); 
    randomArray(v2, 101); 

    distance = euclidDistance(v1, v2); 

    printf("The Euclidean Distance between the 2 vectors is: %lf\n", distance);

    --loop;  
  }

  return 0; 
}