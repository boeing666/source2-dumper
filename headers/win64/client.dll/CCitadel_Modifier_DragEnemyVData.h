#pragma once

class CCitadel_Modifier_DragEnemyVData : public CCitadelModifierVData /*0x0*/  // sizeof 0x768, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x750]; // offset 0x0
    float32 m_flForwardOffset; // offset 0x750, size 0x4, align 4 | MPropertyStartGroup
    float32 m_flVerticalOffset; // offset 0x754, size 0x4, align 4
    float32 m_flDragDistance; // offset 0x758, size 0x4, align 4
    float32 m_flForceDistScale; // offset 0x75C, size 0x4, align 4
    bool m_bZDownOnly; // offset 0x760, size 0x1, align 1
    bool m_bAnimate; // offset 0x761, size 0x1, align 1
    char _pad_0762[0x6]; // offset 0x762
};
