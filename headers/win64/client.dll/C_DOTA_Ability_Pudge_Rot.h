#pragma once

class C_DOTA_Ability_Pudge_Rot : public C_DOTABaseAbility /*0x0*/  // sizeof 0x6B0, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x6A8]; // offset 0x0
    int32 rot_damage; // offset 0x6A8, size 0x4, align 4
    GameTime_t m_flLastRotTime; // offset 0x6AC, size 0x4, align 255
};
