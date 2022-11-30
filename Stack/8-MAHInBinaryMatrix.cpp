#include<bits/stdc++.h>
#include <chrono>
using namespace std;
using namespace std::chrono;
// Nearest Smaller To Left
vector <int> nsLeft(vector <int> v, int n){
    // cout<<"TEST 1 PASSED"<<endl;
    vector <int> nsl;
    stack <pair<int, int>> s;

    for (int i = 0; i < n; i++)
    {
        if (s.empty()){
            nsl.push_back(-1);
        }
        else if (!s.empty() && s.top().first < v[i]){
            nsl.push_back(s.top().second);
        }
        else if (!s.empty() && s.top().first >= v[i]){
            while(!s.empty() && s.top().first >= v[i]){
                s.pop();
            }
            if (s.empty()){
                nsl.push_back(-1);
            }
            else{
                nsl.push_back(s.top().second);
            }
        }
        s.push({v[i], i});
    }
    
    return nsl;
}

// Nearest Small To Right
vector <int> nsRight(vector <int> v, int n){
    // cout<<"TEST 2 PASSED"<<endl;
    vector <int> nsr;
    stack <pair<int, int>> s;

    for (int i = n-1; i >= 0; i--)
    {
        if (s.empty()){
            nsr.push_back(n);
        }
        else if (!s.empty() && s.top().first < v[i]){
            nsr.push_back(s.top().second);
        }
        else if (!s.empty() && s.top().first >= v[i]){
            while(!s.empty() && s.top().first >= v[i]){
                s.pop();
            }
            if (s.empty()){
                nsr.push_back(n);
            }
            else
            {
                nsr.push_back(s.top().second);
            }
        }
            s.push({v[i], i});
    }

    reverse(nsr.begin(), nsr.end());
    return nsr;    
}

// calculate width
vector <int> calculateWidth(vector <int> nsl, vector <int> nsr, int n){
    // cout<<"TEST 3 PASSED"<<endl;
    vector <int> width;
    for (int i = 0; i < n; i++)
    {
        width.push_back(nsr[i]-nsl[i]-1);
    }
    return width;
}

//calculate area
vector <int> calculateArea(vector <int> width, vector <int> v, int n){
    // cout<<"TEST 4 PASSED"<<endl;
    vector <int> area;
    for (int i = 0; i < n; i++)
    {
        area.push_back(width[i]*v[i]);
    }
    return area;
}

//calulate max area
int calculateMaxArea(vector <int> area, int n){
    // cout<<"TEST 5 PASSED"<<endl;
    int maxArea = 0;
    for (int i = 0; i < n; i++)
    {
        maxArea = max(maxArea, area[i]);
    }
    
    return maxArea;
}

int MAH(vector <int> v){
    int n = v.size();
    // cout<<"TEST 6 PASSED"<<endl;
    vector <int> nsl = nsLeft(v, n);
    vector <int> nsr = nsRight(v,n);
    vector <int> width = calculateWidth(nsl, nsr, n);
    vector <int> area = calculateArea(width, v, n);
    int maxArea = calculateMaxArea(area, n);
    // cout<<maxArea<<endl;
    return maxArea;
}


int main(){
    auto start = high_resolution_clock::now();
    int arr[4][4] = {
        {0,1,1,0}, 
        {1,1,1,1}, 
        {1,1,1,1}, 
        {1,1,0,0}};
    int n = 4;
    int m = 4;
    vector <int> v;
    for (int j = 0; j<m; j++){
        v.push_back(arr[0][j]);
    }
    int maxAreaRect = MAH(v);
    // cout<<maxAreaRect<<endl;
    for (int i = 1; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (arr[i][j] == 0){
                v[j] = 0;
            }
            else{
                v[j] = v[j] + arr[i][j];
            }
        }
        maxAreaRect = max(maxAreaRect, MAH(v));
    }
    
    cout<<maxAreaRect<<endl;
    auto stop = high_resolution_clock::now();
    auto duration = duration_cast<microseconds>(stop - start);
    // cout << duration.count()/1000000 << endl;
    return 0;
}