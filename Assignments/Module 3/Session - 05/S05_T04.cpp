/* 
    Given this code: 
    
class MusicPlayer
{
    void play(String song) 
    { 
        System.out.println("Playing: " + song); 
    } 
} 

class SpotifyPlayer extends MusicPlayer 
{ 
    void play(String song) 
    { 
        System.out.println("Streaming on Spotify: " + song); 
    } 
} 
    Create an object of type MusicPlayer but assign it a SpotifyPlayer instance, then call play(). 
    
    Explain the output.
    Hint: 
    This tests runtime polymorphism (overriding) and dynamic method dispatch.</em>
 */