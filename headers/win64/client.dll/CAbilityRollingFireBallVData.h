#pragma once

class CAbilityRollingFireBallVData : public CitadelAbilityVData /*0x0*/  // sizeof 0x1088, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1070]; // offset 0x0
    float32 m_flBallLifetime; // offset 0x1070, size 0x4, align 4 | MPropertyStartGroup MPropertyStartGroup MPropertyStartGroup MPropertyStartGroup
    float32 m_flBallStepUpHeight; // offset 0x1074, size 0x4, align 4
    float32 m_flBallDistAboveGround; // offset 0x1078, size 0x4, align 4
    float32 m_flBallFloatDownRate; // offset 0x107C, size 0x4, align 4
    float32 m_flBallSpeed; // offset 0x1080, size 0x4, align 4
    float32 m_flBallTraceRadius; // offset 0x1084, size 0x4, align 4
};
