#ifndef SONG_H
#define SONG_H

#include <SFML/Audio.hpp>
#include <string>
#include <memory>

class Song
{
public:
    Song();
    Song(std::string title, std::string artist, std::string filePath);
    Song(Song &&other) noexcept;            // Move constructor
    Song &operator=(Song &&other) noexcept; // Move assignment operator

    // Copy constructor (explicitly defined)
    Song(const Song &other);

    std::string getTitle() const;
    std::string getArtist() const;

    void setTitle(const std::string &title);
    void setArtist(const std::string &artist);

    void play();
    void stop();

private:
    std::string title;
    std::string artist;
    std::string filePath;
    std::unique_ptr<sf::Music> music;
};

#endif
