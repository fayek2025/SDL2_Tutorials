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
    window = SDL_CreateWindow("my first game",0 , 0 , 700 , 300 ,
     SDL_WINDOW_SHOWN);

     bool gameIsRunning = true;

     //Initiating infinite loop
     while(gameIsRunning)
     {
        SDL_Event event;
        //starting our event loop
        while (SDL_PollEvent(&event))
        
        {
            //handle each specific event
            if(event.type == SDL_QUIT)
            {
                gameIsRunning = false;
            }
        }
        
     }
    

    SDL_Delay(3000);

    SDL_DestroyWindow(window);

    SDL_QUIT;


        
        
    
}