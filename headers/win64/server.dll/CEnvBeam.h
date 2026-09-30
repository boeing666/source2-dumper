#pragma once

class CEnvBeam : public CBeam /*0x0*/  // sizeof 0x9B0, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x918]; // offset 0x0
    int32 m_active; // offset 0x918, size 0x4, align 4
    char _pad_091C[0x4]; // offset 0x91C
    CStrongHandle< InfoForResourceTypeIMaterial2 > m_spriteTexture; // offset 0x920, size 0x8, align 8
    CUtlSymbolLarge m_iszStartEntity; // offset 0x928, size 0x8, align 8
    CUtlSymbolLarge m_iszEndEntity; // offset 0x930, size 0x8, align 8
    float32 m_life; // offset 0x938, size 0x4, align 4
    float32 m_boltWidth; // offset 0x93C, size 0x4, align 4
    float32 m_noiseAmplitude; // offset 0x940, size 0x4, align 4
    int32 m_speed; // offset 0x944, size 0x4, align 4
    float32 m_restrike; // offset 0x948, size 0x4, align 4
    char _pad_094C[0x4]; // offset 0x94C
    CUtlSymbolLarge m_iszSpriteName; // offset 0x950, size 0x8, align 8
    int32 m_frameStart; // offset 0x958, size 0x4, align 4
    VectorWS m_vEndPointWorld; // offset 0x95C, size 0xC, align 4
    Vector m_vEndPointRelative; // offset 0x968, size 0xC, align 4 | MNotSaved
    float32 m_radius; // offset 0x974, size 0x4, align 4
    Touch_t m_TouchType; // offset 0x978, size 0x4, align 4
    char _pad_097C[0x4]; // offset 0x97C
    CUtlSymbolLarge m_iFilterName; // offset 0x980, size 0x8, align 8
    CHandle< CBaseEntity > m_hFilter; // offset 0x988, size 0x4, align 4
    char _pad_098C[0x4]; // offset 0x98C
    CUtlSymbolLarge m_iszDecal; // offset 0x990, size 0x8, align 8
    CEntityIOOutput m_OnTouchedByEntity; // offset 0x998, size 0x18, align 255
};
