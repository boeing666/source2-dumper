#pragma once

class C_Chicken : public C_DynamicProp /*0x0*/, public IHasAttributes /*0x13C0*/  // sizeof 0x18B0, align 0x10 [vtable] (client)
{
public:
    char _pad_0000[0x13C8]; // offset 0x0
    CHandle< C_CSPlayerPawn > m_leader; // offset 0x13C8, size 0x4, align 4
    char _pad_13CC[0x4]; // offset 0x13CC
    C_AttributeContainer m_AttributeManager; // offset 0x13D0, size 0x4D0, align 255
    bool m_bAttributesInitialized; // offset 0x18A0, size 0x1, align 1
    char _pad_18A1[0x3]; // offset 0x18A1
    ParticleIndex_t m_hWaterWakeParticles; // offset 0x18A4, size 0x4, align 255
    bool m_bIsPreviewModel; // offset 0x18A8, size 0x1, align 1
    char _pad_18A9[0x7]; // offset 0x18A9
};
