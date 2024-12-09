#include "Playlist.h"
#include "Song.h"
#include <iostream>

using namespace std;

Playlist::Playlist() : title("Untitled") {}

Playlist::Playlist(string title) : title(title) {}

void Playlist::addSong(const Song &song)
{
    songs.push_back(song);
}

void Playlist::removeSong(const string &songTitle)
{
    // Iterate through the songs and find the one with the given title
    for (size_t i = 0; i < songs.size(); ++i)
    {
        if (songs[i].getTitle() == songTitle)
        {
            songs.erase(songs.begin() + i); // Remove the song from the vector
            cout << "Song removed: " << songTitle << endl;
            return;
        }
    }
    cout << "Song not found!" << endl;
}

void Playlist::viewSongs() const
{
    if (songs.empty())
    {
        cout << "No songs in this playlist." << endl;
        return;
    }

    // Iterate over the songs and display each one
    for (size_t i = 0; i < songs.size(); ++i)
    {
        cout << songs[i].getTitle() << " by " << songs[i].getArtist() << endl;
    }
}

string Playlist::getTitle() const
{
    return title;
}

void Playlist::setTitle(const string &title)
{
    this->title = title;
}
