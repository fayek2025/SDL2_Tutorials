#include <iostream>
#include <SDL2/SDL.h>
using namespace std;

int main()
{
    SDL_Window  * window = nullptr;

    if (SDL_Init(SDL_INIT_VIDEO) == 0)
    {
        cout << "No SDL input is valid!"<<endl;

        
    }
    else{
        cout << " Sdl run perfectly!"<< endl;
        
    }
    
    //Creating new windows
    window = SDL_CreateWindow(0 , 0 , 700 , 300 , SHOW_OUTPUT)
    {
        
        
    }
}