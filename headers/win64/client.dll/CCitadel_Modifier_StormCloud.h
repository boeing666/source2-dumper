#pragma once

class CCitadel_Modifier_StormCloud : public CCitadelModifier /*0x0*/  // sizeof 0x570, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0xC0]; // offset 0x0
    GameTime_t m_flNextRandomLightningStrike; // offset 0xC0, size 0x4, align 255
    GameTime_t m_flStartTime; // offset 0xC4, size 0x4, align 255
    float32 m_flRadiusIncrementPerSecond; // offset 0xC8, size 0x4, align 4
    Vector m_vCastPosition; // offset 0xCC, size 0xC, align 4
    bool m_bFiredEndingSoonSound; // offset 0xD8, size 0x1, align 1
    char _pad_00D9[0x3]; // offset 0xD9
    int32 m_nLastTickForLightningCenterCalc; // offset 0xDC, size 0x4, align 4
    Vector m_vecLightningCenter; // offset 0xE0, size 0xC, align 4
    SatVolumeIndex_t m_nSatVolumeIndex; // offset 0xEC, size 0x4, align 255
    char _pad_00F0[0x480]; // offset 0xF0
};
