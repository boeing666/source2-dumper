#pragma once

class CEnvBeam : public CBeam /*0x0*/  // sizeof 0xCC8, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0xC34]; // offset 0x0
    int32 m_active; // offset 0xC34, size 0x4, align 4
    CStrongHandle< InfoForResourceTypeIMaterial2 > m_spriteTexture; // offset 0xC38, size 0x8, align 8
    CUtlSymbolLarge m_iszStartEntity; // offset 0xC40, size 0x8, align 8
    CUtlSymbolLarge m_iszEndEntity; // offset 0xC48, size 0x8, align 8
    float32 m_life; // offset 0xC50, size 0x4, align 4
    float32 m_boltWidth; // offset 0xC54, size 0x4, align 4
    float32 m_noiseAmplitude; // offset 0xC58, size 0x4, align 4
    int32 m_speed; // offset 0xC5C, size 0x4, align 4
    float32 m_restrike; // offset 0xC60, size 0x4, align 4
    char _pad_0C64[0x4]; // offset 0xC64
    CUtlSymbolLarge m_iszSpriteName; // offset 0xC68, size 0x8, align 8
    int32 m_frameStart; // offset 0xC70, size 0x4, align 4
    VectorWS m_vEndPointWorld; // offset 0xC74, size 0xC, align 4
    Vector m_vEndPointRelative; // offset 0xC80, size 0xC, align 4 | MNotSaved
    float32 m_radius; // offset 0xC8C, size 0x4, align 4
    Touch_t m_TouchType; // offset 0xC90, size 0x4, align 4
    char _pad_0C94[0x4]; // offset 0xC94
    CUtlSymbolLarge m_iFilterName; // offset 0xC98, size 0x8, align 8
    CHandle< CBaseEntity > m_hFilter; // offset 0xCA0, size 0x4, align 4
    char _pad_0CA4[0x4]; // offset 0xCA4
    CUtlSymbolLarge m_iszDecal; // offset 0xCA8, size 0x8, align 8
    CEntityIOOutput m_OnTouchedByEntity; // offset 0xCB0, size 0x18, align 255
};
