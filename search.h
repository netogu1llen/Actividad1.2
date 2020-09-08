// =================================================================
//
// File: search.h
// Author: Pedro Perez
// Description: This file contains the implementation of the
//				sequential and binary search algorithms.
//
// Copyright (c) 2020 by Tecnologico de Monterrey.
// All Rights Reserved. May be reproduced for any non-commercial
// purpose.
// =================================================================
#ifndef SEARCH_H
#define SEARCH_H

#include "header.h"
#include <iostream>
#include <vector>

using namespace std;

// =================================================================
// Performs a sequential search for an element within an array.
//
// @param A, an array of T elements.
// @param size, the number of elements in the array.
// @param key, the search element.
// @return the index of the searched element, -1 in case the element
//		   is not found in the array.
// =================================================================
template <class T>
int sequentialSearch(const vector<T> &v, T key) {
	for (int i = 0; i < v.size(); i++) {
		if (v[i] == key) {
			return i;
		}
	}
	return -1;
}

/*
template <class T>
vector<int> sequentialSearch(const vector<T> &v, T key) {
	vector<int> positions;

	for (int i = 0; i < v.size(); i++) {
		if (v[i] == key) {
			positions.push_back(i);
		}
	}
	return positions;
}
*/

// =================================================================
// Performs a binary search for an element within an array.
//
// @param A, an array of T elements.
// @param size, the number of elements in the array.
// @param key, the search element.
// @return the index of the searched element, -1 in case the element
//		   is not found in the array.
// =================================================================
template <class T>
int binarySearch(const vector<T> &v, T key) {
	int low, high, mid;

	low = 0;
	high = v.size() - 1;
	while (low <= high) {
		mid = low + ((high - low) / 2); // mid = (high + low) / 2;
		if (key == v[mid]) {
			return mid;
		} else if (key < v[mid]) {
			high = mid - 1;
		} else {
			low = mid + 1;
		}
	}
	return -1;
}

// =================================================================
// Performs a binary search for an element within an array.
//
// @param A, an array of T elements.
// @param size, the number of elements in the array.
// @param key, the search element.
// @return the index of the searched element, -1 in case the element
//		   is not found in the array.
// =================================================================
template <class T>
int binaryRSearch(const vector<T> &v, int low, int high, T key) {
	int mid;

	if (low > high) {
		return -1;
	} else {
		mid = low + ((high - low) / 2); // mid = (high + low) / 2;
		if (key == v[mid]) {
			return mid;
		} else if (key < v[mid]) {
			return binaryRSearch(v, low, mid - 1, key);
		} else {
			return binaryRSearch(v, mid + 1, high, key);
		}
	}
}

#endif /* SEARCH_H */