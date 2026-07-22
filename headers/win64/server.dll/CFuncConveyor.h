#pragma once

class CFuncConveyor : public CBaseModelEntity /*0x0*/  // sizeof 0x7C0, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x770]; // offset 0x0
    CUtlSymbolLarge m_szConveyorModels; // offset 0x770, size 0x8, align 8
    float32 m_flTransitionDurationSeconds; // offset 0x778, size 0x4, align 4
    float32 m_flSpeed; // offset 0x77C, size 0x4, align 4
    QAngle m_angMoveEntitySpace; // offset 0x780, size 0xC, align 4
    Vector m_vecMoveDirEntitySpace; // offset 0x78C, size 0xC, align 4
    float32 m_flTargetSpeed; // offset 0x798, size 0x4, align 4
    GameTick_t m_nTransitionStartTick; // offset 0x79C, size 0x4, align 255
    int32 m_nTransitionDurationTicks; // offset 0x7A0, size 0x4, align 4
    float32 m_flTransitionStartSpeed; // offset 0x7A4, size 0x4, align 4
    CNetworkUtlVectorBase< CHandle< CBaseEntity > > m_hConveyorModels; // offset 0x7A8, size 0x18, align 8
};
