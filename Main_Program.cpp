// check repository description for what this does

#include <SDL2/SDL.h>
#include <iostream>

int main() {

int sdl_check = SDL_Init(SDL_INIT_EVERYTHING);
if (sdl_check==0) {
 std::cout<<"Check successful!\n";
} else { std::cout<<"Something went wrong.\n"; return -1; }

std::cout << "1  - A - AliceBlue\n";
std::cout << "2  - B - Blue\n";
std::cout << "3  - C - Cyan\n";
std::cout << "4  - D - DarkOrange\n";
std::cout << "5  - E - Emerald\n";
std::cout << "6  - F - Fuchsia\n";
std::cout << "7  - G - Green\n";
std::cout << "8  - H - Honeydew\n";
std::cout << "9  - I - Indigo\n";
std::cout << "10 - J - Jade\n";
std::cout << "11 - K - Khaki\n";
std::cout << "12 - L - Lavender\n";
std::cout << "13 - M - Maroon\n";
std::cout << "14 - N - Navy\n";
std::cout << "15 - O - Olive\n";
std::cout << "16 - P - Pink\n";
std::cout << "17 - Q - Queen Blue\n";
std::cout << "18 - R - Red\n";
std::cout << "19 - S - Silver\n";
std::cout << "20 - T - Turquoise\n";
std::cout << "21 - U - Umber\n";
std::cout << "22 - V - Violet\n";
std::cout << "23 - W - Wheat\n";
std::cout << "24 - X - Xanadu\n";
std::cout << "25 - Y - Yellow\n";
std::cout << "26 - Z - Zomp\n";

SDL_Window *window = SDL_CreateWindow("PRESS KEY TO SEE COLOR", SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, 1000, 1000, SDL_WINDOW_RESIZABLE | SDL_WINDOW_MAXIMIZED);
int width; int height; SDL_GetWindowSize(window, &width, &height);
SDL_Renderer *renderer = SDL_CreateRenderer(window,-1,0);
SDL_Event event;

bool main_switch=true;
bool kf1=false;//keyflag1 redundant
int ctr1=0;//counter1 redundant
int val=0;//value tracker
while(main_switch==true)
{
	while(SDL_PollEvent(&event))
	{
	switch(event.type){
	case SDL_QUIT:main_switch=false;break;
	case SDL_KEYDOWN:
		switch(event.key.keysym.sym){
		case SDLK_SPACE:val=0;break;
		case SDLK_a:val=1;break;
		case SDLK_b:val=2;break;
		case SDLK_c:val=3;break;
		case SDLK_d:val=4;break;
		case SDLK_e:val=5;break;
		case SDLK_f:val=6;break;
		case SDLK_g:val=7;break;
		case SDLK_h:val=8;break;
		case SDLK_i:val=9;break;
		case SDLK_j:val=10;break;
		case SDLK_k:val=11;break;
		case SDLK_l:val=12;break;
		case SDLK_m:val=13;break;
		case SDLK_n:val=14;break;
		case SDLK_o:val=15;break;
		case SDLK_p:val=16;break;
		case SDLK_q:val=17;break;
		case SDLK_r:val=18;break;
		case SDLK_s:val=19;break;
		case SDLK_t:val=20;break;
		case SDLK_u:val=21;break;
		case SDLK_v:val=22;break;
		case SDLK_w:val=23;break;
		case SDLK_x:val=24;break;
		case SDLK_y:val=25;break;
		case SDLK_z:val=26;break;
		}
	break;
	}
	}
	switch(val){
	case 0:SDL_SetRenderDrawColor(renderer,0,0,0,255);break;
	case 1:SDL_SetRenderDrawColor(renderer,240,248,255,255);break;
	case 2:SDL_SetRenderDrawColor(renderer,0,0,255,255);break;
	case 3:SDL_SetRenderDrawColor(renderer,0,255,255,255);break;
	case 4:SDL_SetRenderDrawColor(renderer,255,140,0,255);break;
        case 5:  SDL_SetRenderDrawColor(renderer, 80, 200, 120, 255); break;   // E - Emerald
        case 6:  SDL_SetRenderDrawColor(renderer, 255, 0, 255, 255); break;    // F - Fuchsia
        case 7:  SDL_SetRenderDrawColor(renderer, 0, 255, 0, 255); break;      // G - Green
        case 8:  SDL_SetRenderDrawColor(renderer, 240, 255, 255, 255); break;  // H - Honeydew
        case 9:  SDL_SetRenderDrawColor(renderer, 75, 0, 130, 255); break;     // I - Indigo
        case 10: SDL_SetRenderDrawColor(renderer, 0, 168, 107, 255); break;    // J - Jade
        case 11: SDL_SetRenderDrawColor(renderer, 195, 176, 145, 255); break;  // K - Khaki
        case 12: SDL_SetRenderDrawColor(renderer, 230, 230, 250, 255); break;  // L - Lavender
        case 13: SDL_SetRenderDrawColor(renderer, 128, 0, 0, 255); break;      // M - Maroon
        case 14: SDL_SetRenderDrawColor(renderer, 0, 0, 128, 255); break;      // N - Navy
        case 15: SDL_SetRenderDrawColor(renderer, 128, 128, 0, 255); break;    // O - Olive
        case 16: SDL_SetRenderDrawColor(renderer, 255, 192, 203, 255); break;  // P - Pink
        case 17: SDL_SetRenderDrawColor(renderer, 81, 160, 255, 255); break;   // Q - Queen Blue
        case 18: SDL_SetRenderDrawColor(renderer, 255, 0, 0, 255); break;      // R - Red
        case 19: SDL_SetRenderDrawColor(renderer, 192, 192, 192, 255); break;  // S - Silver
        case 20: SDL_SetRenderDrawColor(renderer, 64, 224, 208, 255); break;   // T - Turquoise
        case 21: SDL_SetRenderDrawColor(renderer, 99, 81, 71, 255); break;     // U - Umber
        case 22: SDL_SetRenderDrawColor(renderer, 238, 130, 238, 255); break;  // V - Violet
        case 23: SDL_SetRenderDrawColor(renderer, 245, 222, 179, 255); break;  // W - Wheat
        case 24: SDL_SetRenderDrawColor(renderer, 115, 134, 120, 255); break;  // X - Xanadu
        case 25: SDL_SetRenderDrawColor(renderer, 255, 255, 0, 255); break;    // Y - Yellow
        case 26: SDL_SetRenderDrawColor(renderer, 57, 167, 142, 255); break;   // Z - Zomp
	}
label1:	SDL_RenderClear(renderer);
	SDL_RenderPresent(renderer);
}

return 0;
}
