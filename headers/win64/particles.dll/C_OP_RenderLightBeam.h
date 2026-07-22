#pragma once

class C_OP_RenderLightBeam : public CParticleFunctionRenderer /*0x0*/  // sizeof 0xEB0, align 0x8 [vtable] (particles) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x228]; // offset 0x0
    CParticleCollectionVecInput m_vColorBlend; // offset 0x228, size 0x6B8, align 8 | MPropertyFriendlyName
    ParticleColorBlendType_t m_nColorBlendType; // offset 0x8E0, size 0x4, align 4 | MPropertyFriendlyName MPropertySortPriority
    char _pad_08E4[0x4]; // offset 0x8E4
    CParticleCollectionFloatInput m_flBrightnessLumensPerMeter; // offset 0x8E8, size 0x170, align 8 | MPropertyFriendlyName
    bool m_bCastShadows; // offset 0xA58, size 0x1, align 1 | MPropertyFriendlyName MPropertySuppressExpr
    char _pad_0A59[0x7]; // offset 0xA59
    CParticleCollectionFloatInput m_flSkirt; // offset 0xA60, size 0x170, align 8 | MPropertyFriendlyName
    CParticleCollectionFloatInput m_flRange; // offset 0xBD0, size 0x170, align 8 | MPropertyFriendlyName
    CParticleCollectionFloatInput m_flThickness; // offset 0xD40, size 0x170, align 8 | MPropertyFriendlyName
};
