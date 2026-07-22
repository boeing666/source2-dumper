#pragma once

class CSoundAreaEntityBase : public CBaseEntity /*0x0*/  // sizeof 0x4C8, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x4A8]; // offset 0x0
    bool m_bDisabled; // offset 0x4A8, size 0x1, align 1
    char _pad_04A9[0x7]; // offset 0x4A9
    CUtlSymbolLarge m_iszSoundAreaType; // offset 0x4B0, size 0x8, align 8
    Vector m_vPos; // offset 0x4B8, size 0xC, align 4
    char _pad_04C4[0x4]; // offset 0x4C4
};
