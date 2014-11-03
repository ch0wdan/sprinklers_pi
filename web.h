// web.h
// This file manages the web server for the Sprinkler System
// Author: Jordan de Geus
// Copyright (c) 2015 This is a forked version of Richard Zimmerman's OpenSprinkler done by Jordan de Geus
//

#ifndef _WEB_h
#define _WEB_h

class EthernetServer;

#define NUM_KEY_VALUES 50
#define KEY_SIZE 10
#define VALUE_SIZE 20

struct KVPairs
{
	int num_pairs;
	char keys[NUM_KEY_VALUES][KEY_SIZE];
	char values[NUM_KEY_VALUES][VALUE_SIZE];
};

class web
{
public:
	web(void);
	~web(void);
	bool Init();
	void ProcessWebClients();
private:
	EthernetServer * m_server;
};

#endif
