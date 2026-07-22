#pragma once

class CEnvLaser : public CBeam /*0x0*/  // sizeof 0x848, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x820]; // offset 0x0
    CUtlSymbolLarge m_iszLaserTarget; // offset 0x820, size 0x8, align 8
    CSprite* m_pSprite; // offset 0x828, size 0x8, align 8 | MClassPtr
    CUtlSymbolLarge m_iszSpriteName; // offset 0x830, size 0x8, align 8
    Vector m_firePosition; // offset 0x838, size 0xC, align 4
    float32 m_flStartFrame; // offset 0x844, size 0x4, align 4
};
