#pragma once

class CAbilityRollingFireBallVData : public CitadelAbilityVData /*0x0*/  // sizeof 0x13B8, align 0x8 [vtable] (server) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x13A0]; // offset 0x0
    float32 m_flBallLifetime; // offset 0x13A0, size 0x4, align 4 | MPropertyStartGroup MPropertyStartGroup MPropertyStartGroup MPropertyStartGroup
    float32 m_flBallStepUpHeight; // offset 0x13A4, size 0x4, align 4
    float32 m_flBallDistAboveGround; // offset 0x13A8, size 0x4, align 4
    float32 m_flBallFloatDownRate; // offset 0x13AC, size 0x4, align 4
    float32 m_flBallSpeed; // offset 0x13B0, size 0x4, align 4
    float32 m_flBallTraceRadius; // offset 0x13B4, size 0x4, align 4
};
