#include <iostream>
using namespace std;

class StudentScores{
	private:
		int Scores [3];
		
	public:
		void InsertScores(){
			for (int i = 0; i < 3; i ++){
				cout << "Enter the Student Score: ";
				cin >> Scores[i];
			}
		}
	public:
		void DisplayScores(){
			for (int i = 0; i < 3; i ++){
				cout << Scores[i]<< endl;
			}
		}
	public:
		int Search(){
			int SearchForAnyScore;
			cout << "Enter a Score to be Searched: ";
			cin >> SearchForAnyScore;
			for(int i = 0; i < 3; i ++){
				if (SearchForAnyScore == Scores[i]){
					cout << "Found " <<SearchForAnyScore<< endl;
					return 0;
				}
				
			}
			cout << "Not Found " <<SearchForAnyScore<< endl;
		}
		
	public:
		int DeleteAScore(){
			int SearchForAnyScore;
			cout << "Enter a Score to be deleted: ";
			cin >> SearchForAnyScore;
			for(int i = 0; i < 3; i ++){
				if (SearchForAnyScore == Scores[i]){
					cout << "Found " <<SearchForAnyScore<< endl;
					for (int j = i; j < 3; j++){
						Scores[j] = Scores[j+1];
					return 0;	
					}
			}
	}
	cout << "Not Found " <<SearchForAnyScore<<endl;
		}
};

int main(int argc, char** argv) {
	StudentScores S1;
	
	S1.InsertScores();
	S1.DisplayScores();
	S1.Search();
	S1.DeleteAScore();
	S1.DisplayScores();
	
	

	return 0;
}
