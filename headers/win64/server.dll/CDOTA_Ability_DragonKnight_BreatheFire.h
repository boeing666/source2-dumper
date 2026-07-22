#pragma once

class CDOTA_Ability_DragonKnight_BreatheFire : public CDOTABaseAbility /*0x0*/  // sizeof 0x5A0, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x580]; // offset 0x0
    float32 start_radius; // offset 0x580, size 0x4, align 4
    float32 end_radius; // offset 0x584, size 0x4, align 4
    float32 damage; // offset 0x588, size 0x4, align 4
    VectorWS m_vStartPos; // offset 0x58C, size 0xC, align 4
    GameTime_t m_fStartTime; // offset 0x598, size 0x4, align 255
    float32 m_fTotalTime; // offset 0x59C, size 0x4, align 4
};
