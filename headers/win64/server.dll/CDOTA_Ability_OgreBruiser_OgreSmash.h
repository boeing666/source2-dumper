#pragma once

class CDOTA_Ability_OgreBruiser_OgreSmash : public CDOTABaseAbility /*0x0*/  // sizeof 0x598, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x580]; // offset 0x0
    float32 radius; // offset 0x580, size 0x4, align 4
    float32 hero_stun_duration; // offset 0x584, size 0x4, align 4
    float32 damage; // offset 0x588, size 0x4, align 4
    float32 damage_pct; // offset 0x58C, size 0x4, align 4
    GameTime_t flCooldown; // offset 0x590, size 0x4, align 255
    char _pad_0594[0x4]; // offset 0x594
};
