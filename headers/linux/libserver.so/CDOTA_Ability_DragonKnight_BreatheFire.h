#pragma once

class CDOTA_Ability_DragonKnight_BreatheFire : public CDOTABaseAbility /*0x0*/  // sizeof 0x880, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x85C]; // offset 0x0
    float32 start_radius; // offset 0x85C, size 0x4, align 4
    float32 end_radius; // offset 0x860, size 0x4, align 4
    float32 damage; // offset 0x864, size 0x4, align 4
    VectorWS m_vStartPos; // offset 0x868, size 0xC, align 4
    GameTime_t m_fStartTime; // offset 0x874, size 0x4, align 255
    float32 m_fTotalTime; // offset 0x878, size 0x4, align 4
    char _pad_087C[0x4]; // offset 0x87C
};
