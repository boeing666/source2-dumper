#pragma once

class C_FuncConveyor : public C_BaseModelEntity /*0x0*/  // sizeof 0x10E0, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x10A0]; // offset 0x0
    Vector m_vecMoveDirEntitySpace; // offset 0x10A0, size 0xC, align 4
    float32 m_flTargetSpeed; // offset 0x10AC, size 0x4, align 4
    GameTick_t m_nTransitionStartTick; // offset 0x10B0, size 0x4, align 255
    int32 m_nTransitionDurationTicks; // offset 0x10B4, size 0x4, align 4
    float32 m_flTransitionStartSpeed; // offset 0x10B8, size 0x4, align 4
    float32 m_flFrictionScale; // offset 0x10BC, size 0x4, align 4
    C_NetworkUtlVectorBase< CHandle< C_BaseEntity > > m_hConveyorModels; // offset 0x10C0, size 0x18, align 8
    float32 m_flCurrentConveyorOffset; // offset 0x10D8, size 0x4, align 4
    float32 m_flCurrentConveyorSpeed; // offset 0x10DC, size 0x4, align 4
};
