#pragma once

class CEnvBeam : public CBeam /*0x0*/  // sizeof 0x8B8, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x820]; // offset 0x0
    int32 m_active; // offset 0x820, size 0x4, align 4
    char _pad_0824[0x4]; // offset 0x824
    CStrongHandle< InfoForResourceTypeIMaterial2 > m_spriteTexture; // offset 0x828, size 0x8, align 8
    CUtlSymbolLarge m_iszStartEntity; // offset 0x830, size 0x8, align 8
    CUtlSymbolLarge m_iszEndEntity; // offset 0x838, size 0x8, align 8
    float32 m_life; // offset 0x840, size 0x4, align 4
    float32 m_boltWidth; // offset 0x844, size 0x4, align 4
    float32 m_noiseAmplitude; // offset 0x848, size 0x4, align 4
    int32 m_speed; // offset 0x84C, size 0x4, align 4
    float32 m_restrike; // offset 0x850, size 0x4, align 4
    char _pad_0854[0x4]; // offset 0x854
    CUtlSymbolLarge m_iszSpriteName; // offset 0x858, size 0x8, align 8
    int32 m_frameStart; // offset 0x860, size 0x4, align 4
    VectorWS m_vEndPointWorld; // offset 0x864, size 0xC, align 4
    Vector m_vEndPointRelative; // offset 0x870, size 0xC, align 4 | MNotSaved
    float32 m_radius; // offset 0x87C, size 0x4, align 4
    Touch_t m_TouchType; // offset 0x880, size 0x4, align 4
    char _pad_0884[0x4]; // offset 0x884
    CUtlSymbolLarge m_iFilterName; // offset 0x888, size 0x8, align 8
    CHandle< CBaseEntity > m_hFilter; // offset 0x890, size 0x4, align 4
    char _pad_0894[0x4]; // offset 0x894
    CUtlSymbolLarge m_iszDecal; // offset 0x898, size 0x8, align 8
    CEntityIOOutput m_OnTouchedByEntity; // offset 0x8A0, size 0x18, align 255
};
