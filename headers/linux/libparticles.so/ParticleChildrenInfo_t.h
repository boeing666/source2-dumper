#pragma once

struct ParticleChildrenInfo_t  // sizeof 0x20, align 0x10 (particles) {MGetKV3ClassDefaults}
{
    CStrongHandle< InfoForResourceTypeIParticleSystemDefinition > m_ChildRef; // offset 0x0, size 0x8, align 8 | MPropertySuppressField
    float32 m_flDelay; // offset 0x8, size 0x4, align 4 | MPropertyFriendlyName
    bool m_bEndCap; // offset 0xC, size 0x1, align 1 | MPropertyFriendlyName
    bool m_bDisableChild; // offset 0xD, size 0x1, align 1 | MPropertySuppressField
    char _pad_000E[0x2]; // offset 0xE
    ParticleDetailLevel_t m_nDetailLevel; // offset 0x10, size 0x4, align 4 | MPropertyFriendlyName
    char _pad_0014[0xC]; // offset 0x14
};
