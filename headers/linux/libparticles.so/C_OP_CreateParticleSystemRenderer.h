#pragma once

class C_OP_CreateParticleSystemRenderer : public CParticleFunctionRenderer /*0x0*/  // sizeof 0x8D8, align 0x8 [vtable] (particles) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x220]; // offset 0x0
    CStrongHandle< InfoForResourceTypeIParticleSystemDefinition > m_hEffect; // offset 0x220, size 0x8, align 8 | MPropertyFriendlyName
    EventTypeSelection_t m_nEventType; // offset 0x228, size 0x4, align 4 | MPropertyFriendlyName
    char _pad_022C[0x4]; // offset 0x22C
    CUtlLeanVector< CPAssignment_t > m_vecCPs; // offset 0x230, size 0x10, align 8 | MPropertyFriendlyName
    CUtlString m_szParticleConfig; // offset 0x240, size 0x8, align 8 | MPropertyDescription MPropertyAttributeEditor MPropertyEditContextOverrideKey MPropertyFriendlyName
    CPerParticleVecInput m_AggregationPos; // offset 0x248, size 0x690, align 8 | MPropertyFriendlyName
};
