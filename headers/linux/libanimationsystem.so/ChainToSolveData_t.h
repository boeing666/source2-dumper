#pragma once

struct ChainToSolveData_t  // sizeof 0x50, align 0x10 (animgraphlib) {MGetKV3ClassDefaults}
{
    int32 m_nChainIndex; // offset 0x0, size 0x4, align 4
    IKSolverSettings_t m_SolverSettings; // offset 0x4, size 0xC, align 255
    IKTargetSettings_t m_TargetSettings; // offset 0x10, size 0x28, align 255
    SolveIKChainAnimNodeDebugSetting m_DebugSetting; // offset 0x38, size 0x4, align 4
    float32 m_flDebugNormalizedValue; // offset 0x3C, size 0x4, align 4
    VectorAligned m_vDebugOffset; // offset 0x40, size 0x10, align 16
};
