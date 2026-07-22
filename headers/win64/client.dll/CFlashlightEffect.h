#pragma once

class CFlashlightEffect  // sizeof 0x2E0, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x10]; // offset 0x0
    bool m_bIsOn; // offset 0x10, size 0x1, align 1
    char _pad_0011[0xF]; // offset 0x11
    bool m_bMuzzleFlashEnabled; // offset 0x20, size 0x1, align 1
    char _pad_0021[0x3]; // offset 0x21
    float32 m_flMuzzleFlashBrightness; // offset 0x24, size 0x4, align 4
    char _pad_0028[0x8]; // offset 0x28
    Quaternion m_quatMuzzleFlashOrientation; // offset 0x30, size 0x10, align 16
    Vector m_vecMuzzleFlashOrigin; // offset 0x40, size 0xC, align 4
    float32 m_flFov; // offset 0x4C, size 0x4, align 4
    float32 m_flFarZ; // offset 0x50, size 0x4, align 4
    float32 m_flLinearAtten; // offset 0x54, size 0x4, align 4
    bool m_bCastsShadows; // offset 0x58, size 0x1, align 1
    char _pad_0059[0x3]; // offset 0x59
    float32 m_flCurrentPullBackDist; // offset 0x5C, size 0x4, align 4
    CStrongHandle< InfoForResourceTypeCTextureBase > m_FlashlightTexture; // offset 0x60, size 0x8, align 8
    CStrongHandle< InfoForResourceTypeCTextureBase > m_MuzzleFlashTexture; // offset 0x68, size 0x8, align 8
    char[64] m_textureName; // offset 0x70, size 0x40, align 1
    char _pad_00B0[0x230]; // offset 0xB0
};
