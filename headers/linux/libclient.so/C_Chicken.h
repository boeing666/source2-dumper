#pragma once

class C_Chicken : public C_DynamicProp /*0x0*/, public IHasAttributes /*0x1420*/  // sizeof 0x2A50, align 0x10 [vtable] (client)
{
public:
    char _pad_0000[0x1430]; // offset 0x0
    CHandle< C_CSPlayerPawn > m_leader; // offset 0x1430, size 0x4, align 4
    CHandle< CCSPlayerController > m_owner; // offset 0x1434, size 0x4, align 4
    C_AttributeContainer m_AttributeManager; // offset 0x1438, size 0x1518, align 255
    bool m_bAttributesInitialized; // offset 0x2950, size 0x1, align 1
    char _pad_2951[0x3]; // offset 0x2951
    ParticleIndex_t m_hWaterWakeParticles; // offset 0x2954, size 0x4, align 255
    bool m_bIsPreviewModel; // offset 0x2958, size 0x1, align 1
    char _pad_2959[0xB7]; // offset 0x2959
    bool m_bSpawnDyingParticles; // offset 0x2A10, size 0x1, align 1
    char _pad_2A11[0x3F]; // offset 0x2A11
};
