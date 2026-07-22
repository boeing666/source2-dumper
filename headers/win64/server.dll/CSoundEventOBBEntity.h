#pragma once

class CSoundEventOBBEntity : public CSoundEventEntity /*0x0*/  // sizeof 0x588, align 0x8 [vtable] (server) {MNetworkVarNames MNetworkVarNames}
{
public:
    char _pad_0000[0x560]; // offset 0x0
    Vector m_vMins; // offset 0x560, size 0xC, align 4 | MNetworkEnable
    Vector m_vMaxs; // offset 0x56C, size 0xC, align 4 | MNetworkEnable
    char _pad_0578[0x10]; // offset 0x578
};
