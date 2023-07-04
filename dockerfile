FROM gcc

COPY . /app
WORKDIR /app
RUN make build
CMD ["./testMAKE"]