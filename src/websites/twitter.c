#include <websites.h>

WebsiteInfo twitter = {
    "twitter",
    "(?P<domain>https://.*twitter\\.com/)(?P<user>.+)/(?P<status>(status|statuses))/(?P<id>.+)",
    "https://api.twitter.com/1.1/statuses/oembed.json?url=https://twitter.com/%USER%/status/%STATUS%",
    NULL
};

