#pragma once

class CSoundAreaEntityBase : public CBaseEntity /*0x0*/  // sizeof 0x4C0, align 0xFF [vtable] (server) {MNetworkVarNames MNetworkVarNames MNetworkVarNames}
{
public:
    char _pad_0000[0x4A0]; // offset 0x0
    bool m_bDisabled; // offset 0x4A0, size 0x1, align 1 | MNetworkEnable
    char _pad_04A1[0x7]; // offset 0x4A1
    CUtlSymbolLarge m_iszSoundAreaType; // offset 0x4A8, size 0x8, align 8 | MNetworkEnable
    Vector m_vPos; // offset 0x4B0, size 0xC, align 4 | MNetworkEnable
    char _pad_04BC[0x4]; // offset 0x4BC
};
