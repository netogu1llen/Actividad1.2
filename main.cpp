// =================================================================
//
// File: main.cpp
// Author:Ernesto Guillén Guerrero 	
// Date: Martes 6 septiembre 2022
//
// =================================================================
#include <iostream>
#include <vector>
#include "header.h"
#include "search.h"
#include "bubble.h"
#include "selection.h"
#include "insertion.h"

using namespace std;

int main(int argc, char*argv[]){
    int n=0, q=0, target=0;
    cin>>n;

    int arr[n],aux[n],aux2[2];
    for (int i=0; i<n; i++){
        cin>>arr[i];
    }
    for (int i=0; i<n; i++){
        aux[i]=arr[i];
        aux2[i]=arr[i];
        }
    cout<<bubbleSort(arr,n)<<" "<<selectionSort(aux2,n)<<" "<<insertionSort(aux,n)<<endl;
    cout<<endl;
    cin>>q;
    
    for (int i=0; i<q; i++){
        pair<int,int>salidas,binary;
        cin>>target;
        salidas=sequentialSearch(arr,n,target);
        binary=binarySearch(arr,n,target;);
        cout<<salidas.first<<" "<<salidas.second<<" "<<binary.second<<endl;
}
return 0;
}