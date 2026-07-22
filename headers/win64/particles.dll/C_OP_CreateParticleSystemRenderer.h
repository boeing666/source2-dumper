#pragma once

class C_OP_CreateParticleSystemRenderer : public CParticleFunctionRenderer /*0x0*/  // sizeof 0x908, align 0x8 [vtable] (particles) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x228]; // offset 0x0
    CStrongHandle< InfoForResourceTypeIParticleSystemDefinition > m_hEffect; // offset 0x228, size 0x8, align 8 | MPropertyFriendlyName
    EventTypeSelection_t m_nEventType; // offset 0x230, size 0x4, align 4 | MPropertyFriendlyName
    char _pad_0234[0x4]; // offset 0x234
    CUtlLeanVector< CPAssignment_t > m_vecCPs; // offset 0x238, size 0x10, align 8 | MPropertyFriendlyName
    CUtlString m_szParticleConfig; // offset 0x248, size 0x8, align 8 | MPropertyDescription MPropertyAttributeEditor MPropertyEditContextOverrideKey MPropertyFriendlyName
    CPerParticleVecInput m_AggregationPos; // offset 0x250, size 0x6B8, align 8 | MPropertyFriendlyName
};
