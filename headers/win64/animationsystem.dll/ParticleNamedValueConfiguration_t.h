#pragma once

struct ParticleNamedValueConfiguration_t  // sizeof 0x38, align 0x8 (particleslib) {MGetKV3ClassDefaults}
{
    CUtlString m_ConfigName; // offset 0x0, size 0x8, align 8
    KeyValues3 m_ConfigValue; // offset 0x8, size 0x10, align 8
    CUtlString m_BoundValuePath; // offset 0x18, size 0x8, align 8
    ParticleAttachment_t m_iAttachType; // offset 0x20, size 0x4, align 4
    char _pad_0024[0x4]; // offset 0x24
    CUtlString m_strEntityScope; // offset 0x28, size 0x8, align 8
    CUtlString m_strAttachmentName; // offset 0x30, size 0x8, align 8
};
