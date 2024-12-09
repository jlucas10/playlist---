#ifndef SONG_H
#define SONG_H

#include <string>

class Song
{
private:
    std::string title;
    std::string artist;

public:
    Song();
    Song(std::string title, std::string artist);
    std::string getTitle() const;
    std::string getArtist() const;
    std::string getFilePath() const;

    void setTitle(const std::string &title);
    void setArtist(const std::string &artist);
    void setFilePath(const std::string &filePath);
};

#endif
