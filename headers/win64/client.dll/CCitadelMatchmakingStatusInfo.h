#pragma once

class CCitadelMatchmakingStatusInfo : public C_PointEntity /*0x0*/  // sizeof 0x648, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x5F0]; // offset 0x0
    CEntityIOOutput m_OnStartMatchmaking; // offset 0x5F0, size 0x18, align 255
    CEntityIOOutput m_OnStopMatchmaking; // offset 0x608, size 0x18, align 255
    char _pad_0620[0x28]; // offset 0x620
};
