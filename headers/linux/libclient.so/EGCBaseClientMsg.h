#pragma once

enum EGCBaseClientMsg : uint32_t  // sizeof 0x4
{
    k_EMsgGCClientWelcome = 4004,
    k_EMsgGCServerWelcome = 4005,
    k_EMsgGCClientHello = 4006,
    k_EMsgGCServerHello = 4007,
    k_EMsgGCClientConnectionStatus = 4009,
    k_EMsgGCServerConnectionStatus = 4010,
    k_EMsgGCClientHelloPartner = 4011,
    k_EMsgGCClientHelloPW = 4012,
    k_EMsgGCClientHelloR2 = 4013,
    k_EMsgGCClientHelloR3 = 4014,
    k_EMsgGCClientHelloR4 = 4015,
};
