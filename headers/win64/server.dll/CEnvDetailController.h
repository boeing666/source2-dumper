#pragma once

class CEnvDetailController : public CBaseEntity /*0x0*/  // sizeof 0x4A8, align 0x8 [vtable] (server) {MNetworkVarNames MNetworkVarNames}
{
public:
    char _pad_0000[0x4A0]; // offset 0x0
    float32 m_flFadeStartDist; // offset 0x4A0, size 0x4, align 4 | MNetworkEnable
    float32 m_flFadeEndDist; // offset 0x4A4, size 0x4, align 4 | MNetworkEnable
};
