#pragma once

class CCitadelTeleportLocation : public CServerOnlyEntity /*0x0*/  // sizeof 0x4B8, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x4B0]; // offset 0x0
    int32 m_iLane; // offset 0x4B0, size 0x4, align 4
    int32 m_iObjective; // offset 0x4B4, size 0x4, align 4
};
