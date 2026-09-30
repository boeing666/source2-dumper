#pragma once

class CCitadel_Modifier_SpeedBoostVData : public CCitadelModifierVData /*0x0*/  // sizeof 0x768, align 0x8 [vtable] (server) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x760]; // offset 0x0
    float32 m_flMoveSpeedBoost; // offset 0x760, size 0x4, align 4
    float32 m_flAnimationTimeScale; // offset 0x764, size 0x4, align 4
};
