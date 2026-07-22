#pragma once

class CFuncRotating : public CBaseModelEntity /*0x0*/  // sizeof 0xB18, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0xA50]; // offset 0x0
    CEntityIOOutput m_OnStopped; // offset 0xA50, size 0x18, align 255
    CEntityIOOutput m_OnStarted; // offset 0xA68, size 0x18, align 255
    CEntityIOOutput m_OnReachedStart; // offset 0xA80, size 0x18, align 255
    RotationVector m_localRotationVector; // offset 0xA98, size 0xC, align 4
    float32 m_flSpeed; // offset 0xAA4, size 0x4, align 4
    float32 m_flFanFriction; // offset 0xAA8, size 0x4, align 4
    float32 m_flAttenuation; // offset 0xAAC, size 0x4, align 4
    float32 m_flVolume; // offset 0xAB0, size 0x4, align 4
    float32 m_flTargetSpeed; // offset 0xAB4, size 0x4, align 4
    float32 m_flMaxSpeed; // offset 0xAB8, size 0x4, align 4
    float32 m_flBlockDamage; // offset 0xABC, size 0x4, align 4
    CGameSoundEventName m_NoiseRunning; // offset 0xAC0, size 0x8, align 8
    bool m_bReversed; // offset 0xAC8, size 0x1, align 1
    bool m_bAccelDecel; // offset 0xAC9, size 0x1, align 1
    char _pad_0ACA[0x16]; // offset 0xACA
    QAngle m_prevLocalAngles; // offset 0xAE0, size 0xC, align 4
    QAngle m_angStart; // offset 0xAEC, size 0xC, align 4
    bool m_bStopAtStartPos; // offset 0xAF8, size 0x1, align 1
    char _pad_0AF9[0x3]; // offset 0xAF9
    Vector m_vecClientOrigin; // offset 0xAFC, size 0xC, align 4 | MNotSaved
    QAngle m_vecClientAngles; // offset 0xB08, size 0xC, align 4 | MNotSaved
    char _pad_0B14[0x4]; // offset 0xB14
};
