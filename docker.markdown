<<<<<<< HEAD
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
=======
Docker Presentation @ Riot Games - 1/8/14
---

#### LaunchCode
* [ ] Look into LaunchCode

#### Container (LXC)
* each application is sandboxed on the server
* layered filesystem
* Copy on write [new layer for each change]
* should be single purpose
* share an OS and can share a file system

#### Docker
* A very 'application focused' API for LXC
* commands inspired by git
* config stored /var/lib/docker/containers/{imagename}/config.lxc
* Cannot apply diffs; must be whole image + your changes
* dockerfile is a configuration script
* [ ] Research Immutable Server
* [ ] Research Jenkins
>>>>>>> f8d409135d51b0a2d207b67770ad90bb8dfbf2f1
