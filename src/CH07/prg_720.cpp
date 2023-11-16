#include <iostream>
#include <vector>
using namespace std;

int main(int argc, char *argv[])
{
    vector<vector<vector<int>>> vector_3D;

    int x = 2, y = 3, z = 4;

    for (int i = 0; i < x; i++)
    {
        vector<vector<int>> v2d;

        for (int j = 0; j < y; j++)
        {
            vector<int> v1d;

            for (int k = 0; k < z; k++)
            {
                v1d.push_back(k);
            }
            v2d.push_back(v1d);
        }
        vector_3D.push_back(v2d);
    }

    for (int i = 0; i < vector_3D.size(); i++)
    {

        for (int j = 0; j < vector_3D[0].size(); j++)
        {

            for (int k = 0; k < vector_3D[0][0].size(); k++)
            {
                cout << vector_3D[i][j][k] << " ";
            }
            cout << endl;
        }
        cout << endl;
    }

    return 0;
}