#pragma once

class CFuncConveyor : public CBaseModelEntity /*0x0*/  // sizeof 0xAA0, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0xA50]; // offset 0x0
    CUtlSymbolLarge m_szConveyorModels; // offset 0xA50, size 0x8, align 8
    float32 m_flTransitionDurationSeconds; // offset 0xA58, size 0x4, align 4
    float32 m_flSpeed; // offset 0xA5C, size 0x4, align 4
    QAngle m_angMoveEntitySpace; // offset 0xA60, size 0xC, align 4
    Vector m_vecMoveDirEntitySpace; // offset 0xA6C, size 0xC, align 4
    float32 m_flTargetSpeed; // offset 0xA78, size 0x4, align 4
    GameTick_t m_nTransitionStartTick; // offset 0xA7C, size 0x4, align 255
    int32 m_nTransitionDurationTicks; // offset 0xA80, size 0x4, align 4
    float32 m_flTransitionStartSpeed; // offset 0xA84, size 0x4, align 4
    CNetworkUtlVectorBase< CHandle< CBaseEntity > > m_hConveyorModels; // offset 0xA88, size 0x18, align 8
};
