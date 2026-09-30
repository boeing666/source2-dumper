#pragma once

class CCitadel_Modifier_ChargePullEnemy : public CCitadelModifier /*0x0*/  // sizeof 0x148, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x130]; // offset 0x0
    Vector m_vecOffsetDir; // offset 0x130, size 0xC, align 4
    float32 m_flTackleRadius; // offset 0x13C, size 0x4, align 4
    float32 m_flPullTargetSpeed; // offset 0x140, size 0x4, align 4
    char _pad_0144[0x4]; // offset 0x144
};
