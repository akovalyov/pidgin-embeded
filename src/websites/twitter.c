#include <websites.h>

WebsiteInfo twitter = {
    "twitter",
    "/^https?:\/\/twitter\.com\/(?:#!\/)?(\w+)\/status(es)?\/(\d+)$/",
    "https://api.twitter.com/1.1/statuses/oembed.json?url=https://twitter.com/$2/status/$4",
    NULL
};

