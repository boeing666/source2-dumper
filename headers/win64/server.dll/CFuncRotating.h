#pragma once

class CFuncRotating : public CBaseModelEntity /*0x0*/  // sizeof 0x918, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x850]; // offset 0x0
    CEntityIOOutput m_OnStopped; // offset 0x850, size 0x18, align 255
    CEntityIOOutput m_OnStarted; // offset 0x868, size 0x18, align 255
    CEntityIOOutput m_OnReachedStart; // offset 0x880, size 0x18, align 255
    RotationVector m_localRotationVector; // offset 0x898, size 0xC, align 4
    float32 m_flSpeed; // offset 0x8A4, size 0x4, align 4
    float32 m_flFanFriction; // offset 0x8A8, size 0x4, align 4
    float32 m_flAttenuation; // offset 0x8AC, size 0x4, align 4
    float32 m_flVolume; // offset 0x8B0, size 0x4, align 4
    float32 m_flTargetSpeed; // offset 0x8B4, size 0x4, align 4
    float32 m_flMaxSpeed; // offset 0x8B8, size 0x4, align 4
    float32 m_flBlockDamage; // offset 0x8BC, size 0x4, align 4
    CGameSoundEventName m_NoiseRunning; // offset 0x8C0, size 0x8, align 8
    bool m_bReversed; // offset 0x8C8, size 0x1, align 1
    bool m_bAccelDecel; // offset 0x8C9, size 0x1, align 1
    char _pad_08CA[0x16]; // offset 0x8CA
    QAngle m_prevLocalAngles; // offset 0x8E0, size 0xC, align 4
    QAngle m_angStart; // offset 0x8EC, size 0xC, align 4
    bool m_bStopAtStartPos; // offset 0x8F8, size 0x1, align 1
    char _pad_08F9[0x3]; // offset 0x8F9
    Vector m_vecClientOrigin; // offset 0x8FC, size 0xC, align 4 | MNotSaved
    QAngle m_vecClientAngles; // offset 0x908, size 0xC, align 4 | MNotSaved
    char _pad_0914[0x4]; // offset 0x914
};
