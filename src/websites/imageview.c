#include <websites.h>

WebsiteInfo imageview= {
    "imageview",
    "^(?<video_id>https?://.*\\.(jpg|png|gif|jpeg|xpm|bmp))$",
    "<p><img src=\"%VIDEO_ID%\" width=\"500\" alt=\"Bild;r\"></p>",
    NULL
};

