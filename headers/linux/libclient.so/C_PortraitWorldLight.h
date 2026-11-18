#pragma once

class C_PortraitWorldLight : public C_EnvDeferredLight /*0x0*/  // sizeof 0x1050, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x1010]; // offset 0x0
    float32 m_flLatitude; // offset 0x1010, size 0x4, align 4
    float32 m_flLongitude; // offset 0x1014, size 0x4, align 4
    float32 m_flAdditionalRadius; // offset 0x1018, size 0x4, align 4
    float32 m_flBoundsRadiusMultiplier; // offset 0x101C, size 0x4, align 4
    CHandle< C_PortraitWorldUnit > m_hTarget; // offset 0x1020, size 0x4, align 4
    bool m_bShowGizmos; // offset 0x1024, size 0x1, align 1
    char _pad_1025[0x3]; // offset 0x1025
    CUtlStringToken m_hitboxSetName; // offset 0x1028, size 0x4, align 4
    VectorWS m_vPreviousCenter; // offset 0x102C, size 0xC, align 4
    Vector m_vCenterVelocity; // offset 0x1038, size 0xC, align 4
    float32 m_flPreviousBoundingSphereRadius; // offset 0x1044, size 0x4, align 4
    float32 m_flBoundingSphereRadiusChangeSpeed; // offset 0x1048, size 0x4, align 4
    bool m_bPreviousValuesInitialized; // offset 0x104C, size 0x1, align 1
    char _pad_104D[0x3]; // offset 0x104D
};
