#pragma once

class C_OP_RenderLights : public C_OP_RenderPoints /*0x0*/  // sizeof 0x258, align 0x8 [vtable] (particles) {MObsoleteParticleFunction MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x238]; // offset 0x0
    float32 m_flAnimationRate; // offset 0x238, size 0x4, align 4 | MPropertyFriendlyName
    AnimationType_t m_nAnimationType; // offset 0x23C, size 0x4, align 4 | MPropertyFriendlyName
    bool m_bAnimateInFPS; // offset 0x240, size 0x1, align 1 | MPropertyFriendlyName
    char _pad_0241[0x3]; // offset 0x241
    float32 m_flMinSize; // offset 0x244, size 0x4, align 4 | MPropertyFriendlyName
    float32 m_flMaxSize; // offset 0x248, size 0x4, align 4 | MPropertyFriendlyName
    float32 m_flStartFadeSize; // offset 0x24C, size 0x4, align 4 | MPropertyFriendlyName
    float32 m_flEndFadeSize; // offset 0x250, size 0x4, align 4 | MPropertyFriendlyName
    char _pad_0254[0x4]; // offset 0x254
};
