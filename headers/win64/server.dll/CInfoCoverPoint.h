#pragma once

class CInfoCoverPoint : public CServerOnlyPointEntity /*0x0*/  // sizeof 0x4B0, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x4A0]; // offset 0x0
    int32 m_nGroupID; // offset 0x4A0, size 0x4, align 4
    int32 m_nVisionRadius; // offset 0x4A4, size 0x4, align 4
    bool m_bAllowOffNav; // offset 0x4A8, size 0x1, align 1
    char _pad_04A9[0x7]; // offset 0x4A9
};
