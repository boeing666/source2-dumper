#pragma once

class C_INIT_Orient2DRelToCP : public CParticleFunctionInitializer /*0x0*/  // sizeof 0x1F0, align 0x8 [vtable] (particles) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1E0]; // offset 0x0
    int32 m_nCP; // offset 0x1E0, size 0x4, align 4 | MPropertyFriendlyName
    ParticleAttributeIndex_t m_nFieldOutput; // offset 0x1E4, size 0x4, align 255 | MPropertyFriendlyName MPropertyAttributeChoiceName
    float32 m_flRotOffset; // offset 0x1E8, size 0x4, align 4 | MPropertyFriendlyName
    char _pad_01EC[0x4]; // offset 0x1EC
};
