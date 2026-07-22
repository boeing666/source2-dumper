#pragma once

struct VecInputMaterialVariable_t  // sizeof 0x698, align 0x8 (particles) {MGetKV3ClassDefaults}
{
    CUtlString m_strVariable; // offset 0x0, size 0x8, align 8 | MPropertyFriendlyName
    CParticleCollectionVecInput m_vecInput; // offset 0x8, size 0x690, align 8 | MPropertyFriendlyName
};
