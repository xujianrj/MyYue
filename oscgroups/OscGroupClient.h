/*
OSCgroups -- open sound control groupcasting infrastructure
Copyright (C) 2005  Ross Bencina

This program is free software; you can redistribute it and/or
modify it under the terms of the GNU General Public License
as published by the Free Software Foundation; either version 2
of the License, or (at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program; if not, write to the Free Software
Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA  02111-1307, USA.
*/

#ifndef INCLUDED_OSCGROUPCLIENT_H
#define INCLUDED_OSCGROUPCLIENT_H

//Basic data struct on the oscgroupclient
#define MAX_GROUPNAME_LEN   256
#define MAX_GROUPPWD_LEN    256
#define MAX_USERNAME_LEN    256
#define MAX_USERPWD_LEN     256
#define MAX_IP_LEN          256
#define MAX_PORT_LEN        16
#define MAX_USER_ON_CLIENT  1024
#define MAX_GROUP_ON_CLIENT 128

typedef struct _GroupClient
{
    char group_name_[MAX_GROUPNAME_LEN + 1];
    char group_password_[MAX_GROUPPWD_LEN + 1];
}GroupClient;

typedef struct _UserClient
{
    char user_name_[MAX_USERNAME_LEN + 1];
    char group_name_[MAX_GROUPNAME_LEN + 1];
    char private_ip[MAX_IP_LEN + 1];
    char private_port[MAX_PORT_LEN + 1];
    char public_ip[MAX_IP_LEN + 1];
    char public_port[MAX_PORT_LEN + 1];
} UserClient;

//Define event handler.
typedef void (*GroupChangeHandler)(GroupClient*, int);
typedef void (*UserChangeHandler)(UserClient*, int);

//Interface API
void SetGroupChangeHandler(GroupChangeHandler callback);
void SetUserChangeHanlder(UserChangeHandler callback);
void SetInterestingGroups(GroupClient* interestingGroups, int count);

int oscgroupclient_main( int argc, char* argv[] );

#endif /* INCLUDED_OSCGROUPCLIENT_H */
