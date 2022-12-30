// day12:
// 🎆 link: https://www.hackerrank.com/challenges/30-inheritance/problem 🎆

#include <iostream>
#include <vector>

using namespace std;

class Person
{
protected:
    string firstName;
    string lastName;
    int id;

public:
    Person() {}
    Person(string firstName, string lastName, int identification)
    {
        this->firstName = firstName;
        this->lastName = lastName;
        this->id = identification;
        // cout << " i am runned " << endl;
    }
    void printPerson()
    {
        cout << "Name: " << lastName << ", " << firstName << "\nID: " << id << "\n";
    }
};

class Student : public Person
{
private:
    vector<int> testScores;

public:
    Student(string firstName, string lastName, int id, vector<int> scores) : Person(firstName, lastName, id)
    // as apn ess tarah derived-class-constructor-fn run krvake phir voh parent-class-parametriessed-constructor-fn bhi run krva deteh hai.
    // Student(string firstname, string lastname, int id, vector<int> scores)
    {
        this->testScores = scores;
        // cout << " hello ji 55 " << endl;
    };

    int temp = 0;
    char calculate()
    {
        for (int i = 0; i < testScores.size(); i++)
        {
            temp += testScores[i];
        }
        temp = temp / (testScores.size());
        if (temp >= 90 && temp <= 100)
        {
            return 'O';
        }
        else if (temp >= 80 && temp < 90)
        {
            return 'E';
        }
        else if (temp >= 70 && temp < 80)
        {
            return 'A';
        }
        else if (temp >= 55 && temp < 70)
        {
            return 'P';
        }
        else if (temp >= 40 && temp < 55)
        {
            return 'D';
        }
        else
        {
            return 'T';
        }
        // else
        // {
        //     return 'M';
        // }
    }
};

int main()
{
    string firstName;
    string lastName;
    int id;
    int numScores;
    cin >> firstName >> lastName >> id >> numScores;
    vector<int> scores;
    for (int i = 0; i < numScores; i++)
    {
        int tmpScore;
        cin >> tmpScore;
        scores.push_back(tmpScore);
    }
    // cout << " helo ji " << endl;
    Student *s = new Student(firstName, lastName, id, scores);
    s->printPerson();
    // cout << " helo ji 2" << endl;
    // cout << " helo ji 2" << endl;
    cout << "Grade: " << s->calculate() << "\n";
    return 0;
}