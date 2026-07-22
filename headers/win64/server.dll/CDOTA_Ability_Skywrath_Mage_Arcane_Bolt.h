#pragma once

class CDOTA_Ability_Skywrath_Mage_Arcane_Bolt : public CDOTABaseAbility /*0x0*/  // sizeof 0x5A8, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x580]; // offset 0x0
    int32 bolt_vision; // offset 0x580, size 0x4, align 4
    float32 vision_duration; // offset 0x584, size 0x4, align 4
    float32 m_flDamage; // offset 0x588, size 0x4, align 4
    int32 m_nFXIndex; // offset 0x58C, size 0x4, align 4
    char _pad_0590[0x18]; // offset 0x590
};
