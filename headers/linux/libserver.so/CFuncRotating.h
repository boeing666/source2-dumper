#pragma once

class CFuncRotating : public CBaseModelEntity /*0x0*/  // sizeof 0xC00, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0xB38]; // offset 0x0
    CEntityIOOutput m_OnStopped; // offset 0xB38, size 0x18, align 255
    CEntityIOOutput m_OnStarted; // offset 0xB50, size 0x18, align 255
    CEntityIOOutput m_OnReachedStart; // offset 0xB68, size 0x18, align 255
    RotationVector m_localRotationVector; // offset 0xB80, size 0xC, align 4
    float32 m_flSpeed; // offset 0xB8C, size 0x4, align 4
    float32 m_flFanFriction; // offset 0xB90, size 0x4, align 4
    float32 m_flAttenuation; // offset 0xB94, size 0x4, align 4
    float32 m_flVolume; // offset 0xB98, size 0x4, align 4
    float32 m_flTargetSpeed; // offset 0xB9C, size 0x4, align 4
    float32 m_flMaxSpeed; // offset 0xBA0, size 0x4, align 4
    float32 m_flBlockDamage; // offset 0xBA4, size 0x4, align 4
    CGameSoundEventName m_NoiseRunning; // offset 0xBA8, size 0x8, align 8
    bool m_bReversed; // offset 0xBB0, size 0x1, align 1
    bool m_bAccelDecel; // offset 0xBB1, size 0x1, align 1
    char _pad_0BB2[0x16]; // offset 0xBB2
    QAngle m_prevLocalAngles; // offset 0xBC8, size 0xC, align 4
    QAngle m_angStart; // offset 0xBD4, size 0xC, align 4
    bool m_bStopAtStartPos; // offset 0xBE0, size 0x1, align 1
    char _pad_0BE1[0x3]; // offset 0xBE1
    Vector m_vecClientOrigin; // offset 0xBE4, size 0xC, align 4 | MNotSaved
    QAngle m_vecClientAngles; // offset 0xBF0, size 0xC, align 4 | MNotSaved
    char _pad_0BFC[0x4]; // offset 0xBFC
};
