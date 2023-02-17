FROM debian:buster-slim as builder1
RUN apt-get update && \
    apt-get install -y gcc make libc6-dbg cmake build-essential libtool autoconf unzip wget
WORKDIR /root
COPY CMakeLists.txt mayhemit.c ./ 
RUN mkdir build/ && cmake build -B build/ -S . && (cd build/ && make all) 

FROM debian:10-slim
RUN apt-get update && apt-get install -y  --no-install-recommends libc6-dbg && \
    rm -rf /var/lib/apt/lists/*
# Don't set workdir! corpus is relative to /
COPY testsuite /testsuite
COPY --from=builder1 /root/build/mayhemit /mayhemit
