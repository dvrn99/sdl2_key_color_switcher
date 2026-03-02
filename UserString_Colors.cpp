// to flash in an infinite loop in a window until the window is closed, the colors corresponding to a user-given string of letters and spaces
#include <SDL2/SDL.h>
#include <iostream>
#include <string>
#include <vector>
int main() {

int sdl_check = SDL_Init(SDL_INIT_EVERYTHING);
if (sdl_check==0) {
 std::cout<<"SDL Initialized\n(there might be a slight delay when closing the window)\n";
} else { std::cout<<"SDL Not Initialized"; return -1; }

std::cout<<"Insert Your String, Spaces and lowercase Letters only"<<std::endl;
std::string input;
std::getline(std::cin, input);

int strength;
std::cout<<"Enter strength: 0=superfast, 1=fast, 2=pleasurable, 3=slow af"<<std::endl;
std::cin>>strength;

std::vector<int> holder(input.length()); // empty vector

for (size_t i=0;i<input.length();i++){
if(input[i]==' '){
holder[i]=0;}
else if(input[i]>='a' && input[i]<='z'){
holder[i]=input[i]-'a'+1;}
} // no longer an empty vector

SDL_Window *window = SDL_CreateWindow("Infinite Flasher", SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, 1000, 1000, SDL_WINDOW_RESIZABLE | SDL_WINDOW_MAXIMIZED);
int width; int height; SDL_GetWindowSize(window, &width, &height);
SDL_Renderer *renderer = SDL_CreateRenderer(window,-1,0);
SDL_Event event;

bool main_switch=true;
bool kf1=false;//keyflag1 redundant
int ctr1=-1;//counter1
int val=0;//value tracker
while(main_switch==true)
{
	if (ctr1==holder.size()){ctr1=-1;}
	ctr1+=1;
	while(SDL_PollEvent(&event))
	{
	switch(event.type){
	case SDL_QUIT:main_switch=false;break;}
	}
	val=holder[ctr1];
	switch(val){
	case 0:SDL_SetRenderDrawColor(renderer,0,0,0,255);break;// Spacebar - Black
	case 1:SDL_SetRenderDrawColor(renderer,240,248,255,255);break;// A - AliceBlue
	case 2:SDL_SetRenderDrawColor(renderer,0,0,255,255);break;// B - Blue
	case 3:SDL_SetRenderDrawColor(renderer,0,255,255,255);break;// C - Cyan
	case 4:SDL_SetRenderDrawColor(renderer,255,140,0,255);break;// D - DarkOrange
	case 5:SDL_SetRenderDrawColor(renderer,80,200,120,255);break;// E - Emerald
	case 6:SDL_SetRenderDrawColor(renderer,255,0,255,255);break;// F - Fuchsia
	case 7:SDL_SetRenderDrawColor(renderer,0,255,0,255);break;// G - Green
	case 8:SDL_SetRenderDrawColor(renderer,240,255,255,255);break;// H - Honeydew
	case 9:SDL_SetRenderDrawColor(renderer,75,0,130,255);break;// I - Indigo
	case 10:SDL_SetRenderDrawColor(renderer,0,168,107,255);break;// J - Jade
	case 11:SDL_SetRenderDrawColor(renderer,195,176,145,255);break;// K - Khaki
	case 12:SDL_SetRenderDrawColor(renderer,230,230,250,255);break;// L - Lavender
	case 13:SDL_SetRenderDrawColor(renderer,128,0,0,255);break;// M - Maroon
	case 14:SDL_SetRenderDrawColor(renderer,0,0,128,255);break;// N - Navy
	case 15:SDL_SetRenderDrawColor(renderer,128,128,0,255);break;// O - Olive
	case 16:SDL_SetRenderDrawColor(renderer,255,192,203,255);break;// P - Pink
	case 17:SDL_SetRenderDrawColor(renderer,81,160,255,255);break;// Q - Queen Blue
	case 18:SDL_SetRenderDrawColor(renderer,255,0,0,255);break;// R - Red
	case 19:SDL_SetRenderDrawColor(renderer,192,192,192,255);break;// S - Silver
	case 20:SDL_SetRenderDrawColor(renderer,64,224,208,255);break;// T - Turquoise
	case 21:SDL_SetRenderDrawColor(renderer,99,81,71,255);break;// U - Umber
	case 22:SDL_SetRenderDrawColor(renderer,238,130,238,255);break;// V - Violet
	case 23:SDL_SetRenderDrawColor(renderer,245,222,179,255);break;// W - Wheat
	case 24:SDL_SetRenderDrawColor(renderer,115,134,120,255);break;// X - Xanadu
	case 25:SDL_SetRenderDrawColor(renderer,255,255,0,255);break;// Y - Yellow
	case 26:SDL_SetRenderDrawColor(renderer,57,167,142,255);break;// Z - Zomp
	}
	SDL_RenderClear(renderer);
	SDL_RenderPresent(renderer);
	switch(strength){
	case 1:SDL_Delay(100);break;
	case 2:SDL_Delay(350);break;
	case 3:SDL_Delay(1500);break;
	case 0:SDL_Delay(10);break;
	default:SDL_Delay(1000);
	}
}
SDL_DestroyRenderer(renderer);SDL_DestroyWindow(window);SDL_Quit();
return 0;
}
