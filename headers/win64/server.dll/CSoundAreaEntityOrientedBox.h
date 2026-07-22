#pragma once

class CSoundAreaEntityOrientedBox : public CSoundAreaEntityBase /*0x0*/  // sizeof 0x4D8, align 0x8 [vtable] (server) {MNetworkVarNames MNetworkVarNames}
{
public:
    char _pad_0000[0x4C0]; // offset 0x0
    Vector m_vMin; // offset 0x4C0, size 0xC, align 4 | MNetworkEnable
    Vector m_vMax; // offset 0x4CC, size 0xC, align 4 | MNetworkEnable
};
