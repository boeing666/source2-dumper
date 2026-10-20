#pragma once

class CCitadel_Modifier_StormCloud : public CCitadelModifier /*0x0*/  // sizeof 0x7A0, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x140]; // offset 0x0
    GameTime_t m_flNextRandomLightningStrike; // offset 0x140, size 0x4, align 255
    GameTime_t m_flStartTime; // offset 0x144, size 0x4, align 255
    float32 m_flRadiusIncrementPerSecond; // offset 0x148, size 0x4, align 4
    VectorWS m_vCastPosition; // offset 0x14C, size 0xC, align 4
    bool m_bFiredEndingSoonSound; // offset 0x158, size 0x1, align 1
    char _pad_0159[0x3]; // offset 0x159
    int32 m_nLastTickForLightningCenterCalc; // offset 0x15C, size 0x4, align 4
    VectorWS m_vecLightningCenter; // offset 0x160, size 0xC, align 4
    SatVolumeIndex_t m_nSatVolumeIndex; // offset 0x16C, size 0x4, align 255
    char _pad_0170[0x630]; // offset 0x170
};
