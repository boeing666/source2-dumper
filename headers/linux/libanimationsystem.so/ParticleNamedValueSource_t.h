#pragma once

struct ParticleNamedValueSource_t  // sizeof 0x60, align 0x8 (particleslib) {MGetKV3ClassDefaults}
{
    CUtlString m_Name; // offset 0x0, size 0x8, align 8
    bool m_IsPublic; // offset 0x8, size 0x1, align 1
    char _pad_0009[0x7]; // offset 0x9
    CPulseValueFullType m_ValueType; // offset 0x10, size 0x18, align 8 | MFgdFromSchemaCompletelySkipField
    ParticleNamedValueConfiguration_t m_DefaultConfig; // offset 0x28, size 0x38, align 8 | MFgdFromSchemaCompletelySkipField
};
