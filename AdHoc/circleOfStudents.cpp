#include <iostream>
#include <vector>
using namespace std;
int main(){

    int q;
    cin >> q;
    while(q>0){
        int n;
        cin >> n;
        vector <int> students;
        int aux;
        for(int i = 0; i<n; i++){
            cin >> aux;
            students.push_back(aux);
        }
        bool clockWise = false;
        bool antiClockWise = false;
        if(students[0]!=n && students[0]!=1){
            if(students[1]==students[0]+1){
                clockWise = true;
            } else if (students[1]==students[0]-1){
                antiClockWise = true;
            }
        } else if(students[0]==n){
            if(students[1]==1){
                clockWise = true;
            } else if(students[1]==n-1){
                antiClockWise = true;
            }
        } else{
            if(students[1]==2){
                clockWise = true;
            } else if(students[1]==n){
                antiClockWise = true;
            }
        }
        for(int i = 1; i+1<n && (clockWise || antiClockWise); i++){
            if(clockWise){
                if(students[i]!=n){
                    if(students[i+1]!=students[i]+1){
                        clockWise = false;
                    }
                } else{
                    if(students[i+1]!=1){
                        clockWise = false;
                    }
                }
            } else if(antiClockWise){
                if(students[i]!=1){
                    if(students[i+1]!=students[i]-1){
                        antiClockWise = false;
                    }
                } else{
                    if(students[i+1]!=n){
                        antiClockWise = false;
                    }
                }
            }
        }        
        if(clockWise || antiClockWise || n==1){
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
        q--;
    } 

    return 0;
}