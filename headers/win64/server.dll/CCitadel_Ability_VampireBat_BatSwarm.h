#pragma once

class CCitadel_Ability_VampireBat_BatSwarm : public CCitadelBaseAbility /*0x0*/  // sizeof 0x23F0, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x14A0]; // offset 0x0
    int32 m_iBonusBats; // offset 0x14A0, size 0x4, align 4
    int32 m_iBatCountOnCast; // offset 0x14A4, size 0x4, align 4
    float32 m_flChannelTime; // offset 0x14A8, size 0x4, align 4
    bool m_bPauseChannel; // offset 0x14AC, size 0x1, align 1
    char _pad_14AD[0x3]; // offset 0x14AD
    float32 m_flLastRemainingChannelTime; // offset 0x14B0, size 0x4, align 4
    char _pad_14B4[0xC]; // offset 0x14B4
    GameTime_t m_flNextBatTime; // offset 0x14C0, size 0x4, align 255
    char _pad_14C4[0xF2C]; // offset 0x14C4
};
