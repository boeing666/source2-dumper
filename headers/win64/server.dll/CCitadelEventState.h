#pragma once

class CCitadelEventState : public CBaseEntity /*0x0*/  // sizeof 0x4E0, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x4B0]; // offset 0x0
    CNetworkUtlVectorBase< EEvent > m_vecActiveEvents; // offset 0x4B0, size 0x18, align 8
    char _pad_04C8[0x18]; // offset 0x4C8
};
