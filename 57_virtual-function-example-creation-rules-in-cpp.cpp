#include <iostream>
#include <cstring>
using namespace std;

class CWH
{
protected:
    string title;
    float rating;

public:
    CWH(string s, float r)
    {
        title = s;
        rating = r;
    }
    virtual void display()
    {
        cout << "bogus code" << endl; // if virtual is not add then bogus code is print twice
    }
};

class CWHVideo : public CWH
{
    float videoLength;

public:
    CWHVideo(string s, float r, float vL) : CWH(s, r)
    {
        videoLength = vL;
    }

    void display()
    {
        cout << "This is an amazing video with title: " << title << endl;
        cout << "Rating " << rating << " out of 5 stars " << endl;
        cout << "Lenght of this video is: " << videoLength << " minutes" << endl;
    }
};

class CWHText : public CWH
{
    int words;

public:
    CWHText(string s, float r, int wc) : CWH(s, r)
    {
        words = wc;
    }
    void display()
    {
        cout << "This is an amazing text with title: " << title << endl;
        cout << "Rating of this text tutorial " << rating << " out of 5 stars " << endl;
        cout << "Number of words in this text turorial is: " << words << " words" << endl;
    }
};

int main()
{
    string title;
    float rating, vl;
    int words;

    // for CHWVedio
    title = "Django tutorial";
    vl = 4.56;
    rating = 4.98;
    CWHVideo djVideo(title, rating, vl);
    // djVideo.display();

    // for CHWText
    title = "Django tutorial";
    words = 433;
    rating = 4.18;
    CWHText djText(title, rating, words);
    // djText.display();

    CWH *tuts[2];
    tuts[0] = &djVideo;
    tuts[1] = &djText;

    tuts[0]->display();
    tuts[1]->display();

    return 0;
}

/*
Rules for  virtual function
1. They cannot be static
2. They are accessed by object pointers
3. Virtual functions can be a friend of another class
4. A Virtual function in base class might not be used
5. A virtual function defined in a base class, there is no necessity of redefining it in the derived calss
*/