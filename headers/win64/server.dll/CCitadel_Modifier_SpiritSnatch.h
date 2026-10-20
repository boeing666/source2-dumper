#pragma once

class CCitadel_Modifier_SpiritSnatch : public CCitadel_Modifier_BaseEventProc /*0x0*/  // sizeof 0x678, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x2E8]; // offset 0x0
    float32 m_flCooldownDuration; // offset 0x2E8, size 0x4, align 4
    char _pad_02EC[0x4]; // offset 0x2EC
    CModifierHandleTyped< CCitadelModifier > m_hBuffHandle; // offset 0x2F0, size 0x18, align 8
    char _pad_0308[0x370]; // offset 0x308
};
