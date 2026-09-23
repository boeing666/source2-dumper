#pragma once

class CNmGraphDocRootMotionOverrideNode : public CNmGraphDocFlowNode /*0x0*/  // sizeof 0x118, align 0x8 [vtable] (animdoclib) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x108]; // offset 0x0
    float32 m_flMaxLinearVelocity; // offset 0x108, size 0x4, align 4
    float32 m_flMaxAngularVelocityDegrees; // offset 0x10C, size 0x4, align 4
    bool m_bOverrideMoveDirX; // offset 0x110, size 0x1, align 1
    bool m_bOverrideMoveDirY; // offset 0x111, size 0x1, align 1
    bool m_bOverrideMoveDirZ; // offset 0x112, size 0x1, align 1
    bool m_bAllowPitchForFacing; // offset 0x113, size 0x1, align 1
    bool m_bListenForRootMotionEvents; // offset 0x114, size 0x1, align 1
    char _pad_0115[0x3]; // offset 0x115
};
