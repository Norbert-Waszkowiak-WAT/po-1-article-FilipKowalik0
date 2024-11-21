#ifdef UNTITLED1_ARTICLE_H
#define UNTITLED1_ARTICLE_H
#include <iostream>
#include <string>
#include "author.cpp"

using namespace std;
class Article{
private:
    string title;
    Author author;
    int publicationYear;
    string journal;
public:
    Article()
    :title(""), (Autor()), publicationYear(0),journal(""){};
    
    Article(string articleTitle, Author articleAuthor, int publicationYear, string journalName)
    :title(articleTitle), author(articleAuthor),publicationYear(publicationYear), journal(journalName){};
    
    Author(Article &other){}
    :title(other.title), author(other.author),publicationYear(other.publicationYear),journal(other.journal){};
    
    stirng getJournal(){
        return journal;
    };
    int getPublicationYear(){
        return publicationYear;
    };
    Author getAuthor(){
        return author;
    };
    string getTitle(){
        return title;
    };
    void displayInfo(){
        cout<<"skibidi mostek";
    };
};
#endif