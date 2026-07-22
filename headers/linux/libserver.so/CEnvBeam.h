#pragma once

class CEnvBeam : public CBeam /*0x0*/  // sizeof 0xB80, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0xAEC]; // offset 0x0
    int32 m_active; // offset 0xAEC, size 0x4, align 4
    CStrongHandle< InfoForResourceTypeIMaterial2 > m_spriteTexture; // offset 0xAF0, size 0x8, align 8
    CUtlSymbolLarge m_iszStartEntity; // offset 0xAF8, size 0x8, align 8
    CUtlSymbolLarge m_iszEndEntity; // offset 0xB00, size 0x8, align 8
    float32 m_life; // offset 0xB08, size 0x4, align 4
    float32 m_boltWidth; // offset 0xB0C, size 0x4, align 4
    float32 m_noiseAmplitude; // offset 0xB10, size 0x4, align 4
    int32 m_speed; // offset 0xB14, size 0x4, align 4
    float32 m_restrike; // offset 0xB18, size 0x4, align 4
    char _pad_0B1C[0x4]; // offset 0xB1C
    CUtlSymbolLarge m_iszSpriteName; // offset 0xB20, size 0x8, align 8
    int32 m_frameStart; // offset 0xB28, size 0x4, align 4
    VectorWS m_vEndPointWorld; // offset 0xB2C, size 0xC, align 4
    Vector m_vEndPointRelative; // offset 0xB38, size 0xC, align 4 | MNotSaved
    float32 m_radius; // offset 0xB44, size 0x4, align 4
    Touch_t m_TouchType; // offset 0xB48, size 0x4, align 4
    char _pad_0B4C[0x4]; // offset 0xB4C
    CUtlSymbolLarge m_iFilterName; // offset 0xB50, size 0x8, align 8
    CHandle< CBaseEntity > m_hFilter; // offset 0xB58, size 0x4, align 4
    char _pad_0B5C[0x4]; // offset 0xB5C
    CUtlSymbolLarge m_iszDecal; // offset 0xB60, size 0x8, align 8
    CEntityIOOutput m_OnTouchedByEntity; // offset 0xB68, size 0x18, align 255
};
