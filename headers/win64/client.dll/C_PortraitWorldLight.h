#pragma once

class C_PortraitWorldLight : public C_EnvDeferredLight /*0x0*/  // sizeof 0xEC0, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0xE80]; // offset 0x0
    float32 m_flLatitude; // offset 0xE80, size 0x4, align 4
    float32 m_flLongitude; // offset 0xE84, size 0x4, align 4
    float32 m_flAdditionalRadius; // offset 0xE88, size 0x4, align 4
    float32 m_flBoundsRadiusMultiplier; // offset 0xE8C, size 0x4, align 4
    CHandle< C_PortraitWorldUnit > m_hTarget; // offset 0xE90, size 0x4, align 4
    bool m_bShowGizmos; // offset 0xE94, size 0x1, align 1
    char _pad_0E95[0x3]; // offset 0xE95
    CUtlStringToken m_hitboxSetName; // offset 0xE98, size 0x4, align 4
    VectorWS m_vPreviousCenter; // offset 0xE9C, size 0xC, align 4
    Vector m_vCenterVelocity; // offset 0xEA8, size 0xC, align 4
    float32 m_flPreviousBoundingSphereRadius; // offset 0xEB4, size 0x4, align 4
    float32 m_flBoundingSphereRadiusChangeSpeed; // offset 0xEB8, size 0x4, align 4
    bool m_bPreviousValuesInitialized; // offset 0xEBC, size 0x1, align 1
    char _pad_0EBD[0x3]; // offset 0xEBD
};
