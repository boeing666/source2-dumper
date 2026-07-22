#pragma once

class C_PortraitWorldLight : public C_EnvDeferredLight /*0x0*/  // sizeof 0xD70, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0xD30]; // offset 0x0
    float32 m_flLatitude; // offset 0xD30, size 0x4, align 4
    float32 m_flLongitude; // offset 0xD34, size 0x4, align 4
    float32 m_flAdditionalRadius; // offset 0xD38, size 0x4, align 4
    float32 m_flBoundsRadiusMultiplier; // offset 0xD3C, size 0x4, align 4
    CHandle< C_PortraitWorldUnit > m_hTarget; // offset 0xD40, size 0x4, align 4
    bool m_bShowGizmos; // offset 0xD44, size 0x1, align 1
    char _pad_0D45[0x3]; // offset 0xD45
    CUtlStringToken m_hitboxSetName; // offset 0xD48, size 0x4, align 4
    VectorWS m_vPreviousCenter; // offset 0xD4C, size 0xC, align 4
    Vector m_vCenterVelocity; // offset 0xD58, size 0xC, align 4
    float32 m_flPreviousBoundingSphereRadius; // offset 0xD64, size 0x4, align 4
    float32 m_flBoundingSphereRadiusChangeSpeed; // offset 0xD68, size 0x4, align 4
    bool m_bPreviousValuesInitialized; // offset 0xD6C, size 0x1, align 1
    char _pad_0D6D[0x3]; // offset 0xD6D
};
