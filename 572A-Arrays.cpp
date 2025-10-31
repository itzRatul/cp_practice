#include<iostream>
#include<vector>
using namespace std;
    /*
        Logic Explanation:
        ------------------
        Arrays A and B are sorted in non-decreasing order.

        We need to pick:
          - k numbers from A
          - m numbers from B
        such that every chosen number from A is strictly less than
        every chosen number from B.

        Since A is sorted:
          -> If we pick the first k smallest numbers from A,
             the largest among them will be A[k-1].

        Since B is sorted:
          -> If we pick the last m largest numbers from B,
             the smallest among them will be B[nB - m].

        Therefore:
          If A[k-1] < B[nB - m],
          it means all chosen elements from A are less than
          all chosen elements from B → print "YES".
          Otherwise → "NO".

        ⚠️ Note:
        Using B[0] instead of B[nB - m] would be wrong,
        because B[0] is the smallest element of the entire array,
        not of the chosen m largest elements.
    */
int main()
{
    int a,b,k,m;
    cin>>a>>b>>k>>m;
    vector<int>arrA(a);
    vector<int>arrB(b);
    for(int i=0;i<a;i++)
    {
        cin>>arrA[i];
    }
    for(int i=0;i<b;i++)
    {
        cin>>arrB[i];
    }
    if(arrA[k-1] < arrB[b-m]) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
    return 0;
}