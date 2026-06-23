FROM gcc:latest

WORKDIR /usr/src/gestor_calificaciones

COPY . .

RUN gcc -o gestor main.c

CMD ["./gestor"]
