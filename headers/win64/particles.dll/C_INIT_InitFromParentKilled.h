#pragma once

class C_INIT_InitFromParentKilled : public CParticleFunctionInitializer /*0x0*/  // sizeof 0x268, align 0x8 [vtable] (particles) {MGetKV3ClassDefaults MGPUParticleFunction}
{
public:
    char _pad_0000[0x1E0]; // offset 0x0
    ParticleAttributeIndex_t m_nAttributeToCopy; // offset 0x1E0, size 0x4, align 255 | MPropertyFriendlyName MPropertyAttributeChoiceName
    EventTypeSelection_t m_nEventType; // offset 0x1E4, size 0x4, align 4 | MPropertyFriendlyName
    char _pad_01E8[0x80]; // offset 0x1E8
};
