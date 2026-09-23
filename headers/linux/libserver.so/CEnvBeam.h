#pragma once

class CEnvBeam : public CBeam /*0x0*/  // sizeof 0xC58, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0xBC4]; // offset 0x0
    int32 m_active; // offset 0xBC4, size 0x4, align 4
    CStrongHandle< InfoForResourceTypeIMaterial2 > m_spriteTexture; // offset 0xBC8, size 0x8, align 8
    CUtlSymbolLarge m_iszStartEntity; // offset 0xBD0, size 0x8, align 8
    CUtlSymbolLarge m_iszEndEntity; // offset 0xBD8, size 0x8, align 8
    float32 m_life; // offset 0xBE0, size 0x4, align 4
    float32 m_boltWidth; // offset 0xBE4, size 0x4, align 4
    float32 m_noiseAmplitude; // offset 0xBE8, size 0x4, align 4
    int32 m_speed; // offset 0xBEC, size 0x4, align 4
    float32 m_restrike; // offset 0xBF0, size 0x4, align 4
    char _pad_0BF4[0x4]; // offset 0xBF4
    CUtlSymbolLarge m_iszSpriteName; // offset 0xBF8, size 0x8, align 8
    int32 m_frameStart; // offset 0xC00, size 0x4, align 4
    VectorWS m_vEndPointWorld; // offset 0xC04, size 0xC, align 4
    Vector m_vEndPointRelative; // offset 0xC10, size 0xC, align 4 | MNotSaved
    float32 m_radius; // offset 0xC1C, size 0x4, align 4
    Touch_t m_TouchType; // offset 0xC20, size 0x4, align 4
    char _pad_0C24[0x4]; // offset 0xC24
    CUtlSymbolLarge m_iFilterName; // offset 0xC28, size 0x8, align 8
    CHandle< CBaseEntity > m_hFilter; // offset 0xC30, size 0x4, align 4
    char _pad_0C34[0x4]; // offset 0xC34
    CUtlSymbolLarge m_iszDecal; // offset 0xC38, size 0x8, align 8
    CEntityIOOutput m_OnTouchedByEntity; // offset 0xC40, size 0x18, align 255
};
