#pragma once

class CAbilityMeleeVData : public CitadelAbilityVData /*0x0*/  // sizeof 0x10A0, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1070]; // offset 0x0
    float32 m_flMeleeInputBufferTime; // offset 0x1070, size 0x4, align 4 | MPropertyDescription
    float32 m_flCollisionDistance; // offset 0x1074, size 0x4, align 4 | MPropertyDescription
    float32 m_flHeavyAttackRequiredHoldTime; // offset 0x1078, size 0x4, align 4 | MPropertyDescription
    float32 m_flLightAttackMaxHoldTime; // offset 0x107C, size 0x4, align 4 | MPropertyDescription
    float32 m_flSideDashDodgeDist; // offset 0x1080, size 0x4, align 4 | MPropertyDescription
    float32 m_flBackDashDodgeDist; // offset 0x1084, size 0x4, align 4 | MPropertyDescription
    TakeDamageFlags_t m_MeleeDamageFlags; // offset 0x1088, size 0x8, align 8
    CUtlString m_strEffectsAttachName; // offset 0x1090, size 0x8, align 8
    float32 m_flChargeAnimDelayTime; // offset 0x1098, size 0x4, align 4 | MPropertyStartGroup
    char _pad_109C[0x4]; // offset 0x109C
};
