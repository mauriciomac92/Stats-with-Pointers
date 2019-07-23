//
//  HeaderFunctions.h
//  Stats_with_Pointers
//
//  Created by Ariosto Kuit on 7/22/19.
//  Copyright © 2019 Ariosto Kuit. All rights reserved.
//

#ifndef HeaderFunctions_h
#define HeaderFunctions_h

#include <iostream>
using namespace std;

void sortMovieWatched(int *MoviesWatched, const int SIZE){ //sort it in ascending order
    int startScan, minIndex, minValue;
    
    for(startScan = 0; startScan < (SIZE - 1); startScan++){
        minIndex = startScan;
        minValue = *(MoviesWatched + startScan);
        
        for(int index = startScan + 1; index < SIZE; index++){
            if(*(MoviesWatched+ index) < minValue)
            {
                minValue = *(MoviesWatched + index);
                minIndex = index;
            }
        }
        *(MoviesWatched + minIndex) = *(MoviesWatched + startScan);
        *(MoviesWatched + startScan) = minValue;
    }
}

int *inputNum_MovieWatched(const int SIZE){ //use this function to input the amount of movies students watched
    int *MoviesWatched = nullptr;
    if(SIZE <= 0){return nullptr;} //return nullptr if size is less then 0
    MoviesWatched = new int[SIZE]; //Dynamically allocate array
    
    for(int i = 0; i < SIZE;i++){ //input the amount of movies watched per student
        cout << "How many movies did student #" << (i+1) << " watched this month?";
        cin >> *(MoviesWatched + i);
    }
    sortMovieWatched(MoviesWatched,SIZE); //sort the array in ascending order
    
    return MoviesWatched; //return the array
    
}

int findMode_MovieWatched(const int *MoviesWatched,const int SIZE){
    int mode = MoviesWatched[0];
    
    for(int i = 1; i < SIZE; i++){if(mode < MoviesWatched[i]){mode = MoviesWatched[i];}}
    return mode;
}

int findAverage_MovieWatched(const int *MoviesWatched, const int SIZE){
    int average, total = 0;
    int i = 0;
    while(i < SIZE){
        total += *(MoviesWatched + i);
        i++;
    }
    average = total/SIZE;
    return average;
}

int findMedian_MovieWatched(const int *MoviesWatched, const int SIZE){
    int median = 0;
    
    if(SIZE % 2 == 1){
        median = *(MoviesWatched + (SIZE/2)) + *(MoviesWatched + ((SIZE/2) + 1));
        median = median/2;
    }
    else
        median = *(MoviesWatched + (SIZE/2));
    
    return median;
}

#endif /* HeaderFunctions_h */
