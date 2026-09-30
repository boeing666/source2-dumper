#pragma once

class CAbilityMeleeVData : public CitadelAbilityVData /*0x0*/  // sizeof 0x13D0, align 0x8 [vtable] (server) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x13A0]; // offset 0x0
    float32 m_flMeleeInputBufferTime; // offset 0x13A0, size 0x4, align 4 | MPropertyDescription
    float32 m_flCollisionDistance; // offset 0x13A4, size 0x4, align 4 | MPropertyDescription
    float32 m_flHeavyAttackRequiredHoldTime; // offset 0x13A8, size 0x4, align 4 | MPropertyDescription
    float32 m_flLightAttackMaxHoldTime; // offset 0x13AC, size 0x4, align 4 | MPropertyDescription
    float32 m_flSideDashDodgeDist; // offset 0x13B0, size 0x4, align 4 | MPropertyDescription
    float32 m_flBackDashDodgeDist; // offset 0x13B4, size 0x4, align 4 | MPropertyDescription
    TakeDamageFlags_t m_MeleeDamageFlags; // offset 0x13B8, size 0x8, align 8
    CUtlString m_strEffectsAttachName; // offset 0x13C0, size 0x8, align 8
    float32 m_flChargeAnimDelayTime; // offset 0x13C8, size 0x4, align 4 | MPropertyStartGroup
    char _pad_13CC[0x4]; // offset 0x13CC
};
