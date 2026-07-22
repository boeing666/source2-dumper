#pragma once

class CFuncRotating : public CBaseModelEntity /*0x0*/  // sizeof 0xB20, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0xA58]; // offset 0x0
    CEntityIOOutput m_OnStopped; // offset 0xA58, size 0x18, align 255
    CEntityIOOutput m_OnStarted; // offset 0xA70, size 0x18, align 255
    CEntityIOOutput m_OnReachedStart; // offset 0xA88, size 0x18, align 255
    RotationVector m_localRotationVector; // offset 0xAA0, size 0xC, align 4
    float32 m_flSpeed; // offset 0xAAC, size 0x4, align 4
    float32 m_flFanFriction; // offset 0xAB0, size 0x4, align 4
    float32 m_flAttenuation; // offset 0xAB4, size 0x4, align 4
    float32 m_flVolume; // offset 0xAB8, size 0x4, align 4
    float32 m_flTargetSpeed; // offset 0xABC, size 0x4, align 4
    float32 m_flMaxSpeed; // offset 0xAC0, size 0x4, align 4
    float32 m_flBlockDamage; // offset 0xAC4, size 0x4, align 4
    CGameSoundEventName m_NoiseRunning; // offset 0xAC8, size 0x8, align 8
    bool m_bReversed; // offset 0xAD0, size 0x1, align 1
    bool m_bAccelDecel; // offset 0xAD1, size 0x1, align 1
    char _pad_0AD2[0x16]; // offset 0xAD2
    QAngle m_prevLocalAngles; // offset 0xAE8, size 0xC, align 4
    QAngle m_angStart; // offset 0xAF4, size 0xC, align 4
    bool m_bStopAtStartPos; // offset 0xB00, size 0x1, align 1
    char _pad_0B01[0x3]; // offset 0xB01
    Vector m_vecClientOrigin; // offset 0xB04, size 0xC, align 4 | MNotSaved
    QAngle m_vecClientAngles; // offset 0xB10, size 0xC, align 4 | MNotSaved
    char _pad_0B1C[0x4]; // offset 0xB1C
};
