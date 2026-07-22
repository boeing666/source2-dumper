#pragma once

class C_DOTA_Ability_Pudge_Rot : public C_DOTABaseAbility /*0x0*/  // sizeof 0x830, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x824]; // offset 0x0
    int32 rot_damage; // offset 0x824, size 0x4, align 4
    GameTime_t m_flLastRotTime; // offset 0x828, size 0x4, align 255
    char _pad_082C[0x4]; // offset 0x82C
};
