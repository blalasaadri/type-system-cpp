FROM gitpod/workspace-full

COPY .gitpod.bashrc .
RUN cat .gitpod.bashrc >> ~/.bashrc

USER root
# Install googletest
RUN apt-get update && apt-get install -y libgtest-dev
RUN cd /usr/src/gtest && cmake CMakeLists.txt && make && cp *.a /usr/lib
