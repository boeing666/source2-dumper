#pragma once

struct MaterialVariable_t  // sizeof 0x10, align 0x8 (particles) {MGetKV3ClassDefaults}
{
    CUtlString m_strVariable; // offset 0x0, size 0x8, align 8 | MPropertyFriendlyName
    ParticleAttributeIndex_t m_nVariableField; // offset 0x8, size 0x4, align 255 | MPropertyFriendlyName MPropertyAttributeChoiceName
    float32 m_flScale; // offset 0xC, size 0x4, align 4 | MPropertyFriendlyName
};
