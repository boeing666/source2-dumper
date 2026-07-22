#pragma once

class CAbilityMantleVData : public CitadelAbilityVData /*0x0*/  // sizeof 0x1848, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1818]; // offset 0x0
    CUtlVector< MantleType_t > m_vecMantleTypes; // offset 0x1818, size 0x18, align 8
    float32 m_flMantleSlowOnHitDuration; // offset 0x1830, size 0x4, align 4 | MPropertyStartGroup
    char _pad_1834[0x4]; // offset 0x1834
    CEmbeddedSubclass< CCitadelModifier > m_MantleSlowOnHitModifier; // offset 0x1838, size 0x10, align 8
};
