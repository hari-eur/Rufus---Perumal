FROM ubuntu:latest
 
# Set the working directory to /app
WORKDIR /app
 
# Copy the current directory contents into the container at /app
COPY . /app
 
# Install the gcc compiler
RUN apt-get update && \
    apt-get install -y gcc
 
# Compile the C program
RUN gcc -o myprogram myprogram.c
 
# Run the program when the container starts
CMD ["./myprogram"]
