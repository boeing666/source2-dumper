#pragma once

class C_DOTA_Ability_Rubick_Telekinesis : public C_DOTABaseAbility /*0x0*/  // sizeof 0x850, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x828]; // offset 0x0
    VectorWS m_vStartLocation; // offset 0x828, size 0xC, align 4
    VectorWS m_vLandLocation; // offset 0x834, size 0xC, align 4
    GameTime_t m_flStartTime; // offset 0x840, size 0x4, align 255
    char _pad_0844[0x4]; // offset 0x844
    C_DOTA_BaseNPC* m_pTarget; // offset 0x848, size 0x8, align 8
};
