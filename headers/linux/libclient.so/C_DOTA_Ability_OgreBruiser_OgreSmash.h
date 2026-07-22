#pragma once

class C_DOTA_Ability_OgreBruiser_OgreSmash : public C_DOTABaseAbility /*0x0*/  // sizeof 0x838, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x824]; // offset 0x0
    float32 radius; // offset 0x824, size 0x4, align 4
    float32 hero_stun_duration; // offset 0x828, size 0x4, align 4
    float32 damage; // offset 0x82C, size 0x4, align 4
    float32 damage_pct; // offset 0x830, size 0x4, align 4
    GameTime_t flCooldown; // offset 0x834, size 0x4, align 255
};
