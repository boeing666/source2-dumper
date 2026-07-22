#pragma once

class C_Chicken : public C_DynamicProp /*0x0*/, public IHasAttributes /*0x1340*/  // sizeof 0x2740, align 0x10 [vtable] (client)
{
public:
    char _pad_0000[0x1348]; // offset 0x0
    CHandle< C_CSPlayerPawn > m_leader; // offset 0x1348, size 0x4, align 4
    char _pad_134C[0x4]; // offset 0x134C
    C_AttributeContainer m_AttributeManager; // offset 0x1350, size 0x13D8, align 255
    bool m_bAttributesInitialized; // offset 0x2728, size 0x1, align 1
    char _pad_2729[0x3]; // offset 0x2729
    ParticleIndex_t m_hWaterWakeParticles; // offset 0x272C, size 0x4, align 255
    bool m_bIsPreviewModel; // offset 0x2730, size 0x1, align 1
    char _pad_2731[0xF]; // offset 0x2731
};
