#pragma once

class CCitadel_Modifier_ChargePullEnemy : public CCitadelModifier /*0x0*/  // sizeof 0x420, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x408]; // offset 0x0
    Vector m_vecOffsetDir; // offset 0x408, size 0xC, align 4
    float32 m_flTackleRadius; // offset 0x414, size 0x4, align 4
    float32 m_flPullTargetSpeed; // offset 0x418, size 0x4, align 4
    char _pad_041C[0x4]; // offset 0x41C
};
