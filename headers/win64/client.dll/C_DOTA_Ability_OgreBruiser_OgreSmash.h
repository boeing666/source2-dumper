#pragma once

class C_DOTA_Ability_OgreBruiser_OgreSmash : public C_DOTABaseAbility /*0x0*/  // sizeof 0x6C0, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x6A8]; // offset 0x0
    float32 radius; // offset 0x6A8, size 0x4, align 4
    float32 hero_stun_duration; // offset 0x6AC, size 0x4, align 4
    float32 damage; // offset 0x6B0, size 0x4, align 4
    float32 damage_pct; // offset 0x6B4, size 0x4, align 4
    GameTime_t flCooldown; // offset 0x6B8, size 0x4, align 255
    char _pad_06BC[0x4]; // offset 0x6BC
};
