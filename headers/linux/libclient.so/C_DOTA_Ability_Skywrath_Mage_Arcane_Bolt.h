#pragma once

class C_DOTA_Ability_Skywrath_Mage_Arcane_Bolt : public C_DOTABaseAbility /*0x0*/  // sizeof 0x838, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x824]; // offset 0x0
    int32 bolt_vision; // offset 0x824, size 0x4, align 4
    float32 vision_duration; // offset 0x828, size 0x4, align 4
    float32 m_flDamage; // offset 0x82C, size 0x4, align 4
    int32 m_nFXIndex; // offset 0x830, size 0x4, align 4
    char _pad_0834[0x4]; // offset 0x834
};
