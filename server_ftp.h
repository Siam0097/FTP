#include <commons.h>
#include <file_transfer_functions.h>

#include <time.h>
/*
	for:
		ctime()
*/

#include <sys/stat.h>
/*
	for:
		stat()
*/

#define	ID	"SERVER=> "

struct client_info
{
	int sfd;
	int cid;
};

struct client_info* client_info_alloc(int, int);

void command_pwd(struct packet*, struct packet*, int, char*);
void command_cd(struct packet*, struct packet*, int, char*);

