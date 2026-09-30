#pragma once

class CCitadel_Ability_VampireBat_BatSwarm : public C_CitadelBaseAbility /*0x0*/  // sizeof 0x2628, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x16D8]; // offset 0x0
    int32 m_iBonusBats; // offset 0x16D8, size 0x4, align 4
    int32 m_iBatCountOnCast; // offset 0x16DC, size 0x4, align 4
    float32 m_flChannelTime; // offset 0x16E0, size 0x4, align 4
    bool m_bPauseChannel; // offset 0x16E4, size 0x1, align 1
    char _pad_16E5[0x3]; // offset 0x16E5
    float32 m_flLastRemainingChannelTime; // offset 0x16E8, size 0x4, align 4
    char _pad_16EC[0xC]; // offset 0x16EC
    GameTime_t m_flNextBatTime; // offset 0x16F8, size 0x4, align 255
    char _pad_16FC[0xF2C]; // offset 0x16FC
};
