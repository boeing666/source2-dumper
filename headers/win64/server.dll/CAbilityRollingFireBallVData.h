#pragma once

class CAbilityRollingFireBallVData : public CitadelAbilityVData /*0x0*/  // sizeof 0x1098, align 0x8 [vtable] (server) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1080]; // offset 0x0
    float32 m_flBallLifetime; // offset 0x1080, size 0x4, align 4 | MPropertyStartGroup MPropertyStartGroup MPropertyStartGroup MPropertyStartGroup
    float32 m_flBallStepUpHeight; // offset 0x1084, size 0x4, align 4
    float32 m_flBallDistAboveGround; // offset 0x1088, size 0x4, align 4
    float32 m_flBallFloatDownRate; // offset 0x108C, size 0x4, align 4
    float32 m_flBallSpeed; // offset 0x1090, size 0x4, align 4
    float32 m_flBallTraceRadius; // offset 0x1094, size 0x4, align 4
};
