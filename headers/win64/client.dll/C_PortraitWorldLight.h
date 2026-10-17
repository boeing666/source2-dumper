#pragma once

class C_PortraitWorldLight : public C_EnvDeferredLight /*0x0*/  // sizeof 0xE60, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0xE20]; // offset 0x0
    float32 m_flLatitude; // offset 0xE20, size 0x4, align 4
    float32 m_flLongitude; // offset 0xE24, size 0x4, align 4
    float32 m_flAdditionalRadius; // offset 0xE28, size 0x4, align 4
    float32 m_flBoundsRadiusMultiplier; // offset 0xE2C, size 0x4, align 4
    CHandle< C_PortraitWorldUnit > m_hTarget; // offset 0xE30, size 0x4, align 4
    bool m_bShowGizmos; // offset 0xE34, size 0x1, align 1
    char _pad_0E35[0x3]; // offset 0xE35
    CUtlStringToken m_hitboxSetName; // offset 0xE38, size 0x4, align 4
    VectorWS m_vPreviousCenter; // offset 0xE3C, size 0xC, align 4
    Vector m_vCenterVelocity; // offset 0xE48, size 0xC, align 4
    float32 m_flPreviousBoundingSphereRadius; // offset 0xE54, size 0x4, align 4
    float32 m_flBoundingSphereRadiusChangeSpeed; // offset 0xE58, size 0x4, align 4
    bool m_bPreviousValuesInitialized; // offset 0xE5C, size 0x1, align 1
    char _pad_0E5D[0x3]; // offset 0xE5D
};
