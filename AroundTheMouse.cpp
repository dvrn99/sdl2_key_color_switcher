// to create a rectange of flashing colors around the mouse when the mouse is clicked and/or dragged inside the window
#include <SDL2/SDL.h>
#include <iostream>
#include <string>
#include <vector>
int main() {

int sdl_check = SDL_Init(SDL_INIT_EVERYTHING);
if (sdl_check==0) {
 std::cout<<"SDL Initialized\n";
} else { std::cout<<"SDL Not Initialized"; return -1; }

SDL_Window *window = SDL_CreateWindow("Infinite Flasher", SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, 1000, 1000, SDL_WINDOW_RESIZABLE | SDL_WINDOW_MAXIMIZED);
int width; int height; SDL_GetWindowSize(window, &width, &height);
SDL_Renderer *renderer = SDL_CreateRenderer(window,-1,0);
SDL_Event event;
SDL_Point mousepos;
SDL_Rect mouseRect={0,0,124,84};// that is the size of the colors flashing, it can be adjusted

bool main_switch=true;
bool kf1=false;//keyflag1
int ctr1=0;//counter1
int val=0;//value tracker redundant

while(main_switch==true)
{
	ctr1++;if(ctr1==5){ctr1=1;}
	while(SDL_PollEvent(&event))
	{
	switch(event.type){
	case SDL_QUIT:{main_switch=false;break;}
	case SDL_MOUSEBUTTONDOWN:{kf1=true;break;}
	case SDL_MOUSEBUTTONUP:{kf1=false;break;}
	case SDL_MOUSEMOTION:{mousepos.x=event.motion.x;mousepos.y=event.motion.y;}
	}
	}
	SDL_SetRenderDrawColor(renderer,0,0,0,255);
	SDL_RenderClear(renderer);
	if(kf1==true){
	mouseRect.x=mousepos.x-10;
	mouseRect.y=mousepos.y-10;
	switch(ctr1){
	case 1:SDL_SetRenderDrawColor(renderer,255,0,0,255);break;
	case 2:SDL_SetRenderDrawColor(renderer,0,255,0,255);break;
	case 3:SDL_SetRenderDrawColor(renderer,0,9,255,255);break;
	case 4:SDL_SetRenderDrawColor(renderer,28,140,10,255);break;
	}
	SDL_RenderFillRect(renderer,&mouseRect);
	}
	SDL_RenderPresent(renderer);
}
SDL_DestroyRenderer(renderer);SDL_DestroyWindow(window);SDL_Quit();

return 0;
}
