#pragma once

class CFootDefinition  // sizeof 0x40, align 0x8 (modellib) {MGetKV3ClassDefaults}
{
public:
    CUtlString m_name; // offset 0x0, size 0x8, align 8
    CUtlString m_ankleBoneName; // offset 0x8, size 0x8, align 8
    CUtlString m_toeBoneName; // offset 0x10, size 0x8, align 8
    Vector m_vBallOffset; // offset 0x18, size 0xC, align 4
    Vector m_vHeelOffset; // offset 0x24, size 0xC, align 4
    float32 m_flFootLength; // offset 0x30, size 0x4, align 4
    float32 m_flBindPoseDirectionMS; // offset 0x34, size 0x4, align 4
    float32 m_flTraceHeight; // offset 0x38, size 0x4, align 4
    float32 m_flTraceRadius; // offset 0x3C, size 0x4, align 4
};
