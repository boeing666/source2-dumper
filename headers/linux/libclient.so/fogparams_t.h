#pragma once

struct fogparams_t  // sizeof 0x68, align 0x8 [vtable trivial_dtor] (client) {MGetKV3ClassDefaults}
{
    char _pad_0000[0x8]; // offset 0x0
    Vector dirPrimary; // offset 0x8, size 0xC, align 4
    Color colorPrimary; // offset 0x14, size 0x4, align 1
    Color colorSecondary; // offset 0x18, size 0x4, align 1
    Color colorPrimaryLerpTo; // offset 0x1C, size 0x4, align 1 | MNotSaved
    Color colorSecondaryLerpTo; // offset 0x20, size 0x4, align 1 | MNotSaved
    float32 start; // offset 0x24, size 0x4, align 4
    float32 end; // offset 0x28, size 0x4, align 4
    float32 farz; // offset 0x2C, size 0x4, align 4
    float32 maxdensity; // offset 0x30, size 0x4, align 4
    float32 exponent; // offset 0x34, size 0x4, align 4
    float32 HDRColorScale; // offset 0x38, size 0x4, align 4
    float32 skyboxFogFactor; // offset 0x3C, size 0x4, align 4 | MNotSaved
    float32 skyboxFogFactorLerpTo; // offset 0x40, size 0x4, align 4 | MNotSaved
    float32 startLerpTo; // offset 0x44, size 0x4, align 4 | MNotSaved
    float32 endLerpTo; // offset 0x48, size 0x4, align 4 | MNotSaved
    float32 maxdensityLerpTo; // offset 0x4C, size 0x4, align 4 | MNotSaved
    GameTime_t lerptime; // offset 0x50, size 0x4, align 255 | MNotSaved
    float32 duration; // offset 0x54, size 0x4, align 4
    float32 blendtobackground; // offset 0x58, size 0x4, align 4
    float32 scattering; // offset 0x5C, size 0x4, align 4
    float32 locallightscale; // offset 0x60, size 0x4, align 4
    bool enable; // offset 0x64, size 0x1, align 1
    bool blend; // offset 0x65, size 0x1, align 1
    bool m_bPadding2; // offset 0x66, size 0x1, align 1 | MNotSaved
    bool m_bPadding; // offset 0x67, size 0x1, align 1 | MNotSaved
};
