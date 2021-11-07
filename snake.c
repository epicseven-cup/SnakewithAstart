//Snake default size
#define SNAKE_SIZE 3

//size of the board

//the width of the board
#define WIDTH 80

//the height of the board
#define HEIGHT 20



//SNAKE BODY
#define SNAKE 'O'

//FRUIT
#define FRUIT '#'

//empty space
#define SPACE ' '

// wall
#define WALL 'X'


#include<stdio.h>
#include<stdlib.h>

//struct does not want to work

/*
struct snake_body{
	int x;
	int y;
};
*/


int main(int argu, char*argv){
	size_t hight_wall = HEIGHT + 2;
	size_t width_wall = WIDTH + 2;
	char board[hight_wall][width_wall];
	//for each colums of the board 
	for(int rows =0; rows < hight_wall; rows++){
		//for each row in the board
		for(int colums = 0; colums < width_wall; colums++){
			//set the board in that location to space
			board[rows][colums] = WALL;
		}
	}
	
	for(int rows =1; rows < HEIGHT + 1; rows++){
		for(int colums =1; colums < WIDTH + 1; colums++){
			board[rows][colums] = SPACE;
		}
	}
	//it should be a correct setup board
	//hardcode snake position
	size_t half_h = HEIGHT /2;
	size_t half_w = WIDTH /2;
	
	int snake_length = SNAKE_SIZE;
	//Game itself
	int snake_status = 1;
	while(snake_status){
		char snake_pos[snake_length][2];
		
		
		for(int length =0; length < snake_length; length++){
			board[half_h][half_w + length] = SNAKE;
			char current[2];
			//x position
			current[0] = half_w + length;
			current[1] = half_h;
			//inserting the x position
			snake_pos[length][0] = current[0];
			//inserting the y position
			snake_pos[length][1] = current[1];
		}
		//Testing printing out all the character of the board
		for(int y =0; y < HEIGHT + 2; y++){
			for(int x=0; x < WIDTH + 2; x++){
				putchar(board[y][x]);
			}
			putchar('\n');
		}
		//getting user input not working correctly
		char user_input = getchar();
		if(user_input == 'l'){
			putchar('a');
		}
		
		//to much planning
	}
	
	
	return 0;
}
