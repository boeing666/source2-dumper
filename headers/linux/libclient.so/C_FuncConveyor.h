#pragma once

class C_FuncConveyor : public C_BaseModelEntity /*0x0*/  // sizeof 0xF80, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0xF40]; // offset 0x0
    Vector m_vecMoveDirEntitySpace; // offset 0xF40, size 0xC, align 4
    float32 m_flTargetSpeed; // offset 0xF4C, size 0x4, align 4
    GameTick_t m_nTransitionStartTick; // offset 0xF50, size 0x4, align 255
    int32 m_nTransitionDurationTicks; // offset 0xF54, size 0x4, align 4
    float32 m_flTransitionStartSpeed; // offset 0xF58, size 0x4, align 4
    char _pad_0F5C[0x4]; // offset 0xF5C
    C_NetworkUtlVectorBase< CHandle< C_BaseEntity > > m_hConveyorModels; // offset 0xF60, size 0x18, align 8
    float32 m_flCurrentConveyorOffset; // offset 0xF78, size 0x4, align 4
    float32 m_flCurrentConveyorSpeed; // offset 0xF7C, size 0x4, align 4
};
