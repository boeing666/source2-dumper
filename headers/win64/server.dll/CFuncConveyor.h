#pragma once

class CFuncConveyor : public CBaseModelEntity /*0x0*/  // sizeof 0x8A8, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x850]; // offset 0x0
    CUtlSymbolLarge m_szConveyorModels; // offset 0x850, size 0x8, align 8
    float32 m_flTransitionDurationSeconds; // offset 0x858, size 0x4, align 4
    float32 m_flSpeed; // offset 0x85C, size 0x4, align 4
    QAngle m_angMoveEntitySpace; // offset 0x860, size 0xC, align 4
    Vector m_vecMoveDirEntitySpace; // offset 0x86C, size 0xC, align 4
    float32 m_flTargetSpeed; // offset 0x878, size 0x4, align 4
    GameTick_t m_nTransitionStartTick; // offset 0x87C, size 0x4, align 255
    int32 m_nTransitionDurationTicks; // offset 0x880, size 0x4, align 4
    float32 m_flTransitionStartSpeed; // offset 0x884, size 0x4, align 4
    float32 m_flFrictionScale; // offset 0x888, size 0x4, align 4
    char _pad_088C[0x4]; // offset 0x88C
    CNetworkUtlVectorBase< CHandle< CBaseEntity > > m_hConveyorModels; // offset 0x890, size 0x18, align 8
};
