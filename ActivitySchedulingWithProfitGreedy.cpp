//Xronoprogrammatismos Ergasiwn me kerdos, deadline kai monadiaia diarkeia/ergasia me greedy
#include<iostream>

using namespace std;

int n = 5;

int synartisi(int neos[], int j){
    int flag = 0, i;

    for(i = 0; i < n; i++){
        if(neos[i] == j){
            flag++;
        }
    }
    if (flag == 0){
        return 1;
    }
    else{
        return 0;
    }
}

int main(){

    int kerdos[] = {10, 1, 20, 15, 5};
    int dead[] = {1, 1, 2, 2, 3};
    int neos[] = {0, 0, 0, 0, 0};
    int j , i;

    for(i = 0; i <= 5; i++){
        for(j = dead[i]; j > 0; j--){
            if(synartisi(neos, j) == 1){
                neos[i] = j;
            }
        }
    }

    for(i=0; i<5; i++){
        cout<<neos[i];
    }
}

