#pragma once

class C_OP_RenderFlattenGrass : public CParticleFunctionRenderer /*0x0*/  // sizeof 0x228, align 0x8 [vtable] (particles) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x21C]; // offset 0x0
    float32 m_flFlattenStrength; // offset 0x21C, size 0x4, align 4 | MPropertyFriendlyName
    ParticleAttributeIndex_t m_nStrengthFieldOverride; // offset 0x220, size 0x4, align 255 | MPropertyFriendlyName MPropertyAttributeChoiceName
    float32 m_flRadiusScale; // offset 0x224, size 0x4, align 4 | MPropertyFriendlyName
};
