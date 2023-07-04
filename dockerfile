FROM gcc
COPY . /app
WORKDIR /app
CMD ["./", "main.c"]