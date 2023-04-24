#pragma once

#define N 20 //length of username

typedef struct {
	int max, min;
	char rname[N];
}rock;

void send_data(rock);
