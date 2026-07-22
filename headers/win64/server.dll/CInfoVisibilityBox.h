#pragma once

class CInfoVisibilityBox : public CBaseEntity /*0x0*/  // sizeof 0x4B8, align 0x8 [vtable] (server) {MNetworkVarNames MNetworkVarNames MNetworkVarNames}
{
public:
    char _pad_0000[0x4A4]; // offset 0x0
    int32 m_nMode; // offset 0x4A4, size 0x4, align 4 | MNetworkEnable
    Vector m_vBoxSize; // offset 0x4A8, size 0xC, align 4 | MNetworkEnable
    bool m_bEnabled; // offset 0x4B4, size 0x1, align 1 | MNetworkEnable
    char _pad_04B5[0x3]; // offset 0x4B5
};
