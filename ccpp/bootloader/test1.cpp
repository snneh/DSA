#include<bits/stdc++.h>

using namespace std;


int main() {
    vector<vector<int>> arr = {
    {2, 4, 2, 8, 8},
    {0, 0, 4, 4, 8},
    {32, 32, 2, 0, 64},
    {0, 4, 8, 8, 0},
    {2, 8, 0, 4, 4}
}

    int n = 5;
    

    //right
    for (int i=0; i<n; i++) {
        for (int j=n-1; j>=0; j--) {
            int p1 = n-1, temp = arr[i][j]; tempSum = 0;
            while (arr[i][p1] == temp && p1<0) {
                if (arr[i][p1] == 0)
                tempSumm += arr[i][p1]; 

                p1--;
            }

            arr[i][j] = tempSum;
        }

    }


    for (int i=0; i<n; i++) {
        for (int j=n-1; j>0; j--) {
            if (arr[i][j] )
        }
    }
}