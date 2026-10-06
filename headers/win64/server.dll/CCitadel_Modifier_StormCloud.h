#pragma once

class CCitadel_Modifier_StormCloud : public CCitadelModifier /*0x0*/  // sizeof 0x7C0, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x150]; // offset 0x0
    float32 m_flDamageInterval; // offset 0x150, size 0x4, align 4
    bool m_bGrowing; // offset 0x154, size 0x1, align 1
    char _pad_0155[0x3]; // offset 0x155
    GameTime_t m_flLastDamageWaveTime; // offset 0x158, size 0x4, align 255
    int32 m_nNumPlayersKilled; // offset 0x15C, size 0x4, align 4
    GameTime_t m_flNextRandomLightningStrike; // offset 0x160, size 0x4, align 255
    GameTime_t m_flStartTime; // offset 0x164, size 0x4, align 255
    float32 m_flRadiusIncrementPerSecond; // offset 0x168, size 0x4, align 4
    VectorWS m_vCastPosition; // offset 0x16C, size 0xC, align 4
    bool m_bFiredEndingSoonSound; // offset 0x178, size 0x1, align 1
    char _pad_0179[0x3]; // offset 0x179
    int32 m_nLastTickForLightningCenterCalc; // offset 0x17C, size 0x4, align 4
    VectorWS m_vecLightningCenter; // offset 0x180, size 0xC, align 4
    SatVolumeIndex_t m_nSatVolumeIndex; // offset 0x18C, size 0x4, align 255
    char _pad_0190[0x630]; // offset 0x190
};
