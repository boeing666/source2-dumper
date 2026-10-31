#pragma once

class CAbilityMantleVData : public CitadelAbilityVData /*0x0*/  // sizeof 0x10B8, align 0x8 [vtable] (server) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1080]; // offset 0x0
    CUtlVector< MantleType_t > m_vecMantleTypes; // offset 0x1080, size 0x18, align 8
    float32 m_flMantleSlowOnHitDuration; // offset 0x1098, size 0x4, align 4 | MPropertyStartGroup
    char _pad_109C[0x4]; // offset 0x109C
    CEmbeddedSubclass< CCitadelModifier > m_MantleSlowOnHitModifier; // offset 0x10A0, size 0x10, align 8
    float32 m_flAutoMantlePushTime; // offset 0x10B0, size 0x4, align 4 | MPropertyStartGroup MPropertyDescription
    float32 m_flAutoMantleBlockedMaxSpeed; // offset 0x10B4, size 0x4, align 4 | MPropertyDescription
};
