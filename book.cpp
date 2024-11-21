#indef BOOk_H
#include <iostream>
#include <string>
#include <vector>
#include "author.cpp"
#include "article.cpp"
#include "chapter.cpp"
class Book{
    private:
    std::string title;
    Author author;
    int publicationYear;
    std::vector <chapter> chapters;

public:
Book()
:title(""), author(Author()), publicationYear(2023), vector(){};

Book(std::string bookTitle, Author bookAuthor, int year, std::vector &bookChapters)
:title(bookTitle), Author(bookAuthor), publicationYear(year), chapters(bookChapters){};

void addChapter(CHapter &chapter){
    chapters.push_back(chapter);
}

Author getAuthor(){
    return author;
}
int getPublicationYear(){
    return publicationYear;
}
std::vector<chapter> &Book:getChapters(){
    return chapters;
}
};
#endif