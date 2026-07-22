#pragma once

class CPointHurt : public CPointEntity /*0x0*/  // sizeof 0x7A8, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x788]; // offset 0x0
    int32 m_nDamage; // offset 0x788, size 0x4, align 4
    DamageTypes_t m_bitsDamageType; // offset 0x78C, size 0x4, align 4
    float32 m_flRadius; // offset 0x790, size 0x4, align 4
    float32 m_flDelay; // offset 0x794, size 0x4, align 4
    CUtlSymbolLarge m_strTarget; // offset 0x798, size 0x8, align 8
    CHandle< CBaseEntity > m_pActivator; // offset 0x7A0, size 0x4, align 4
    char _pad_07A4[0x4]; // offset 0x7A4
};
