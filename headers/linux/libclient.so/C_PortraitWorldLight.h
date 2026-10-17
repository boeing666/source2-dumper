#pragma once

class C_PortraitWorldLight : public C_EnvDeferredLight /*0x0*/  // sizeof 0xFE8, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0xFA8]; // offset 0x0
    float32 m_flLatitude; // offset 0xFA8, size 0x4, align 4
    float32 m_flLongitude; // offset 0xFAC, size 0x4, align 4
    float32 m_flAdditionalRadius; // offset 0xFB0, size 0x4, align 4
    float32 m_flBoundsRadiusMultiplier; // offset 0xFB4, size 0x4, align 4
    CHandle< C_PortraitWorldUnit > m_hTarget; // offset 0xFB8, size 0x4, align 4
    bool m_bShowGizmos; // offset 0xFBC, size 0x1, align 1
    char _pad_0FBD[0x3]; // offset 0xFBD
    CUtlStringToken m_hitboxSetName; // offset 0xFC0, size 0x4, align 4
    VectorWS m_vPreviousCenter; // offset 0xFC4, size 0xC, align 4
    Vector m_vCenterVelocity; // offset 0xFD0, size 0xC, align 4
    float32 m_flPreviousBoundingSphereRadius; // offset 0xFDC, size 0x4, align 4
    float32 m_flBoundingSphereRadiusChangeSpeed; // offset 0xFE0, size 0x4, align 4
    bool m_bPreviousValuesInitialized; // offset 0xFE4, size 0x1, align 1
    char _pad_0FE5[0x3]; // offset 0xFE5
};
