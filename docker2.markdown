# docker for developers

osx -> vagrant -> docker

    # start container with open ports mapping /home/vagrant to /home/www
    docker run -d -name <image> -p 80:80 -p 443:443 -p 22:22 -v /home/vagrant:/home/www -l ?
