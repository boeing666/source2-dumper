#pragma once

class CPointAngularVelocitySensor : public CPointEntity /*0x0*/  // sizeof 0x570, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x4A0]; // offset 0x0
    CHandle< CBaseEntity > m_hTargetEntity; // offset 0x4A0, size 0x4, align 4
    float32 m_flThreshold; // offset 0x4A4, size 0x4, align 4
    int32 m_nLastCompareResult; // offset 0x4A8, size 0x4, align 4
    int32 m_nLastFireResult; // offset 0x4AC, size 0x4, align 4
    GameTime_t m_flFireTime; // offset 0x4B0, size 0x4, align 255
    float32 m_flFireInterval; // offset 0x4B4, size 0x4, align 4
    float32 m_flLastAngVelocity; // offset 0x4B8, size 0x4, align 4
    QAngle m_lastOrientation; // offset 0x4BC, size 0xC, align 4
    VectorWS m_vecAxis; // offset 0x4C8, size 0xC, align 4
    bool m_bUseHelper; // offset 0x4D4, size 0x1, align 1
    char _pad_04D5[0x3]; // offset 0x4D5
    CEntityOutputTemplate< float32 > m_AngularVelocity; // offset 0x4D8, size 0x20, align 8
    CEntityIOOutput m_OnLessThan; // offset 0x4F8, size 0x18, align 255
    CEntityIOOutput m_OnLessThanOrEqualTo; // offset 0x510, size 0x18, align 255
    CEntityIOOutput m_OnGreaterThan; // offset 0x528, size 0x18, align 255
    CEntityIOOutput m_OnGreaterThanOrEqualTo; // offset 0x540, size 0x18, align 255
    CEntityIOOutput m_OnEqualTo; // offset 0x558, size 0x18, align 255
};
