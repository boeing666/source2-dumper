#pragma once

class C_DOTA_Ability_Skywrath_Mage_Arcane_Bolt : public C_DOTABaseAbility /*0x0*/  // sizeof 0x6B8, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x6A8]; // offset 0x0
    int32 bolt_vision; // offset 0x6A8, size 0x4, align 4
    float32 vision_duration; // offset 0x6AC, size 0x4, align 4
    float32 m_flDamage; // offset 0x6B0, size 0x4, align 4
    int32 m_nFXIndex; // offset 0x6B4, size 0x4, align 4
};
