#pragma once

class CFuncRotating : public CBaseModelEntity /*0x0*/  // sizeof 0x848, align 0x8 [vtable] (server) {MNetworkOverride MNetworkOverride}
{
public:
    char _pad_0000[0x780]; // offset 0x0
    CEntityIOOutput m_OnStopped; // offset 0x780, size 0x18, align 255
    CEntityIOOutput m_OnStarted; // offset 0x798, size 0x18, align 255
    CEntityIOOutput m_OnReachedStart; // offset 0x7B0, size 0x18, align 255
    RotationVector m_localRotationVector; // offset 0x7C8, size 0xC, align 4
    float32 m_flFanFriction; // offset 0x7D4, size 0x4, align 4
    float32 m_flAttenuation; // offset 0x7D8, size 0x4, align 4
    float32 m_flVolume; // offset 0x7DC, size 0x4, align 4
    float32 m_flTargetSpeed; // offset 0x7E0, size 0x4, align 4
    float32 m_flMaxSpeed; // offset 0x7E4, size 0x4, align 4
    float32 m_flBlockDamage; // offset 0x7E8, size 0x4, align 4
    char _pad_07EC[0x4]; // offset 0x7EC
    CUtlSymbolLarge m_NoiseRunning; // offset 0x7F0, size 0x8, align 8
    bool m_bReversed; // offset 0x7F8, size 0x1, align 1
    bool m_bAccelDecel; // offset 0x7F9, size 0x1, align 1
    char _pad_07FA[0x16]; // offset 0x7FA
    QAngle m_prevLocalAngles; // offset 0x810, size 0xC, align 4
    QAngle m_angStart; // offset 0x81C, size 0xC, align 4
    bool m_bStopAtStartPos; // offset 0x828, size 0x1, align 1
    char _pad_0829[0x3]; // offset 0x829
    Vector m_vecClientOrigin; // offset 0x82C, size 0xC, align 4 | MNotSaved
    QAngle m_vecClientAngles; // offset 0x838, size 0xC, align 4 | MNotSaved
    char _pad_0844[0x4]; // offset 0x844
};
