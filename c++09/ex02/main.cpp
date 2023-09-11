#include <iostream>
#include <vector>
#include <list>
#include <algorithm>
#include <ctime>

void assign_vec(std::vector<int> &vec, char **argv)
{
    int j = 0;
    for(int i = 1; argv[i]; i++)
    {
        vec.push_back(std::stoi(argv[i]));
        // std::cout << vec[j] << std::endl;
        j++;
    }
}

void insertionSort(std::vector<int>& arr) {
    int n = arr.size();
    for (int i = 1; i < n; ++i)
    {
        int key = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }
}

void merge(std::vector<int>& arr, int left, int mid, int right) {
    int n1 = mid - left + 1;
    int n2 = right - mid;

    // Create temporary vectors to hold the two halves
    std::vector<int> leftArr(n1);
    std::vector<int> rightArr(n2);

    // Copy data to temporary arrays leftArr[] and rightArr[]
    for (int i = 0; i < n1; ++i) {
        leftArr[i] = arr[left + i];
    }
    for (int i = 0; i < n2; ++i) {
        rightArr[i] = arr[mid + 1 + i];
    }

    // Merge the two halves back into arr[left..right]
    int i = 0, j = 0, k = left;

    while (i < n1 && j < n2) {
        if (leftArr[i] <= rightArr[j]) {
            arr[k] = leftArr[i];
            ++i;
        } else {
            arr[k] = rightArr[j];
            ++j;
        }
        ++k;
    }

    // Copy the remaining elements of leftArr[], if any
    while (i < n1) {
        arr[k] = leftArr[i];
        ++i;
        ++k;
    }

    // Copy the remaining elements of rightArr[], if any
    while (j < n2) {
        arr[k] = rightArr[j];
        ++j;
        ++k;
    }
}

void mergeSort(std::vector<int>& arr, int left, int right) {
    if (left < right) {
        int mid = left + (right - left) / 2;
        mergeSort(arr, left, mid); // Sort the first and second halves
        mergeSort(arr, mid + 1, right);
        merge(arr, left, mid, right); // Merge the sorted halves
    }
}

void assign_lst(std::list<int> &lst, char **argv)
{
    int j = 0;
    for(int i = 1; argv[i]; i++)
    {
        lst.push_back(std::stoi(argv[i]));
        // std::cout << vec[j] << std::endl;
        j++;
    }
}

void insertionSort_lst(std::list<int>& lst) {
    std::list<int>::iterator iter = lst.begin();
    ++iter; // Start from the second element

    while (iter != lst.end()) {
        int key = *iter;
        std::list<int>::iterator j = iter;
        --j;

        while (j != lst.begin() && *j > key) {
            std::list<int>::iterator prev = j;
            --prev;
            *j = *prev;
            --j;
        }

        *j = key;
        ++iter;
    }
}

// Function to merge two sorted lists
void merge_lst(std::list<int>& lst, std::list<int>& left, std::list<int>& right) {
    std::list<int>::iterator l = left.begin();
    std::list<int>::iterator r = right.begin();

    while (l != left.end() && r != right.end()) {
        if (*l <= *r) {
            lst.push_back(*l);
            ++l;
        } else {
            lst.push_back(*r);
            ++r;
        }
    }

    // Append remaining elements, if any
    while (l != left.end()) {
        lst.push_back(*l);
        ++l;
    }
    while (r != right.end()) {
        lst.push_back(*r);
        ++r;
    }
}

// Function to perform merge sort on a std::list
void mergeSort_lst(std::list<int>& lst) {
    if (lst.size() <= 1) {
        return; // Already sorted
    }

    std::list<int> left, right;
    std::list<int>::iterator iter = lst.begin();
    int middle = lst.size() / 2;

    // Split the list into two halves
    for (int i = 0; i < middle; ++i) {
        left.push_back(*iter);
        ++iter;
    }
    while (iter != lst.end()) {
        right.push_back(*iter);
        ++iter;
    }

    // Recursively sort both halves
    mergeSort_lst(left);
    mergeSort_lst(right);

    // Merge the sorted halves
    lst.clear(); // Clear the original list
    merge_lst(lst, left, right);
}

int main(int argc, char **argv)
{
    int i = 0;
    std::vector<int> vec;
    std::list<int> lst;
    assign_vec(vec, argv);
    assign_lst(lst, argv);
    int v = vec.size();
    int l = lst.size();
    clock_t startTime_v = clock();
    // Calculate the duration in milliseconds
    if (v <= 10)
        insertionSort(vec);
    else if(v > 10)
        mergeSort(vec, 0, v - 1);
    clock_t endTime_v = clock();
    double duration_v = (double)(endTime_v - startTime_v) / CLOCKS_PER_SEC * 100.0;
    std::cout << "Sorted vector: ";
    while(vec[i])
    {
        std::cout << vec[i] << "  ";
        i++;
    }
    std::cout << duration_v << " Us to run algorithm with vector" << std::endl;
    clock_t startTime_l = clock();
    if (l <= 10)
        insertionSort_lst(lst);
    else
        mergeSort_lst(lst);
    clock_t endTime_l = clock();
    double duration_l = (double)(endTime_l - startTime_l) / CLOCKS_PER_SEC * 100.0;
    std::list<int>::iterator iter = lst.begin();
    std::cout << "Sorted list: ";
    while(iter != lst.end())
    {
        std::cout << *iter << "  ";
        iter++;
    }
    std::cout << duration_l << " Us to run algorithm with vector" << std::endl;
    return(0);
}