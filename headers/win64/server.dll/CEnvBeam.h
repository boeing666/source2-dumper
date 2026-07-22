#pragma once

class CEnvBeam : public CBeam /*0x0*/  // sizeof 0x8B0, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x818]; // offset 0x0
    int32 m_active; // offset 0x818, size 0x4, align 4
    char _pad_081C[0x4]; // offset 0x81C
    CStrongHandle< InfoForResourceTypeIMaterial2 > m_spriteTexture; // offset 0x820, size 0x8, align 8
    CUtlSymbolLarge m_iszStartEntity; // offset 0x828, size 0x8, align 8
    CUtlSymbolLarge m_iszEndEntity; // offset 0x830, size 0x8, align 8
    float32 m_life; // offset 0x838, size 0x4, align 4
    float32 m_boltWidth; // offset 0x83C, size 0x4, align 4
    float32 m_noiseAmplitude; // offset 0x840, size 0x4, align 4
    int32 m_speed; // offset 0x844, size 0x4, align 4
    float32 m_restrike; // offset 0x848, size 0x4, align 4
    char _pad_084C[0x4]; // offset 0x84C
    CUtlSymbolLarge m_iszSpriteName; // offset 0x850, size 0x8, align 8
    int32 m_frameStart; // offset 0x858, size 0x4, align 4
    VectorWS m_vEndPointWorld; // offset 0x85C, size 0xC, align 4
    Vector m_vEndPointRelative; // offset 0x868, size 0xC, align 4 | MNotSaved
    float32 m_radius; // offset 0x874, size 0x4, align 4
    Touch_t m_TouchType; // offset 0x878, size 0x4, align 4
    char _pad_087C[0x4]; // offset 0x87C
    CUtlSymbolLarge m_iFilterName; // offset 0x880, size 0x8, align 8
    CHandle< CBaseEntity > m_hFilter; // offset 0x888, size 0x4, align 4
    char _pad_088C[0x4]; // offset 0x88C
    CUtlSymbolLarge m_iszDecal; // offset 0x890, size 0x8, align 8
    CEntityIOOutput m_OnTouchedByEntity; // offset 0x898, size 0x18, align 255
};
