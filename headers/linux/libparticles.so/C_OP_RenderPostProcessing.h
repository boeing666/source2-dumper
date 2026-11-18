#pragma once

class C_OP_RenderPostProcessing : public CParticleFunctionRenderer /*0x0*/  // sizeof 0x3A0, align 0x8 [vtable] (particles) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x220]; // offset 0x0
    CPerParticleFloatInput m_flPostProcessStrength; // offset 0x220, size 0x170, align 8 | MPropertyFriendlyName
    CStrongHandle< InfoForResourceTypeCPostProcessingResource > m_hPostTexture; // offset 0x390, size 0x8, align 8 | MPropertyFriendlyName MPropertyAttributeEditor
    ParticlePostProcessPriorityGroup_t m_nPriority; // offset 0x398, size 0x4, align 4 | MPropertyFriendlyName
    char _pad_039C[0x4]; // offset 0x39C
};
