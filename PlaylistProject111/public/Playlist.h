#ifndef PLAYLIST_H
#define PLAYLIST_H

#include <vector>
#include "Song.h"

class Playlist
{
private:
    std::string title;
    std::vector<Song> songs; // Vector to store songs

public:
    Playlist();
    Playlist(std::string title);

    void addSong(const Song &song);
    void removeSong(const std::string &songTitle);
    void viewSongs() const;

    std::string getTitle() const;
    void setTitle(const std::string &title);
};

#endif
