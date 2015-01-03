# Use phusion/baseimage as base image. To make your builds
# reproducible, make sure you lock down to a specific version, not
# to `latest`! See
# https://github.com/phusion/baseimage-docker/blob/master/Changelog.md
# for a list of version numbers.
FROM phusion/baseimage:latest

# Set correct environment variables.
ENV HOME /root

RUN apt-get update && apt-get install pidgin-dev libpurple-dev git libwebkit-dev libcurl3-dev checkinstall -y
RUN cd opt #&& git clone https://github.com/akovalyov/pidgin-embedded
ADD . /opt
