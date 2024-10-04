#include <iostream>

using namespace std;

int main()
{
    string question[] = {"1.what is  this  language ?",
                         "2.What is the  shape  of  Earth ?", "3.Who invented c language?"};
    string option[][4] = {{"1.c","2.c++","3.python","4.java"},
                          {"1.triangle","2.Round","3.square","4.flat"},
                          {"1.Elon musk","2.Bill Gates","3.mark zuckerberg","4.dennsi richi"}};

    int anskey[] = {2, 2, 4};
    int size = sizeof(question) / sizeof(question[0]);
    int guess;
    int score = 0;

    for (int i = 0; i < size; i++)
    {
            cout<<"*************************"<<endl;
        cout << question[i] << endl;
        cout<<"*************************"<<endl;
        for (int j = 0; j < 4; j++)
        {
            cout << option[i][j] << endl;

        }
        cin >> guess;

        if (guess == anskey[i])
        {
            cout << "correct!" << endl;
            score++;
        }
        else
        {
            cout << "wrong!" << endl;
        }
        cout << endl;
    }
    cout<<"   *     Result      *   "<<endl;
    cout<<"Score: "<<score<<"/3 are  correct "<<endl;


    return 0;
}