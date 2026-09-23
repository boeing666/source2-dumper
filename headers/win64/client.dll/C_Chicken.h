#pragma once

class C_Chicken : public C_DynamicProp /*0x0*/, public IHasAttributes /*0x14B0*/  // sizeof 0x1BA0, align 0x10 [vtable] (client)
{
public:
    char _pad_0000[0x14C0]; // offset 0x0
    CHandle< C_CSPlayerPawn > m_leader; // offset 0x14C0, size 0x4, align 4
    CHandle< CCSPlayerController > m_owner; // offset 0x14C4, size 0x4, align 4
    C_AttributeContainer m_AttributeManager; // offset 0x14C8, size 0x610, align 255
    bool m_bAttributesInitialized; // offset 0x1AD8, size 0x1, align 1
    char _pad_1AD9[0x3]; // offset 0x1AD9
    ParticleIndex_t m_hWaterWakeParticles; // offset 0x1ADC, size 0x4, align 255
    bool m_bIsPreviewModel; // offset 0x1AE0, size 0x1, align 1
    char _pad_1AE1[0x87]; // offset 0x1AE1
    bool m_bSpawnDyingParticles; // offset 0x1B68, size 0x1, align 1
    char _pad_1B69[0x37]; // offset 0x1B69
};
