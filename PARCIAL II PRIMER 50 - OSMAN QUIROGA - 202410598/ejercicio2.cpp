#include <iostream>
using namespace std;
bool isCorrect(char userAnswer, char correctAnswer) {
    if(userAnswer == correctAnswer) {
        return true;
    } else {
        return false;
    }
}
int questionScore(bool correct) {
    if (correct) {
        return 10;
    } else {
        return 0;
    }
}  
void playQuiz() {
    cout << "Bienvenido: escoja entre a,b,c" << endl;
    char answer1, answer2, answer3;
    int totalScore = 0;
    cout << "Pregunta 1" << endl;
    cin >> answer1;
    totalScore += questionScore(isCorrect(answer1,'b'));
    cout << "Pregunta 2" << endl;
    cin >> answer2;
    totalScore += questionScore(isCorrect(answer2,'c'));
    cout << "Pregunta 3" << endl;
    cin >> answer3;
    totalScore += questionScore(isCorrect(answer3,'a'));
    cout << "Puntaje total: " << totalScore << endl;
}
int main() {
    playQuiz();
    return 0;
}
