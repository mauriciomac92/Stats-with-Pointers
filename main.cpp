//
//  main.cpp
//  Stats_with_Pointers
//
//  Created by Ariosto Kuit on 7/22/19.
//  Copyright © 2019 Ariosto Kuit. All rights reserved.
//

#include <iostream>
#include "HeaderFunctions.h"
using namespace std;


int main() {
    // insert code here...
    int numOfStudent;
    int *MoviesWatched = nullptr;
    cout << "How many students were surveyed: ";
    cin >> numOfStudent;

    MoviesWatched = inputNum_MovieWatched(numOfStudent);

for(int i = 1; i <= numOfStudent; i++){
    cout << "Student #" << i << ": " << MoviesWatched[i-1];
}
    int MovieAverage;
    MovieAverage = findAverage_MovieWatched(MoviesWatched,numOfStudent);

    cout << "The total average is: " << MovieAverage << endl;

    int MovieMedian = findMedian_MovieWatched(MoviesWatched, numOfStudent);
    cout << "The total median is: " << MovieMedian << endl;

    int MovieMode = findMode_MovieWatched(MoviesWatched,numOfStudent);
    cout << "The total mode is: " << MovieMode << endl;
    
    return 0;
}
