#pragma once
#include <unordered_map>
#include <vector>

class Twitter
{
  public:
    void postTweet(unsigned int user_id, unsigned int tweet_id);
    void follow(unsigned int followee, unsigned int follower);
    void unfollow(unsigned int followee, unsigned int follower);
    std::vector<unsigned int> getNewsFeed(unsigned int followee);
  private:
};
