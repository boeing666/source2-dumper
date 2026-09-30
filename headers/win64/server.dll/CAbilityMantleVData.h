#pragma once

class CAbilityMantleVData : public CitadelAbilityVData /*0x0*/  // sizeof 0x13D8, align 0x8 [vtable] (server) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x13A0]; // offset 0x0
    CUtlVector< MantleType_t > m_vecMantleTypes; // offset 0x13A0, size 0x18, align 8
    float32 m_flMantleSlowOnHitDuration; // offset 0x13B8, size 0x4, align 4 | MPropertyStartGroup
    char _pad_13BC[0x4]; // offset 0x13BC
    CEmbeddedSubclass< CCitadelModifier > m_MantleSlowOnHitModifier; // offset 0x13C0, size 0x10, align 8
    float32 m_flAutoMantlePushTime; // offset 0x13D0, size 0x4, align 4 | MPropertyStartGroup MPropertyDescription
    float32 m_flAutoMantleBlockedMaxSpeed; // offset 0x13D4, size 0x4, align 4 | MPropertyDescription
};
