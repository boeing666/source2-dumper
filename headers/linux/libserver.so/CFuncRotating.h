#pragma once

class CFuncRotating : public CBaseModelEntity /*0x0*/  // sizeof 0xC68, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0xBA0]; // offset 0x0
    CEntityIOOutput m_OnStopped; // offset 0xBA0, size 0x18, align 255
    CEntityIOOutput m_OnStarted; // offset 0xBB8, size 0x18, align 255
    CEntityIOOutput m_OnReachedStart; // offset 0xBD0, size 0x18, align 255
    RotationVector m_localRotationVector; // offset 0xBE8, size 0xC, align 4
    float32 m_flSpeed; // offset 0xBF4, size 0x4, align 4
    float32 m_flFanFriction; // offset 0xBF8, size 0x4, align 4
    float32 m_flAttenuation; // offset 0xBFC, size 0x4, align 4
    float32 m_flVolume; // offset 0xC00, size 0x4, align 4
    float32 m_flTargetSpeed; // offset 0xC04, size 0x4, align 4
    float32 m_flMaxSpeed; // offset 0xC08, size 0x4, align 4
    float32 m_flBlockDamage; // offset 0xC0C, size 0x4, align 4
    CGameSoundEventName m_NoiseRunning; // offset 0xC10, size 0x8, align 8
    bool m_bReversed; // offset 0xC18, size 0x1, align 1
    bool m_bAccelDecel; // offset 0xC19, size 0x1, align 1
    char _pad_0C1A[0x16]; // offset 0xC1A
    QAngle m_prevLocalAngles; // offset 0xC30, size 0xC, align 4
    QAngle m_angStart; // offset 0xC3C, size 0xC, align 4
    bool m_bStopAtStartPos; // offset 0xC48, size 0x1, align 1
    char _pad_0C49[0x3]; // offset 0xC49
    Vector m_vecClientOrigin; // offset 0xC4C, size 0xC, align 4 | MNotSaved
    QAngle m_vecClientAngles; // offset 0xC58, size 0xC, align 4 | MNotSaved
    char _pad_0C64[0x4]; // offset 0xC64
};
