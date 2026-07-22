#pragma once

class C_OP_LagCompensation : public CParticleFunctionOperator /*0x0*/  // sizeof 0x1E8, align 0x8 [vtable] (particles) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1D8]; // offset 0x0
    int32 m_nDesiredVelocityCP; // offset 0x1D8, size 0x4, align 4 | MPropertyFriendlyName
    int32 m_nLatencyCP; // offset 0x1DC, size 0x4, align 4 | MPropertyFriendlyName
    int32 m_nLatencyCPField; // offset 0x1E0, size 0x4, align 4 | MPropertyFriendlyName
    int32 m_nDesiredVelocityCPField; // offset 0x1E4, size 0x4, align 4 | MPropertyFriendlyName
};
