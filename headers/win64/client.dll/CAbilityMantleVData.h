#pragma once

class CAbilityMantleVData : public CitadelAbilityVData /*0x0*/  // sizeof 0x1420, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x13E8]; // offset 0x0
    CUtlVector< MantleType_t > m_vecMantleTypes; // offset 0x13E8, size 0x18, align 8
    float32 m_flMantleSlowOnHitDuration; // offset 0x1400, size 0x4, align 4 | MPropertyStartGroup
    char _pad_1404[0x4]; // offset 0x1404
    CEmbeddedSubclass< CCitadelModifier > m_MantleSlowOnHitModifier; // offset 0x1408, size 0x10, align 8
    float32 m_flAutoMantlePushTime; // offset 0x1418, size 0x4, align 4 | MPropertyStartGroup MPropertyDescription
    float32 m_flAutoMantleBlockedMaxSpeed; // offset 0x141C, size 0x4, align 4 | MPropertyDescription
};
