#pragma once

class CPointHurt : public CPointEntity /*0x0*/  // sizeof 0x4C8, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x4A8]; // offset 0x0
    int32 m_nDamage; // offset 0x4A8, size 0x4, align 4
    DamageTypes_t m_bitsDamageType; // offset 0x4AC, size 0x4, align 4
    float32 m_flRadius; // offset 0x4B0, size 0x4, align 4
    float32 m_flDelay; // offset 0x4B4, size 0x4, align 4
    CUtlSymbolLarge m_strTarget; // offset 0x4B8, size 0x8, align 8
    CHandle< CBaseEntity > m_pActivator; // offset 0x4C0, size 0x4, align 4
    char _pad_04C4[0x4]; // offset 0x4C4
};
