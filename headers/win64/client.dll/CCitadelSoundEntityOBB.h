#pragma once

class CCitadelSoundEntityOBB : public C_SoundEventEntity /*0x0*/  // sizeof 0x6E0, align 0x8 [vtable] (client) {MNetworkVarNames MNetworkVarNames}
{
public:
    char _pad_0000[0x6C4]; // offset 0x0
    Vector m_vMins; // offset 0x6C4, size 0xC, align 4 | MNetworkEnable
    Vector m_vMaxs; // offset 0x6D0, size 0xC, align 4 | MNetworkEnable
    char _pad_06DC[0x4]; // offset 0x6DC
};
