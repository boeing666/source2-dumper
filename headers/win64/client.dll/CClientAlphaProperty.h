#pragma once

class CClientAlphaProperty : public IClientAlphaProperty /*0x0*/  // sizeof 0x30, align 0xFF [vtable trivial_dtor] (client)
{
public:
    uint16_t m_nDesyncOffset : 14; // offset 0x0
    uint8_t m_bAlphaOverride : 1; // offset 0x0
    uint8_t m_bShadowAlphaOverride : 1; // offset 0x0
    uint8_t m_nRenderMode : 3; // offset 0x0
    uint8_t m_nRenderFX : 5; // offset 0x0
    char _pad_0001[0xF]; // offset 0x1
    uint16 m_nDistFadeStart; // offset 0x10, size 0x2, align 2
    uint16 m_nDistFadeEnd; // offset 0x12, size 0x2, align 2
    char _pad_0014[0x3]; // offset 0x14
    uint8 m_nAlpha; // offset 0x17, size 0x1, align 1
    float32 m_flFadeScale; // offset 0x18, size 0x4, align 4
    GameTime_t m_flRenderFxStartTime; // offset 0x1C, size 0x4, align 255
    float32 m_flRenderFxDuration; // offset 0x20, size 0x4, align 4
    char _pad_0024[0xC]; // offset 0x24
};
