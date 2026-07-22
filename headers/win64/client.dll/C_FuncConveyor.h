#pragma once

class C_FuncConveyor : public C_BaseModelEntity /*0x0*/  // sizeof 0xFF8, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0xFB8]; // offset 0x0
    Vector m_vecMoveDirEntitySpace; // offset 0xFB8, size 0xC, align 4
    float32 m_flTargetSpeed; // offset 0xFC4, size 0x4, align 4
    GameTick_t m_nTransitionStartTick; // offset 0xFC8, size 0x4, align 255
    int32 m_nTransitionDurationTicks; // offset 0xFCC, size 0x4, align 4
    float32 m_flTransitionStartSpeed; // offset 0xFD0, size 0x4, align 4
    char _pad_0FD4[0x4]; // offset 0xFD4
    C_NetworkUtlVectorBase< CHandle< C_BaseEntity > > m_hConveyorModels; // offset 0xFD8, size 0x18, align 8
    float32 m_flCurrentConveyorOffset; // offset 0xFF0, size 0x4, align 4
    float32 m_flCurrentConveyorSpeed; // offset 0xFF4, size 0x4, align 4
};
