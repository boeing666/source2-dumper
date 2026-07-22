#pragma once

class CPointAngularVelocitySensor : public CPointEntity /*0x0*/  // sizeof 0x858, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x788]; // offset 0x0
    CHandle< CBaseEntity > m_hTargetEntity; // offset 0x788, size 0x4, align 4
    float32 m_flThreshold; // offset 0x78C, size 0x4, align 4
    int32 m_nLastCompareResult; // offset 0x790, size 0x4, align 4
    int32 m_nLastFireResult; // offset 0x794, size 0x4, align 4
    GameTime_t m_flFireTime; // offset 0x798, size 0x4, align 255
    float32 m_flFireInterval; // offset 0x79C, size 0x4, align 4
    float32 m_flLastAngVelocity; // offset 0x7A0, size 0x4, align 4
    QAngle m_lastOrientation; // offset 0x7A4, size 0xC, align 4
    VectorWS m_vecAxis; // offset 0x7B0, size 0xC, align 4
    bool m_bUseHelper; // offset 0x7BC, size 0x1, align 1
    char _pad_07BD[0x3]; // offset 0x7BD
    CEntityOutputTemplate< float32 > m_AngularVelocity; // offset 0x7C0, size 0x20, align 8
    CEntityIOOutput m_OnLessThan; // offset 0x7E0, size 0x18, align 255
    CEntityIOOutput m_OnLessThanOrEqualTo; // offset 0x7F8, size 0x18, align 255
    CEntityIOOutput m_OnGreaterThan; // offset 0x810, size 0x18, align 255
    CEntityIOOutput m_OnGreaterThanOrEqualTo; // offset 0x828, size 0x18, align 255
    CEntityIOOutput m_OnEqualTo; // offset 0x840, size 0x18, align 255
};
