#include "Song.h"

Song::Song() : title("Untitled"), artist("Unknown") {}

Song::Song(std::string title, std::string artist)
    : title(title), artist(artist) {}

std::string Song::getTitle() const
{
    return title;
}

std::string Song::getArtist() const
{
    return artist;
}

void Song::setTitle(const std::string &title)
{
    this->title = title;
}

void Song::setArtist(const std::string &artist)
{
    this->artist = artist;
}
