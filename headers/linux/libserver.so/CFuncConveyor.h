#pragma once

class CFuncConveyor : public CBaseModelEntity /*0x0*/  // sizeof 0xB88, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0xB30]; // offset 0x0
    CUtlSymbolLarge m_szConveyorModels; // offset 0xB30, size 0x8, align 8
    float32 m_flTransitionDurationSeconds; // offset 0xB38, size 0x4, align 4
    float32 m_flSpeed; // offset 0xB3C, size 0x4, align 4
    QAngle m_angMoveEntitySpace; // offset 0xB40, size 0xC, align 4
    Vector m_vecMoveDirEntitySpace; // offset 0xB4C, size 0xC, align 4
    float32 m_flTargetSpeed; // offset 0xB58, size 0x4, align 4
    GameTick_t m_nTransitionStartTick; // offset 0xB5C, size 0x4, align 255
    int32 m_nTransitionDurationTicks; // offset 0xB60, size 0x4, align 4
    float32 m_flTransitionStartSpeed; // offset 0xB64, size 0x4, align 4
    float32 m_flFrictionScale; // offset 0xB68, size 0x4, align 4
    char _pad_0B6C[0x4]; // offset 0xB6C
    CNetworkUtlVectorBase< CHandle< CBaseEntity > > m_hConveyorModels; // offset 0xB70, size 0x18, align 8
};
