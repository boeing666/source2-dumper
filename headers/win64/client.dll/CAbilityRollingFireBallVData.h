#pragma once

class CAbilityRollingFireBallVData : public CitadelAbilityVData /*0x0*/  // sizeof 0x1830, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1818]; // offset 0x0
    float32 m_flBallLifetime; // offset 0x1818, size 0x4, align 4 | MPropertyStartGroup MPropertyStartGroup MPropertyStartGroup MPropertyStartGroup
    float32 m_flBallStepUpHeight; // offset 0x181C, size 0x4, align 4
    float32 m_flBallDistAboveGround; // offset 0x1820, size 0x4, align 4
    float32 m_flBallFloatDownRate; // offset 0x1824, size 0x4, align 4
    float32 m_flBallSpeed; // offset 0x1828, size 0x4, align 4
    float32 m_flBallTraceRadius; // offset 0x182C, size 0x4, align 4
};
