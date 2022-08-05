FROM docker.io/alpine:3.15.5

RUN apk update && \
    apk add build-base