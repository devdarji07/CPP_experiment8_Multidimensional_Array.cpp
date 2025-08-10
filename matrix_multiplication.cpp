// Dev Darji
// 24070123033 | ENTC A2

#include<iostream>
using namespace std;

int main(){
    int arr1[100][100], rows1, columns1;
    cout<<"For the 1st matrix:\n";
    cout << "Enter the number of rows: ";
    cin >> rows1;
    cout << "Enter the number of columns: ";
    cin >> columns1;

    int arr2[100][100], rows2, columns2;
    cout<<"For the 2nd matrix:\n";
    cout << "Enter the number of rows: ";
    cin >> rows2;
    cout << "Enter the number of columns: ";
    cin >> columns2;
    
    if (columns1 != rows2){
        cout << "Multiplication not possible. Columns of 1st matrix must equal rows of 2nd matrix." << endl;
        return 1;
    }

    int result[100][100] = {0};
    cout << "Enter elements of the 1st matrix (row-wise):" << endl;
    for (int i = 0; i < rows1; i++){
        for (int j = 0; j < columns1; j++){
            cin >> arr1[i][j];
        }
    cout<<endl;
    }

    cout << "Enter elements of the 2nd matrix (row-wise):" << endl;
    for (int i = 0; i < rows2; i++){
        for (int j = 0; j < columns2; j++){
            cin >> arr2[i][j];
        }   
    cout<<endl;
    }

    for (int i = 0; i < rows1; i++) {
        for (int j = 0; j < columns2; j++) {
            for (int k = 0; k < columns1; k++) {
                result[i][j] += arr1[i][k] * arr2[k][j];
            }
        }
    }
    cout << "The resulting matrix after multiplication is:" << endl;
    for (int i = 0; i < rows1; i++) {
        for (int j = 0; j < columns2; j++) {
            cout << result[i][j] << " ";
        }
        cout << endl;
    }
    


    return 0;
}
