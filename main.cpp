#include <iostream>
#include <SDL2/SDL.h>

using namespace  std;


int main(int argc  , char* argv[])
{
        SDL_Window* window ;

    if (SDL_Init(SDL_INIT_VIDEO) < 0)
    {
        cout << "SDL can not be initialized!" << SDL_GetError();

    }
    else
    {
        cout << "SDL video system is ready to go\n" << endl;

    }

    window = SDL_CreateWindow("Mini Football Game" , 
                              0,
                              0,
                              640,
                              480,
                              SDL_WINDOW_SHOWN);

    

    //Delay our pause 
    SDL_Delay(10000);

}