#pragma once

class C_INIT_StatusEffectCitadel : public CParticleFunctionInitializer /*0x0*/  // sizeof 0x220, align 0x8 [vtable] (particles) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1D4]; // offset 0x0
    float32 m_flSFXColorWarpAmount; // offset 0x1D4, size 0x4, align 4 | MPropertyFriendlyName
    float32 m_flSFXNormalAmount; // offset 0x1D8, size 0x4, align 4 | MPropertyFriendlyName
    float32 m_flSFXMetalnessAmount; // offset 0x1DC, size 0x4, align 4 | MPropertyFriendlyName
    float32 m_flSFXRoughnessAmount; // offset 0x1E0, size 0x4, align 4 | MPropertyFriendlyName
    float32 m_flSFXSelfIllumAmount; // offset 0x1E4, size 0x4, align 4 | MPropertyFriendlyName
    float32 m_flSFXSScale; // offset 0x1E8, size 0x4, align 4 | MPropertyFriendlyName
    float32 m_flSFXSScrollX; // offset 0x1EC, size 0x4, align 4 | MPropertyFriendlyName
    float32 m_flSFXSScrollY; // offset 0x1F0, size 0x4, align 4 | MPropertyFriendlyName
    float32 m_flSFXSScrollZ; // offset 0x1F4, size 0x4, align 4 | MPropertyFriendlyName
    float32 m_flSFXSOffsetX; // offset 0x1F8, size 0x4, align 4 | MPropertyFriendlyName
    float32 m_flSFXSOffsetY; // offset 0x1FC, size 0x4, align 4 | MPropertyFriendlyName
    float32 m_flSFXSOffsetZ; // offset 0x200, size 0x4, align 4 | MPropertyFriendlyName
    DetailCombo_t m_nDetailCombo; // offset 0x204, size 0x4, align 4 | MPropertyFriendlyName
    float32 m_flSFXSDetailAmount; // offset 0x208, size 0x4, align 4 | MPropertyFriendlyName
    float32 m_flSFXSDetailScale; // offset 0x20C, size 0x4, align 4 | MPropertyFriendlyName
    float32 m_flSFXSDetailScrollX; // offset 0x210, size 0x4, align 4 | MPropertyFriendlyName
    float32 m_flSFXSDetailScrollY; // offset 0x214, size 0x4, align 4 | MPropertyFriendlyName
    float32 m_flSFXSDetailScrollZ; // offset 0x218, size 0x4, align 4 | MPropertyFriendlyName
    float32 m_flSFXSUseModelUVs; // offset 0x21C, size 0x4, align 4 | MPropertyFriendlyName
};
