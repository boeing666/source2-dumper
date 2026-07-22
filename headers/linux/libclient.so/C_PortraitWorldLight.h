#pragma once

class C_PortraitWorldLight : public C_EnvDeferredLight /*0x0*/  // sizeof 0xEF8, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0xEB8]; // offset 0x0
    float32 m_flLatitude; // offset 0xEB8, size 0x4, align 4
    float32 m_flLongitude; // offset 0xEBC, size 0x4, align 4
    float32 m_flAdditionalRadius; // offset 0xEC0, size 0x4, align 4
    float32 m_flBoundsRadiusMultiplier; // offset 0xEC4, size 0x4, align 4
    CHandle< C_PortraitWorldUnit > m_hTarget; // offset 0xEC8, size 0x4, align 4
    bool m_bShowGizmos; // offset 0xECC, size 0x1, align 1
    char _pad_0ECD[0x3]; // offset 0xECD
    CUtlStringToken m_hitboxSetName; // offset 0xED0, size 0x4, align 4
    VectorWS m_vPreviousCenter; // offset 0xED4, size 0xC, align 4
    Vector m_vCenterVelocity; // offset 0xEE0, size 0xC, align 4
    float32 m_flPreviousBoundingSphereRadius; // offset 0xEEC, size 0x4, align 4
    float32 m_flBoundingSphereRadiusChangeSpeed; // offset 0xEF0, size 0x4, align 4
    bool m_bPreviousValuesInitialized; // offset 0xEF4, size 0x1, align 1
    char _pad_0EF5[0x3]; // offset 0xEF5
};
