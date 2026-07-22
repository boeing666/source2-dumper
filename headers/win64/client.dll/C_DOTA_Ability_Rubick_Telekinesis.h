#pragma once

class C_DOTA_Ability_Rubick_Telekinesis : public C_DOTABaseAbility /*0x0*/  // sizeof 0x6D0, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x6A8]; // offset 0x0
    VectorWS m_vStartLocation; // offset 0x6A8, size 0xC, align 4
    VectorWS m_vLandLocation; // offset 0x6B4, size 0xC, align 4
    GameTime_t m_flStartTime; // offset 0x6C0, size 0x4, align 255
    char _pad_06C4[0x4]; // offset 0x6C4
    C_DOTA_BaseNPC* m_pTarget; // offset 0x6C8, size 0x8, align 8
};
