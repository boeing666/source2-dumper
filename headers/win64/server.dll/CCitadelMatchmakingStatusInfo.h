#pragma once

class CCitadelMatchmakingStatusInfo : public CPointEntity /*0x0*/  // sizeof 0x4F8, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x4A0]; // offset 0x0
    CEntityIOOutput m_OnStartMatchmaking; // offset 0x4A0, size 0x18, align 255
    CEntityIOOutput m_OnStopMatchmaking; // offset 0x4B8, size 0x18, align 255
    char _pad_04D0[0x28]; // offset 0x4D0
};
