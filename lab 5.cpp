/*The code below contains a class for the creation of a YouTube channel. It contains the
following; a string name for the name of the channel, a string OwnerName for the name of the
owner of the channel, a string list PublishedVideoTitles which contains a list of all videos
published by the channel and a positive integer SubscriberCount for the number of people
subscribed to the channel. It also has a GetInfo method which displays all necessary information
about each channel and a YoutubeChannel constructor as well. However, all the data in this
class is public. As such, it is available to anyone and everything and can be tampered with
easily. Your task is to change that.
1. Make the data members of the class private.
2. Derive the following methods.
a. Subscribe, which will increase SubscriberCount by one.
b. Unsubscribe, which will decrease SubscriberCount by one, but not if it is zero.
c. A getter for name.
d. A setter for name.
e. PublishVideo, a method which will add a video to PublishedVideoTitles, the list of
published videos.
3. Create an object of the YoutubeChannel class named ytChannel with a channel name
and owner name of your choice.
4. Add a video title to your channel.
5. Unsubscribe from the channel and get the channel’s information.
6. Using a for loop, add 20 subscribers to your channel. Make sure to verify that your
channel’s subscriber count has increased by 20.*/
#include <iostream>
#include <list>
using namespace std;
class YoutubeChannel
{
private:
    string Name;
    string OwnerName;
    int SubscriberCount;
    list<string> PublishedVideoTitles;

public:
 YoutubeChannel(string name, string ownerName)
    {
        Name = name;
        OwnerName = ownerName;
        SubscriberCount = 0;
    }
    void PublishVideo()
    {
        cout<<"Video Title: ";
        string title;
        cin>>title;
        PublishedVideoTitles.push_back(title);
    }
    void subscribe()
    {
        SubscriberCount++;
    }
    void unsubscribe()
    {
        while(SubscriberCount!=0)
        {
            SubscriberCount--;
        }
    }
    void setName()
    {
        cout<<"Enter your name: ";
        cin>>OwnerName;
        cout <<"\nEnter channel name: ";
        cin>>Name;
    }
    void getName()
    {
        cout<<Name;
    }
    void GetInfo()
    {
        cout << "Name: " << Name << endl;
        cout << "Owner Name: " << OwnerName <<endl;
        cout << "Number of Subscribers: " <<SubscriberCount <<endl;
        cout << "Videos: " << endl;
        for (string videoTitle : PublishedVideoTitles)
        {
            cout << videoTitle << endl;
        }
    }
};
int main()
{
    YoutubeChannel ytChannel("Tesla", "Reginald Darko Kwaku");
    ytChannel.PublishVideo();
    for (int i = 0; i < 20; i++)
    {
        ytChannel.subscribe();
    }
    ytChannel.GetInfo();

    return 0;
}

