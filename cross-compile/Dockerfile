FROM ubuntu:latest

RUN apt-get update && apt-get install -y build-essential cmake

RUN apt-get install -y libgtest-dev && cd /usr/src/gtest && cmake . &&  cmake --build . && cp lib/*.a /usr/lib

WORKDIR /app

COPY . .

RUN chmod +x build.sh

RUN ./build.sh

# Command to run tests
CMD ["./build/tests/test_Calculator"]
