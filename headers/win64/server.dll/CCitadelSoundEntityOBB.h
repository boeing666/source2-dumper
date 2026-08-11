#pragma once

class CCitadelSoundEntityOBB : public CSoundEventEntity /*0x0*/  // sizeof 0x590, align 0x8 [vtable] (server) {MNetworkVarNames MNetworkVarNames}
{
public:
    char _pad_0000[0x574]; // offset 0x0
    Vector m_vMins; // offset 0x574, size 0xC, align 4 | MNetworkEnable
    Vector m_vMaxs; // offset 0x580, size 0xC, align 4 | MNetworkEnable
    char _pad_058C[0x4]; // offset 0x58C
};
