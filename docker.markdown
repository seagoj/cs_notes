# Docker

## Docker Commands

### Search for Images

    docker search [ImageName]

### Pull Image Down

    docker pull [ImageName]

### Running Commands in Image

    docker run [RepoName]/[ImageName] [Command]

### Installing Applications in Docker Image

    docker run [RepoName]/[ImageName] apt-get install -y [application]

### Saving Image

    docker ps -l    # lists ids for running containers
    docker commit [RepoName]/[ImageName] [ContainerID]

### Getting information about each container

    docker inspect [ContainerId]

### Pushing Images to Index

    docker images # shows images currently on the host
    docker push [RepoName]/[ImageName]

## Dockerfiles

### Structure

    # INSTRUCTION arguments

    # All Docker files must begin with a base image
    FROM ubuntu
    # Run runs a command in the docker container
    RUN apt-get install -y memcached

### Building

    docker build .
