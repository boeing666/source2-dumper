#pragma once

class CCitadel_Modifier_StormCloud : public CCitadelModifier /*0x0*/  // sizeof 0x7C8, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x158]; // offset 0x0
    float32 m_flDamageInterval; // offset 0x158, size 0x4, align 4
    bool m_bGrowing; // offset 0x15C, size 0x1, align 1
    char _pad_015D[0x3]; // offset 0x15D
    GameTime_t m_flLastDamageWaveTime; // offset 0x160, size 0x4, align 255
    int32 m_nNumPlayersKilled; // offset 0x164, size 0x4, align 4
    GameTime_t m_flNextRandomLightningStrike; // offset 0x168, size 0x4, align 255
    GameTime_t m_flStartTime; // offset 0x16C, size 0x4, align 255
    float32 m_flRadiusIncrementPerSecond; // offset 0x170, size 0x4, align 4
    VectorWS m_vCastPosition; // offset 0x174, size 0xC, align 4
    bool m_bFiredEndingSoonSound; // offset 0x180, size 0x1, align 1
    char _pad_0181[0x3]; // offset 0x181
    int32 m_nLastTickForLightningCenterCalc; // offset 0x184, size 0x4, align 4
    VectorWS m_vecLightningCenter; // offset 0x188, size 0xC, align 4
    SatVolumeIndex_t m_nSatVolumeIndex; // offset 0x194, size 0x4, align 255
    char _pad_0198[0x630]; // offset 0x198
};
