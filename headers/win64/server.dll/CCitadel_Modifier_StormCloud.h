#pragma once

class CCitadel_Modifier_StormCloud : public CCitadelModifier /*0x0*/  // sizeof 0x598, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0xD8]; // offset 0x0
    float32 m_flDamageInterval; // offset 0xD8, size 0x4, align 4
    bool m_bGrowing; // offset 0xDC, size 0x1, align 1
    char _pad_00DD[0x3]; // offset 0xDD
    GameTime_t m_flLastDamageWaveTime; // offset 0xE0, size 0x4, align 255
    int32 m_nNumPlayersKilled; // offset 0xE4, size 0x4, align 4
    GameTime_t m_flNextRandomLightningStrike; // offset 0xE8, size 0x4, align 255
    GameTime_t m_flStartTime; // offset 0xEC, size 0x4, align 255
    float32 m_flRadiusIncrementPerSecond; // offset 0xF0, size 0x4, align 4
    Vector m_vCastPosition; // offset 0xF4, size 0xC, align 4
    bool m_bFiredEndingSoonSound; // offset 0x100, size 0x1, align 1
    char _pad_0101[0x3]; // offset 0x101
    int32 m_nLastTickForLightningCenterCalc; // offset 0x104, size 0x4, align 4
    Vector m_vecLightningCenter; // offset 0x108, size 0xC, align 4
    SatVolumeIndex_t m_nSatVolumeIndex; // offset 0x114, size 0x4, align 255
    char _pad_0118[0x480]; // offset 0x118
};
