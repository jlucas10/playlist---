#include "Playlist.h"
#include <iostream>

Playlist::Playlist() : title("Untitled") {}

Playlist::Playlist(std::string title) : title(title) {}

void Playlist::addSong(Song &&song)
{
    songs.push_back(std::move(song));
}

void Playlist::removeSong(const std::string &songTitle)
{
    for (size_t i = 0; i < songs.size(); ++i)
    {
        if (songs[i].getTitle() == songTitle)
        {
            songs.erase(songs.begin() + i);
            std::cout << "Song removed: " << songTitle << std::endl;
            return;
        }
    }
    std::cout << "Song not found!" << std::endl;
}

void Playlist::viewSongs() const
{
    if (songs.empty())
    {
        std::cout << "No songs in this playlist." << std::endl;
        return;
    }

    for (const auto &song : songs)
    {
        std::cout << song.getTitle() << " by " << song.getArtist() << std::endl;
    }
}

std::string Playlist::getTitle() const
{
    return title;
}

void Playlist::setTitle(const std::string &title)
{
    this->title = title;
}

Song *Playlist::getSongByTitle(const std::string &title)
{
    for (auto &song : songs)
    {
        if (song.getTitle() == title)
        {
            return &song;
        }
    }
    return nullptr;
}
