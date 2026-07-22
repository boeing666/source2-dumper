#pragma once

class CSoundAreaEntityBase : public CBaseEntity /*0x0*/  // sizeof 0x7A8, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x788]; // offset 0x0
    bool m_bDisabled; // offset 0x788, size 0x1, align 1
    char _pad_0789[0x7]; // offset 0x789
    CUtlSymbolLarge m_iszSoundAreaType; // offset 0x790, size 0x8, align 8
    Vector m_vPos; // offset 0x798, size 0xC, align 4
    char _pad_07A4[0x4]; // offset 0x7A4
};
