o Docker Presentation @ Riot Games - 1/8/14

Legend
---
* Note
* o Event
* [ ] Task

### LaunchCode
* [ ] Look into LaunchCode

### Container (LXC)
* each application is sandboxed on the server
* layered filesystem
* Copy on write [new layer for each change]
* should be single purpose
* share an OS and can share a file system

### Docker
* A very 'application focused' API for LXC
* commands inspired by git
* config stored /var/lib/docker/containers/{imagename}/config.lxc
* Cannot apply diffs; must be whole image + your changes
* dockerfile is a configuration script
* [ ] Research Immutable Server
* [ ] Research Jenkins
