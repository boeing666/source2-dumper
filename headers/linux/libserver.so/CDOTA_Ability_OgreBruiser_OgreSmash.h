#pragma once

class CDOTA_Ability_OgreBruiser_OgreSmash : public CDOTABaseAbility /*0x0*/  // sizeof 0x870, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x85C]; // offset 0x0
    float32 radius; // offset 0x85C, size 0x4, align 4
    float32 hero_stun_duration; // offset 0x860, size 0x4, align 4
    float32 damage; // offset 0x864, size 0x4, align 4
    float32 damage_pct; // offset 0x868, size 0x4, align 4
    GameTime_t flCooldown; // offset 0x86C, size 0x4, align 255
};
