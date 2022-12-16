#include <stdio.h>
#include <string.h>

struct Player {

	int questions;
	int score;
};

struct Question{

	char question[30];
	char answer[10];
};


int main(){


	struct Question first = {"Capital of England", "London"};
	struct Question second = {"Capital of France", "Paris"};
	struct Question third = {"Capital of Wales", "Cardiff"};
	struct Question fourth = {"Capital of N. Ireland", "Belfast"};
	struct Question fifth = {"Capital of Germany", "Berlin"};


	struct Question questions[6];
	questions[0] = first;
	questions[1] = second;
	questions[2] = third;
	questions[3] = fourth;
	questions[4] = fifth;


	struct Player player = {0, 0};

	
	for (int i=0; i<=4; i++){
		
		printf("%s: ", questions[i].question);
		char answer[10];
		scanf_s("%s", answer, 10);
		if (strcmp(answer, questions[i].answer)==0){
			++player.score;
		
	};
		++player.questions;
	

	};
	
	printf("You scored %d out of %d!", player.score, player.questions);
	
	return 0;
}



















