#pragma once

class CEnvBeam : public CBeam /*0x0*/  // sizeof 0x988, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x8F0]; // offset 0x0
    int32 m_active; // offset 0x8F0, size 0x4, align 4
    char _pad_08F4[0x4]; // offset 0x8F4
    CStrongHandle< InfoForResourceTypeIMaterial2 > m_spriteTexture; // offset 0x8F8, size 0x8, align 8
    CUtlSymbolLarge m_iszStartEntity; // offset 0x900, size 0x8, align 8
    CUtlSymbolLarge m_iszEndEntity; // offset 0x908, size 0x8, align 8
    float32 m_life; // offset 0x910, size 0x4, align 4
    float32 m_boltWidth; // offset 0x914, size 0x4, align 4
    float32 m_noiseAmplitude; // offset 0x918, size 0x4, align 4
    int32 m_speed; // offset 0x91C, size 0x4, align 4
    float32 m_restrike; // offset 0x920, size 0x4, align 4
    char _pad_0924[0x4]; // offset 0x924
    CUtlSymbolLarge m_iszSpriteName; // offset 0x928, size 0x8, align 8
    int32 m_frameStart; // offset 0x930, size 0x4, align 4
    VectorWS m_vEndPointWorld; // offset 0x934, size 0xC, align 4
    Vector m_vEndPointRelative; // offset 0x940, size 0xC, align 4 | MNotSaved
    float32 m_radius; // offset 0x94C, size 0x4, align 4
    Touch_t m_TouchType; // offset 0x950, size 0x4, align 4
    char _pad_0954[0x4]; // offset 0x954
    CUtlSymbolLarge m_iFilterName; // offset 0x958, size 0x8, align 8
    CHandle< CBaseEntity > m_hFilter; // offset 0x960, size 0x4, align 4
    char _pad_0964[0x4]; // offset 0x964
    CUtlSymbolLarge m_iszDecal; // offset 0x968, size 0x8, align 8
    CEntityIOOutput m_OnTouchedByEntity; // offset 0x970, size 0x18, align 255
};
