#include<iostream>
using namespace std;
class Song {
    private:
        string title;
        string album;
        string singer;
    public:
        Song() {
            title = "unknown title";
            album = "unknown album";
            singer = "unknown singer";
        }
        void setTitle(string title) {
            this->title = title;
        }
        string getTitle() {
            return title;
        }
        void setAlbum(string album) {
            this->album = album;
        }
        string getAlbum() {
            return album;
        }
        void setSinger(string singer) {
            this->singer = singer;
        }
        string getSinger() {
            return singer;
        }
        void showData() {
            cout<<"\n";
            cout<<getTitle()<<"\t";
            cout<<album<<"\t";
            cout<<singer<<"\n";
        }
};
int main() {
    // datatype varname[size];
    Song songs[3];
    string _title;
    string _album;
    string _singer;
    for(int i = 0; i < 3; i++) {
        cout<<"\nEnter data for song "<<(i + 1)<<"\n";
        cout<<"Title: ";
        getline(cin, _title);
        cout<<"Album: ";
        getline(cin, _album);
        cout<<"Singer: ";
        getline(cin, _singer);

        songs[i].setTitle(_title);
        songs[i].setAlbum(_album);
        songs[i].setSinger(_singer);
    }
    // output
    cout<<"\n----- Song List -----\n";
    cout<<"Song Title\t Album\t Singer\n";
    cout<<"------------------------------";
    for(int i = 0; i < 3; i++) {
        songs[i].showData();
    }
    return 0;
}