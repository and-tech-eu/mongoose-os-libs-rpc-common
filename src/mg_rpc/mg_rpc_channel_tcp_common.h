#ifndef CS_COMMON_MG_RPC_MG_RPC_CHANNEL_TCP_COMMON_H_
#define CS_COMMON_MG_RPC_MG_RPC_CHANNEL_TCP_COMMON_H_

#include "mg_rpc_channel.h"

#include "common/mg_str.h"
#include "mongoose/mongoose.h"

char *mg_rpc_channel_tcp_get_info(struct mg_connection *c);

#endif /* CS_COMMON_MG_RPC_MG_RPC_CHANNEL_TCP_COMMON_H_ */
