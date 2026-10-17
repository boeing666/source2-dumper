#pragma once

class CFuncRotating : public CBaseModelEntity /*0x0*/  // sizeof 0x920, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x858]; // offset 0x0
    CEntityIOOutput m_OnStopped; // offset 0x858, size 0x18, align 255
    CEntityIOOutput m_OnStarted; // offset 0x870, size 0x18, align 255
    CEntityIOOutput m_OnReachedStart; // offset 0x888, size 0x18, align 255
    RotationVector m_localRotationVector; // offset 0x8A0, size 0xC, align 4
    float32 m_flSpeed; // offset 0x8AC, size 0x4, align 4
    float32 m_flFanFriction; // offset 0x8B0, size 0x4, align 4
    float32 m_flAttenuation; // offset 0x8B4, size 0x4, align 4
    float32 m_flVolume; // offset 0x8B8, size 0x4, align 4
    float32 m_flTargetSpeed; // offset 0x8BC, size 0x4, align 4
    float32 m_flMaxSpeed; // offset 0x8C0, size 0x4, align 4
    float32 m_flBlockDamage; // offset 0x8C4, size 0x4, align 4
    CGameSoundEventName m_NoiseRunning; // offset 0x8C8, size 0x8, align 8
    bool m_bReversed; // offset 0x8D0, size 0x1, align 1
    bool m_bAccelDecel; // offset 0x8D1, size 0x1, align 1
    char _pad_08D2[0x16]; // offset 0x8D2
    QAngle m_prevLocalAngles; // offset 0x8E8, size 0xC, align 4
    QAngle m_angStart; // offset 0x8F4, size 0xC, align 4
    bool m_bStopAtStartPos; // offset 0x900, size 0x1, align 1
    char _pad_0901[0x3]; // offset 0x901
    Vector m_vecClientOrigin; // offset 0x904, size 0xC, align 4 | MNotSaved
    QAngle m_vecClientAngles; // offset 0x910, size 0xC, align 4 | MNotSaved
    char _pad_091C[0x4]; // offset 0x91C
};
