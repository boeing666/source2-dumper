#pragma once

class CAbilityMeleeVData : public CitadelAbilityVData /*0x0*/  // sizeof 0x1848, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1818]; // offset 0x0
    float32 m_flMeleeInputBufferTime; // offset 0x1818, size 0x4, align 4 | MPropertyDescription
    float32 m_flCollisionDistance; // offset 0x181C, size 0x4, align 4 | MPropertyDescription
    float32 m_flHeavyAttackRequiredHoldTime; // offset 0x1820, size 0x4, align 4 | MPropertyDescription
    float32 m_flLightAttackMaxHoldTime; // offset 0x1824, size 0x4, align 4 | MPropertyDescription
    float32 m_flSideDashDodgeDist; // offset 0x1828, size 0x4, align 4 | MPropertyDescription
    float32 m_flBackDashDodgeDist; // offset 0x182C, size 0x4, align 4 | MPropertyDescription
    TakeDamageFlags_t m_MeleeDamageFlags; // offset 0x1830, size 0x8, align 8
    CUtlString m_strEffectsAttachName; // offset 0x1838, size 0x8, align 8
    float32 m_flChargeAnimDelayTime; // offset 0x1840, size 0x4, align 4 | MPropertyStartGroup
    char _pad_1844[0x4]; // offset 0x1844
};
