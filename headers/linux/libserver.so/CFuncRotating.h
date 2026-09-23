#pragma once

class CFuncRotating : public CBaseModelEntity /*0x0*/  // sizeof 0xBF8, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0xB30]; // offset 0x0
    CEntityIOOutput m_OnStopped; // offset 0xB30, size 0x18, align 255
    CEntityIOOutput m_OnStarted; // offset 0xB48, size 0x18, align 255
    CEntityIOOutput m_OnReachedStart; // offset 0xB60, size 0x18, align 255
    RotationVector m_localRotationVector; // offset 0xB78, size 0xC, align 4
    float32 m_flSpeed; // offset 0xB84, size 0x4, align 4
    float32 m_flFanFriction; // offset 0xB88, size 0x4, align 4
    float32 m_flAttenuation; // offset 0xB8C, size 0x4, align 4
    float32 m_flVolume; // offset 0xB90, size 0x4, align 4
    float32 m_flTargetSpeed; // offset 0xB94, size 0x4, align 4
    float32 m_flMaxSpeed; // offset 0xB98, size 0x4, align 4
    float32 m_flBlockDamage; // offset 0xB9C, size 0x4, align 4
    CGameSoundEventName m_NoiseRunning; // offset 0xBA0, size 0x8, align 8
    bool m_bReversed; // offset 0xBA8, size 0x1, align 1
    bool m_bAccelDecel; // offset 0xBA9, size 0x1, align 1
    char _pad_0BAA[0x16]; // offset 0xBAA
    QAngle m_prevLocalAngles; // offset 0xBC0, size 0xC, align 4
    QAngle m_angStart; // offset 0xBCC, size 0xC, align 4
    bool m_bStopAtStartPos; // offset 0xBD8, size 0x1, align 1
    char _pad_0BD9[0x3]; // offset 0xBD9
    Vector m_vecClientOrigin; // offset 0xBDC, size 0xC, align 4 | MNotSaved
    QAngle m_vecClientAngles; // offset 0xBE8, size 0xC, align 4 | MNotSaved
    char _pad_0BF4[0x4]; // offset 0xBF4
};
