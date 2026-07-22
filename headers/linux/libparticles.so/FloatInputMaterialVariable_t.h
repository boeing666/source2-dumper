#pragma once

struct FloatInputMaterialVariable_t  // sizeof 0x170, align 0x8 (particles) {MGetKV3ClassDefaults}
{
    CUtlString m_strVariable; // offset 0x0, size 0x8, align 8 | MPropertyFriendlyName
    CParticleCollectionFloatInput m_flInput; // offset 0x8, size 0x168, align 8 | MPropertyFriendlyName
};
