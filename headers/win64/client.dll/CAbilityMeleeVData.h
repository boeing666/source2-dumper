#pragma once

class CAbilityMeleeVData : public CitadelAbilityVData /*0x0*/  // sizeof 0x1418, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x13E8]; // offset 0x0
    float32 m_flMeleeInputBufferTime; // offset 0x13E8, size 0x4, align 4 | MPropertyDescription
    float32 m_flCollisionDistance; // offset 0x13EC, size 0x4, align 4 | MPropertyDescription
    float32 m_flHeavyAttackRequiredHoldTime; // offset 0x13F0, size 0x4, align 4 | MPropertyDescription
    float32 m_flLightAttackMaxHoldTime; // offset 0x13F4, size 0x4, align 4 | MPropertyDescription
    float32 m_flSideDashDodgeDist; // offset 0x13F8, size 0x4, align 4 | MPropertyDescription
    float32 m_flBackDashDodgeDist; // offset 0x13FC, size 0x4, align 4 | MPropertyDescription
    TakeDamageFlags_t m_MeleeDamageFlags; // offset 0x1400, size 0x8, align 8
    CUtlString m_strEffectsAttachName; // offset 0x1408, size 0x8, align 8
    float32 m_flChargeAnimDelayTime; // offset 0x1410, size 0x4, align 4 | MPropertyStartGroup
    char _pad_1414[0x4]; // offset 0x1414
};
