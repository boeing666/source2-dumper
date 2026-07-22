#pragma once

class CDOTA_Ability_Skywrath_Mage_Arcane_Bolt : public CDOTABaseAbility /*0x0*/  // sizeof 0x880, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x85C]; // offset 0x0
    int32 bolt_vision; // offset 0x85C, size 0x4, align 4
    float32 vision_duration; // offset 0x860, size 0x4, align 4
    float32 m_flDamage; // offset 0x864, size 0x4, align 4
    int32 m_nFXIndex; // offset 0x868, size 0x4, align 4
    char _pad_086C[0x14]; // offset 0x86C
};
