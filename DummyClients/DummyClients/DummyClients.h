#pragma once


#define ALIAS_ID "Input Your ALIAS_ID"

#define MAX_GAME_SESSIONS	1

#define GAMELIFT_REGION	Aws::Region::AP_NORTHEAST_1

/// How many times to send a request
#define PLAYER_ACTION_REQUEST		500

/// request sending interval (ms)
#define	PLAYER_ACTION_INTERVAL	100

/// Test Player Session Count == mMaxPlayerCount - TEST_PLAYER_SESSION_EXCEPT
#define TEST_PLAYER_SESSION_EXCEPT	1