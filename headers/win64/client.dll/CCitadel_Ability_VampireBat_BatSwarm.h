#pragma once

class CCitadel_Ability_VampireBat_BatSwarm : public C_CitadelBaseAbility /*0x0*/  // sizeof 0x2630, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x16E0]; // offset 0x0
    int32 m_iBonusBats; // offset 0x16E0, size 0x4, align 4
    int32 m_iBatCountOnCast; // offset 0x16E4, size 0x4, align 4
    float32 m_flChannelTime; // offset 0x16E8, size 0x4, align 4
    bool m_bPauseChannel; // offset 0x16EC, size 0x1, align 1
    char _pad_16ED[0x3]; // offset 0x16ED
    float32 m_flLastRemainingChannelTime; // offset 0x16F0, size 0x4, align 4
    char _pad_16F4[0xC]; // offset 0x16F4
    GameTime_t m_flNextBatTime; // offset 0x1700, size 0x4, align 255
    char _pad_1704[0xF2C]; // offset 0x1704
};
