#pragma once

class C_OP_TeleportBeam : public CParticleFunctionOperator /*0x0*/  // sizeof 0x208, align 0x8 [vtable] (particles) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1D0]; // offset 0x0
    int32 m_nCPPosition; // offset 0x1D0, size 0x4, align 4 | MPropertyFriendlyName
    int32 m_nCPVelocity; // offset 0x1D4, size 0x4, align 4 | MPropertyFriendlyName
    int32 m_nCPMisc; // offset 0x1D8, size 0x4, align 4 | MPropertyFriendlyName
    int32 m_nCPColor; // offset 0x1DC, size 0x4, align 4 | MPropertyFriendlyName
    int32 m_nCPInvalidColor; // offset 0x1E0, size 0x4, align 4 | MPropertyFriendlyName
    int32 m_nCPExtraArcData; // offset 0x1E4, size 0x4, align 4 | MPropertyFriendlyName
    Vector m_vGravity; // offset 0x1E8, size 0xC, align 4 | MPropertyFriendlyName
    float32 m_flArcMaxDuration; // offset 0x1F4, size 0x4, align 4 | MPropertyFriendlyName
    float32 m_flSegmentBreak; // offset 0x1F8, size 0x4, align 4 | MPropertyFriendlyName
    float32 m_flArcSpeed; // offset 0x1FC, size 0x4, align 4 | MPropertyFriendlyName
    float32 m_flAlpha; // offset 0x200, size 0x4, align 4 | MPropertyFriendlyName
    char _pad_0204[0x4]; // offset 0x204
};
