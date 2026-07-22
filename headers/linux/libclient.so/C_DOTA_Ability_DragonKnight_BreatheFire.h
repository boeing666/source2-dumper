#pragma once

class C_DOTA_Ability_DragonKnight_BreatheFire : public C_DOTABaseAbility /*0x0*/  // sizeof 0x848, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x824]; // offset 0x0
    float32 start_radius; // offset 0x824, size 0x4, align 4
    float32 end_radius; // offset 0x828, size 0x4, align 4
    float32 damage; // offset 0x82C, size 0x4, align 4
    VectorWS m_vStartPos; // offset 0x830, size 0xC, align 4
    GameTime_t m_fStartTime; // offset 0x83C, size 0x4, align 255
    float32 m_fTotalTime; // offset 0x840, size 0x4, align 4
    char _pad_0844[0x4]; // offset 0x844
};
