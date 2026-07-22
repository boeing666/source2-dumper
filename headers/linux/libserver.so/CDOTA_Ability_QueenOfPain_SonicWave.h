#pragma once

class CDOTA_Ability_QueenOfPain_SonicWave : public CDOTABaseAbility /*0x0*/  // sizeof 0x888, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x85C]; // offset 0x0
    GameTime_t m_fStartTime; // offset 0x85C, size 0x4, align 255
    float32 m_fTotalTime; // offset 0x860, size 0x4, align 4
    ParticleIndex_t m_nFXIndex; // offset 0x864, size 0x4, align 255
    float32 starting_aoe; // offset 0x868, size 0x4, align 4
    float32 final_aoe; // offset 0x86C, size 0x4, align 4
    char _pad_0870[0x18]; // offset 0x870
};
